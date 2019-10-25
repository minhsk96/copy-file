/*
Đề bài: từ file .xml tách các trường mang thông tin cần để sử dụng, cụ thể các trường này là "codebase" 
và "name". 
Phương pháp làm: KHÔNG DÙNG THƯ VIỆN <string.h> chỉ bằng cách xử lý chuỗi thông thường là duyệt tát cả các từ trong file .xml rồi so sánh
các từ này với các key là các trường cần tìm để tìm ra các trường này nằm ở đâu trong file. Sau khi tìm 
được vị trí của các trường này thì bước tiếp theo là tách thông tin cần thiết (cụ thể là thông tin nằm
 trong dấu nháy kép ). Sau khhi tách được các thông tin cần sau đó ghép hai thông tin đó lại ta được 
 thoông tin cần tìm.   
*/
#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
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
bool KiemTra(char *key , char *buff){
	int i;
	for( i = 0; i < DoDaiChuoi(key); i++ ){
		if( key[i] != buff [i])	 return false;
	}
	return true;
}


// hàm cắt chuỗi buff từ vị trí ViTri1 tới vị trí ViTri2, rồi trả về chuỗi đã được cắt. 
char *cut( char *buff, int ViTri1, int ViTri2 ){
	char *cuted = malloc(ViTri2-ViTri1);
	int i, j = 0;
	for( i = ViTri1 + 1; i < ViTri2; i++){
		cuted[j] = buff[i];
		j++;
	}
	return cuted;
}

// hàm nối hai chuỗi con thành một chuỗi 
char *NoiChuoi( char *ChuoiCon1, char *ChuoiCon2 ){
	int DoDaiChuoiCon1 = DoDaiChuoi(ChuoiCon1);
	int DoDaiChuoiCon2 = DoDaiChuoi(ChuoiCon2);
	int i, j=0;
	char *ChuoiMe = malloc( DoDaiChuoiCon1 + DoDaiChuoiCon2 );
	for( i =0; i < DoDaiChuoiCon1; i++ ){
		ChuoiMe[j] = ChuoiCon1[i] ;
		j++;
	}
	for( i =0; i < DoDaiChuoiCon2; i++ ){
		ChuoiMe[j] = ChuoiCon2[i] ;
		j++;
	}
	return ChuoiMe;
}

int main(){
	clock_t t;
	t = clock();

	char buff[255] = { 0 }; // bộ nhớ đệm 
	int i; // biến chạy
	int ViTri[2] = { 0 }; // chứa hai giá trị bắt đầu và kết thúc phần mình cần tách trong chuỗi.
	char *ChuoiCon1 = NULL;
	char *ChuoiCon2 = NULL;
	char *ChuoiMe = NULL;

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
		if( KiemTra( key1 , buff) ){

			int j =0;
			for( i = 0; i < DoDaiChuoi(buff); i++){
				if( buff[i] == *KyTuGioiHan){
					ViTri[j] = i;
					j++;
				}
			}
			// cắt thông tin nằm trong dấu nháy kép. 
			ChuoiCon1 = cut( buff, ViTri[0], ViTri[1] );
			printf("chuoi 1: %s\n", ChuoiCon1 );
			
		}

		if( KiemTra( key2 , buff)){
			int j =0;
			for( i = 0; i < DoDaiChuoi(buff); i++){
				if( buff[i] == *KyTuGioiHan){
					ViTri[j] = i;
					j++;
				}
			}
			// cắt thông tin nằm trong dấu nháy kép. 
			ChuoiCon2 = cut( buff, ViTri[0], ViTri[1] );
			printf("chuoi 2: %s\n", ChuoiCon2 );
		}

	}
	// ghép hai chuỗi con lại với nhau.
	ChuoiMe = NoiChuoi( ChuoiCon1, ChuoiCon2);
	printf("chuoi da duoc ghep: %s\n", ChuoiMe);
	fclose(f);
	t = clock() - t;
	double time = ((double)t)/CLOCKS_PER_SEC; // in seconds 
	printf("thoi gian chay  = %f(s)", time);
	return 0;
}