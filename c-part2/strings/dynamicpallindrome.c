#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20]; // FOR EG: RADAR\0
    int i, j;
    int length = 0;
    char store;
    int pallindrome=0;
    printf("ENTER A STRING\n");
    scanf("%s", name);
     while(name[length]!='\0'){
        length++;
     }
     j=length-1;
     for(i=0;i<length/2;i++){
        if(name[i]!=name[j]){
            pallindrome++;
            break;
        }
        j--;
     }
     if(pallindrome==0){
        printf("THE GIVEN STRING IS  A PALLINDROME");
     }
     else{
              printf("THE GIVEN STRING IS NOT A PALLINDROME");
     }

    return 0;
}