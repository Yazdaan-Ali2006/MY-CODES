#include <stdio.h>
#include <conio.h>

void getstr(char str[]){
    int i =0;
    do{
        str[i]=getche();}
        while(str[i++]='\n');
        str[i-1]='\0';
    
}
int main() {
    char name[20];
    getstr(name);
    printf("%s",name);
    return 0;
}