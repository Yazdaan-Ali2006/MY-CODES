#include<stdio.h>
int main(){
int arr[4]={1,2,3,4};
int *ptr1,*ptr2;
ptr1=arr;
ptr2=&arr[2];
int diff=(*ptr1)-(*ptr2);
printf("%d",diff);
return 0;
}