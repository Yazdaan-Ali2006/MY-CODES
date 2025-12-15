/*3- Write a program to copy the contents of one file (source.txt) to another (destination.txt).
Make sure the program handles the case where the source file does not exist.*/
#include <stdio.h>
int main()
{   char ch;
    FILE *ptr1,*ptr2;
    ptr1=fopen("source.txt","r");
    ptr2=fopen("destination.txt","w");
    while((ch=fgetc(ptr1))!=EOF){
        fputc(ch,ptr2);
    }
    
return 0;
}