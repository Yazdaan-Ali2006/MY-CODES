#include <stdio.h>
#include <conio.h>

int main() {    //01234
    char name[10]="razar";
   int i;
   int pallindrome=0,j=4;
   for(i=0;i<2;i++){
      if(name[i]==name[j]){
      pallindrome++;} j--;

   }
    if(pallindrome==2){
        printf("\nTHE GIVEN STRING IS PALLINDROME..");
    }
    else{
        printf("THE GIVEN STRING IS NOT A PALLINDROME");}
    return 0;
}