#include<stdio.h>
#define FileName return_file.xml

// khai báo hai con trỏ key1 và key2 chứa thông tin của hai trường ta cần lấy trong file xml.
char *key1 = "codebase";
char *key2 = "name";
char *KyTuGioiHan = "\"";

// hàm tính toán dộ dài của một chuỗi, và trả về dộ dài đó.
int DoDaiChuoi(char *s){
	int DoDai = 0;
	while(s[DoDai] != '\0'){
		DoDai++;
	}
	return DoDai;
}

// hàm kiểm tra chuỗi c1 có nằm trong chuỗi c2 không, nếu có thì trả về 1, nếu không trả về 0.
int KiemTra(char *key , char *buff){
	int i;
	for( i = 0; i < DoDaiChuoi(key); i++ ){
		if( key[i] != buff [i])	 return 0;
	}
	return 1;
}

// hàm cắt chuỗi buff từ vị trí ViTri1 tới vị trí ViTri2, rồi trả về chuỗi đã được cắt. 
char *cut( char *buff, int ViTri1, int ViTri2 ){
	static char cuted[500];
	int i, j = 0;
	for( i = ViTri1 + 1; i < ViTri2; i++){
		cuted[j] = buff[i];
		j++;
	}
	return cuted;
}
// hàm nối hai chuỗi con thành một chuỗi 
char *NoiChuoi( char *ChuoiCon1, char *ChuoiCon2 ){
	int i, j=0;
	static char ChuoiMe[1000];
	for( i =0; i < DoDaiChuoi( ChuoiCon1); i++ ){
		ChuoiMe[j] = ChuoiCon1[i] ;
		j++;
	}
	for( i =0; i < DoDaiChuoi( ChuoiCon2); i++ ){
		ChuoiMe[j] = ChuoiCon2[i] ;
		j++;
	}
	return ChuoiMe;
}

int main(){
	char buff[500]; // bộ nhớ đệm 
	int i; // biến chạy
	int ViTri[2]; // chứa hai giá trị bắt đầu và kết thúc phần mình cần tách trong chuỗi.
	char *ChuoiCon1, *ChuoiCon2, *ChuoiMe ;

	//mở file cần xử lý
	FILE *f = fopen("return_file.xml" ,"rb");
	if(f == NULL) {
        printf("could not open file");
        return 0;
    }
    // hàm đọc file, với mỗi lần đọc một từ rồi lưu vào bộ nhớ đệm.
	while(fscanf(f,"%s", buff) != EOF){
		
		// Nếu kiểm tra thấy key1, key2 nằm trong buff thì ta xác định vị trí của hai dấu nháy kép 
		// để lấy ra thông tin cần dùng gán vào các chuỗi con ChuoiCon.
		if( KiemTra( key1 , buff)){

			int j =0;
			for( i = 0; i < DoDaiChuoi(buff); i++){
				if( buff[i] == *KyTuGioiHan){
					ViTri[j] = i;
					j++;
				}
			}
		
			ChuoiCon1 = cut( buff, ViTri[0], ViTri[1] );
			ChuoiCon1[ ViTri[1] - ViTri[0] -1] ='\0'; // debug lỗi 
			printf("%s\n", ChuoiCon1 );
		}
		if( KiemTra( key2 , buff)){

			int j =0;
			for( i = 0; i < DoDaiChuoi(buff); i++){
				if( buff[i] == *KyTuGioiHan){
					ViTri[j] = i;
					j++;
				}
			}
			
			ChuoiCon2 = cut( buff, ViTri[0], ViTri[1] );
			ChuoiCon2[ ViTri[1] - ViTri[0]- 1] ='\0';
			printf("%s\n", ChuoiCon2 );
		}
	}
	printf("%s\n", ChuoiCon1 );
	printf("%s\n", ChuoiCon2 );
	ChuoiMe = NoiChuoi( ChuoiCon1, ChuoiCon2);
	printf("%s\n", ChuoiMe);
	fclose(f);
	return 0;
}