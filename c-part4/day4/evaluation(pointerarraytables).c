#include<stdio.h>
int main(){
int arr[3]={1,2,3};
int table;
int *ptr;
ptr=&arr[0];
int i,j;
for(i=0;i<3;i++){
    printf("*TABLE OF %d*\n",*(ptr+i));
 for(j=1;j<=10;j++){
    table=*(ptr+i)*j;
    printf("%d x %d = %d\n",*(ptr+i),j,table);}
}
return 0;
}