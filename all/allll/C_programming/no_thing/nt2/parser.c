/*
Đề bài: từ file .xml tách các trường mang thông tin cần để sử dụng, cụ thể các trường này là "codebase" 
và "name". 
Phương pháp làm: DÙNG THƯ VIỆN <string.h> chỉ bằng cách xử lý chuỗi thông thường là duyệt tát cả các từ trong file .xml rồi so sánh
các từ này với các key là các trường cần tìm để tìm ra các trường này nằm ở đâu trong file. Sau khi tìm 
được vị trí của các trường này thì bước tiếp theo là tách thông tin cần thiết (cụ thể là thông tin nằm
 trong dấu nháy kép ). Sau khhi tách được các thông tin cần sau đó ghép hai thông tin đó lại ta được 
 thoông tin cần tìm.   
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#define FileName return_file.xml

// khai báo hai con trỏ key1 và key2 chứa thông tin của hai trường ta cần lấy trong file xml.
char *key1 = "codebase";
char *key2 = "name";
char *KyTuGioiHan = "\"";


int main(){
	clock_t t;
	t = clock();

	char buff[255] = { 0 };// bộ nhớ đệm 
	int ViTri[2] = { 0 }; // chứa hai giá trị bắt đầu và kết thúc phần mình cần tách trong chuỗi.
	char *ChuoiCon1 = NULL;
	char *ChuoiCon2 = NULL;
	char *ChuoiMe = NULL;
	char *str1 = NULL;
	char *str2 = NULL;
	char s1[255] = {0} ;
	char s2[255] = {0};
	int i;

	//mở file cần xử lý, và kiểm tra file.
	FILE *f = fopen("return_file.xml" ,"rb");
	if(f == NULL) {
        printf("could not open file");
        return 0;
    }
   

	while(fscanf(f,"%s", buff) != EOF){
	
		// duyệt qua từng từ (được gán vào biến buff) trong file .xml, nếu phát hiện trường key có trong từ đó hay không.
		str1 = strstr(buff,key1);
		if(str1 != NULL){

			// Nếu phát hiện key có bên trong buff thì gán vào một mảng. 
			for(i = 0 ; i<strlen(str1) ; i++){
				s1[i] = str1[i];
			}
			// tách lấy thông tin trong dấu nháy kép.
			ChuoiCon1 = strtok(s1,"\"");
			ChuoiCon1 = strtok(NULL,"\"");
		}
		str2 = strstr(buff,key2);
		if(str2 != NULL){
			for(i = 0 ; i < strlen(str2) ; i++){
				s2[i] = str2[i];
			}
			ChuoiCon2 = strtok(s2,"\"");
			ChuoiCon2 = strtok(NULL,"\"");
		}

		// if(str1 == NULL)	{str1 = strstr(buff,key1);}
		
		// if(str2 == NULL)	{str2 = strstr(buff,key2);}	
		
	}

	printf("1111----%s\n",s1);
	printf("2222----%s\n",s2);
	printf("3333----%s\n",ChuoiCon1);
	printf("4444----%s\n",ChuoiCon2);
	ChuoiMe = strcat(ChuoiCon1, ChuoiCon2);
	printf("5555-----------%s\n",ChuoiMe);

	fclose(f);
	t = clock() - t;
	double time = ((double)t)/CLOCKS_PER_SEC; // in seconds 
	printf("thoi gian chay  = %f(s)", time);
	return 0;
}