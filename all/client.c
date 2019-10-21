#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <curl/curl.h>
#include <curl/easy.h>
#include <unistd.h>
#include <limits.h>
#define PORT 9090 
   
int main(int argc, char const *argv[]) 
{ 
    FILE *f;
    struct sockaddr_in address; 
    int sock = 0, valread; 
    struct sockaddr_in serv_addr; 
    char *hello = "Hello from client";
    char buffer[10000] = {0}; 
    char add[225]= "20.20.20.51";
    int continu = 1;
    //printf("Nhap dia chi server\n");
    //gets(add);
    //tao socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
    { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 
    memset(&serv_addr, '0', sizeof(serv_addr)); 
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
    // Convert IPv4 and IPv6 addresses from text to binary form 
    if(inet_pton(AF_INET, add, &serv_addr.sin_addr) <= 0)  
    { 
        printf("\nInvalid address/ Address not supported \n"); 
        return -1; 
    } 
    // connect
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
    { 
        printf("\nConnection Failed \n"); 
        return -1; 
    } 
    f = fopen("test.xml","r");
    //char *hello=""<request protocol="3.0" version="1.0.0.0" ismachine="1" sessionid="{52C632A0-DF77-4E31-BF5E-3D954DE396E1}" userid="{434EE046-37E2-434E-9736-7681CDAC70EA}" installsource="scheduler" testsource="auto" requestid="{13ECE427-66D3-44FA-AD41-A60C66BA6677}"><os platform="win" version="100" sp="Service Pack 1" arch="x86"/><app appid="{6E385309-85DB-454F-B20B-04DF53DB2018}" version="3.5.1.3" nextversion="" lang="vi" brand="GGLS" client="OtaClient" tag="stable" installage="0"><updatecheck/></app></request>"";
    send(sock , f , 10000 , 0 );
    valread = read( sock , buffer, 10000); 
    printf("%s\n",buffer );
    /*
    while(continu == 1){
        char mess_from_client[225];
        printf("Nhap noi dung tin nhan gui den server\n");
        gets(mess_from_client);
        fflush(stdin);
        hello = &mess_from_client;

        printf("Tin nhan ban nhan dc tu server: \n");
        send(sock , hello , strlen(hello) , 0 ); 
        // printf("Hello message sent\n"); 
        valread = read( sock , buffer, 1024); 
        printf("%s\n",buffer );
        
        if (strcmp(mess_from_client, "bye") == 0)
        {
            continu = 0;
        }
        fflush(stdin);
    }*/
    close(sock);
    return 0; 
} 