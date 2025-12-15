#include<stdio.h>
/*1. Basic Pointer Access
Declare an integer array of size 5 and use a pointer to print the first and last element.*/
int main(){
int arr[5]={1,2,3,4,5};
int *ptr;
ptr=arr;
int i;
for(i=0;i<5;i++){
if(i==0 || i==4){
    printf("%d\n",*(ptr+i));
}
}
return 0;
}