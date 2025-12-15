#include <stdio.h>
#include <conio.h>
void getstr(char input[]){
 
    int i=0;
    char store;
    printf("ENTER STRING:\n");
    while((store=getche())!='\r'){
        input[i]=store;
        i++;
    }
    input[i]='\0';
}

int main() {
      char input[50];
    getstr(input);
      printf("\nTHE STRING ENTERED BY YOU IS....");
    printf("%s",input);
    return 0;
}