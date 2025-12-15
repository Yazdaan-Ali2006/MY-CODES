#include <stdio.h>

int main() {
    char name1[10];"HELLO";
    char name2[10];"HELlon";
    int count=0;
    int i;
    for(i=0;i<10;i++){
        if(name1[i]!=name2[i]){
             count++;
        }
    }
    if(count==0){
        printf("BOTH THE STRINGS ARE EQUAL");
    }
    else{
          printf("BOTH THE STRINGS ARE   NOT EQUAL");
    }
    return 0;
}