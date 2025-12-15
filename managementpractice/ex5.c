/*5-Write a program that reads a text file and displays each line prefixed with its line number,
1: This is the first line.
2: This is the second line.*/
#include <stdio.h>

int main() {
    FILE *ptr;
    ptr=fopen("testing.txt","r");
    char ch;
    int i=1;
    printf("%d ",i);
    while((ch=fgetc(ptr))!=EOF){

        printf("%c",ch);
      if(ch=='\n'){
        i++;
        printf("%d",i)
      }
    }
    return 0;
}