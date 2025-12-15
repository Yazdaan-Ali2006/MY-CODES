#include<stdio.h>
int main(){
    int i;
    int j;
 char name[10][10];
 for( i=0;i<4;i++){
    printf("enter the string(%d)",i+1);
    scanf("%s",name[i]);
 }
 for(j=0;j<4;j++){
  printf("%s\n",name[j]);


 }



    return 0;
}