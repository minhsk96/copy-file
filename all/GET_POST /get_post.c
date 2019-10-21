#include <stdio.h>
#include <curl/curl.h>
 
int main(void)
{
    CURL *curl;
        CURLcode res;
    //char *post = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><transaction><transaction_header  lose some secury  ";
    char *post = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.0\" version=\"1.0.0.0\" ismachine=\"1\" sessionid=\"{52C632A0-DF77-4E31-BF5E-3D954DE396E1}\" userid=\"{434EE046-37E2-434E-9736-7681CDAC70EA}\" installsource=\"scheduler\" testsource=\"auto\" requestid=\"{13ECE427-66D3-44FA-AD41-A60C66BA6677}\"><os platform=\"win\" version=\"100\" sp=\"Service Pack 1\" arch=\"x86\" /><app appid=\"{6E385309-85DB-454F-B20B-04DF53DB2018}\" version=\"3.4.1.8\" nextversion=\"\" lang=\"vi\" brand=\"GGLS\" client=\"OtaClient\" tag=\"stable\" installage=\"0\"><updatecheck/></app></request>";

    char *url = "http://20.20.20.51:9090/service/update2";
    curl = curl_easy_init();
      
    if(curl)
      {
        struct curl_slist *slist = NULL;
      
        slist = curl_slist_append(slist, "Accept: */*");
        // slist = curl_slist_append(slist, "Content-Type: application/x-www-form-urlencoded");
        slist = curl_slist_append(slist, "\\\"Content-Type:text/xml;charset=UTF-8\"\\");
        
        
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist);
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        curl_easy_setopt(curl, CURLOPT_HEADER, 0);
        curl_easy_setopt(curl, CURLOPT_USERAGENT,  "Linux C  libcurl");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_TIMEOUT, 30);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        curl_slist_free_all(slist);
        
    }
    return 0;
}
