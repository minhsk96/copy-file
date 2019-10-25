/*
Đề bài: từ file .xml tách các trường mang thông tin cần để sử dụng, cụ thể các trường này là "codebase" 
và "name". 
Phương pháp làm: DÙNG THƯ VIỆN <string.h> chỉ bằng cách xử lý chuỗi thông thường là duyệt tát cả các từ 
trong file .xml rồi so sánhcác từ này với các key là các trường cần tìm để tìm ra các trường này nằm ở 
đâu trong file. Sau khi tìm được vị trí của các trường này thì bước tiếp theo là tách thông tin cần thiết 
(cụ thể là thông tin nằm trong dấu nháy kép ). Sau khhi tách được các thông tin cần sau đó ghép hai thông 
tin đó lại ta được thoông tin cần tìm.   
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include <curl/curl.h>
#define FileNameGET "return_file.xml"
#define FileNamePOST "test.xml"


// hàm thay thế chuỗi s1 bằng chuỗi s2 vào chuỗi s. 
char *str_str (char *s, char *s1, char *s2)
{
  int len = strlen (s);
  int len1 = strlen (s1);
  int len2 = strlen (s2);
  int i = 0, j, luu;
  if (len1 != 0)
    while (i < len)
    {
      if (s[i] == s1[0])
      {
        j = 0;
        luu = i;
        while (s1[++j] == s[++luu] && j < len1);
        if (j == len1)
        {
          memmove (&s[i + len2], &s[i + len1], len - i - len1 + 1);
          memcpy (&s[i], s2, strlen(s2));
          len = len - len1 + len2;
          i += len2;
        }
        else i++;
      } else i++;
    }
    return s;
}







int main(){
    char *ChuoiMe = NULL;
    clock_t t;
    t = clock();// tính thời giân chương trình chạy.
    FILE *file_url = fopen("link.txt","w");
    while(1){

        //=================================================================================================
    // get và post thông tin từ client với server.


        CURL *curl;
        CURLcode res;
        char *line_buf1 = NULL;
        size_t line_buf_size1 = 0;
        ssize_t line_size;
        
        FILE *post = fopen(FileNamePOST, "r");
        FILE * file1 = fopen( FileNameGET , "w");
        if (!post)
            {
          fprintf(stderr, "Lỗi đọc file '%s'\n", FileNamePOST);
           return 1;
            }
        
        line_size = getline(&line_buf1, &line_buf_size1, post);
        char *url = "http://20.20.20.51:9090/service/update2";
        curl = curl_easy_init();
          
        if(curl)
          {
            struct curl_slist *slist = NULL;
          
            slist = curl_slist_append(slist, "Accept: */*");
            slist = curl_slist_append(slist, "\\\"Content-Type:text/xml;charset=UTF-8\"\\");
            
            
            curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist); // thêm phần header 
            curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
            curl_easy_setopt(curl, CURLOPT_HEADER, 0);
            curl_easy_setopt(curl, CURLOPT_USERAGENT,  "Linux C  libcurl");
            curl_easy_setopt(curl, CURLOPT_URL, url);
            curl_easy_setopt(curl, CURLOPT_TIMEOUT, 30);
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, line_buf1);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, file1);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            curl_slist_free_all(slist);
            
        }

        /// break nếu thông tin trả về từ server có kích thước nhỏ hơn một mức nào đó. ở đây lấy = 1000 bytes
        fseek(file1, 0L, SEEK_END); // get file size 
        int sz = ftell(file1); // file size = sz 
        if(sz < 1000) {
            break;
        }
        fclose(file1);

    ///=============================================================================================================




        // phần khai báo các biến.
        clock_t t;
        t = clock();// tính thời giân chương trình chạy.

        char *key[3] ;// khai báo mangr con trỏ key chứa thông tin của ba trường ta cần lấy trong file xml.
        key[0] = "codebase" ;
        key[1] = "version";
        key[2] = "name";

        char buff[255] = { 0 };// bộ nhớ đệm 
        char *ChuoiCon[3];
        char *str[3];
        char s[3][255] = {0} ;
        int i ;
        int Ktra = 0;
        int k=0;

        //mở file cần xử lý, và kiểm tra file.
        FILE *f = fopen( FileNameGET ,"rb");
        if(f == NULL) {
            printf("11111 could not open file");
            return 0;
        }
       
        // duyệt qua từng từ (được gán vào biến buff) trong file .xml, nếu phát hiện trường key có trong từ đó hay không.
        while(fscanf(f,"%s", buff) != EOF){
            
            // trả về một chuỗi nếu tìm thấy key trong từ đó, không tìn thấy thì trả về NULL.
            str[k] = strstr(buff,key[k]);
            if(str[k] != NULL){
                // Nếu phát hiện key có bên trong buff thì gán vào một mảng. 
                for(i = 0 ; i<strlen(str[k]) ; i++){
                    s[k][i] = str[k][i];
                }
                
                if (k==1){
                  ChuoiCon[k] = s[k];
                }
                // tách lấy thông tin trong dấu nháy kép.
                else{
                  ChuoiCon[k] = strtok(s[k],"\"");
                  ChuoiCon[k] = strtok(NULL,"\"");
                }

                //tăng giá trị kiểm tra lên 1 nếu tìm được từ mang thông tin chưa key. 
                Ktra ++;
                k++;
                if(Ktra == 3)   break; 
            }

            
        }
        
        // printf("111----%s\n",ChuoiCon[0]);
        // printf("222----%s\n",ChuoiCon[1]);
        // printf("333----%s\n",ChuoiCon[2]);

        ChuoiMe = strcat(ChuoiCon[0], ChuoiCon[2]);

        printf("chuoi url -----:%s\n",ChuoiMe);

    ///=====================================================================================


        char *line_buf = NULL;
        size_t line_buf_size = 0;
        FILE *f1;

        char buff1[255] = {0};
        char *str1 = NULL;
        //char *key1 = "version";
        int k1 = 0;

        
        f1 = fopen(FileNamePOST ,"r");
        if(f1 == NULL) {
            printf("2222 could not open file 1");
            return 0;
        }
        
        
        while(fscanf(f1,"%s", buff1) != EOF){
        
            str1 = strstr(buff1,key[1]);
            if(str1 != NULL){
                k1++;
                if(k1==4)     break;
            }
        }
       
        fclose(f1);

        f1 = fopen(FileNamePOST ,"r");
        getline(&line_buf, &line_buf_size, f1);
        printf("old POST XML \n%s\n", line_buf);

        // sau khi tìm được phiên bản mới hơn thì ta thay thế phiên bản cũ bằng phiên bản mới hơn được trả về từ server. 
        str_str( line_buf, str1, ChuoiCon[1]);

        printf("old version:\t%s\n", str1);
        printf("new version:\t%s\n", ChuoiCon[1]);

        printf("new POST XML:\t%s\n", line_buf);

        fclose(f1);

        if( strcmp( str1, ChuoiCon[1] ) != 0 ){

            remove(FileNamePOST);
            FILE * Create_File = fopen( FileNamePOST , "w+");
            fprintf(Create_File, "%s", line_buf );
            fclose(Create_File);
        }
        else {
            printf("this is latest version !\n");
            break;
        }

        
    ///==============================================================================================================

        fclose(f);
    }
    printf("\n\n[%s]\n", ChuoiMe);
    t = clock() - t;
    double time = ((double)t)/CLOCKS_PER_SEC; // tính bằng giây.
    printf("thoi gian chay  = %f(s)", time);
    return 0;
}