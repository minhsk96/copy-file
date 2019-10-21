#include <stdio.h>
#include <stdlib.h>
 
int main() {
     FILE *fp = fopen("text.txt", "r");
    if(fp == NULL) {
        printf("could not open file");
        return 0;
    }

    char chunk[20];

    while(fgets(chunk, sizeof(chunk), fp) != NULL) {
       //fputs(chunk, stdout);
      printf("%s",chunk);
      printf("\n1111\n");
    }
 
   fclose(fp);
   return 0;
}