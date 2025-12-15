#include <stdio.h>

int main() {
    FILE *ptr=NULL;
     /*
     char str[100];
    while(fgets(str,10000,ptr)!=NULL){
        printf("%s",str);
      }*/
     
     ptr=fopen("auto.txt","w");
     char str[]="MY NAME IS YAZDAAN ALI MIRZA";
     fputs(str,ptr);
     fclose(ptr);

    return 0;
}