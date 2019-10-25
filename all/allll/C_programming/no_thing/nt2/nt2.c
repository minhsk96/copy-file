#include <stdio.h>
#include <curl/curl.h>
#define FILENAME "test.xml"
int main(void)
{
    CURL *curl;
    CURLcode res;
    char *line_buf = NULL;
    size_t line_buf_size = 0;
    ssize_t line_size;
    FILE *post = fopen(FILENAME, "r");
    FILE * f = fopen("return_file.xml","w");
    if (!post)
        {
      fprintf(stderr, "Lỗi đọc file '%s'\n", FILENAME);
       return 1;
        }
    
    line_size = getline(&line_buf, &line_buf_size, post);
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
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, line_buf);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, f);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        curl_slist_free_all(slist);
        
    }
    fclose(f);
    fclose(post);
    return 0;
}
