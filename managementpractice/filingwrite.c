#include <stdio.h>

int main() {
    FILE *ptr;
    ptr=fopen("yazzy.txt","a");
    if(ptr==NULL){
        printf("FILE DOSENOT EXIST\n");
    }
    else{
     int val=10;
     fprintf(ptr,"%d",val);
     printf("%d",val);
    }
   fclose(ptr);
    return 0;
}