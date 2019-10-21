#include <iostream>
#include <string>
#include <curl/curl.h>
#include <fstream>
using namespace std;
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main()
{
  ofstream f;
  f.open("file.txt");
  
  CURL *curl;
  CURLcode res;
  string readBuffer;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "http://20.20.20.51:9090/service/update2");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    cout << res << endl;
    cout << readBuffer << endl;
    f<< readBuffer << endl;
    f.close();
  } return 0;
}