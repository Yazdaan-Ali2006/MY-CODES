#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5}; //2,4
int *ptr;
ptr=arr;
int i;
for(i=0;i<5;i++){
    if(*(ptr+i)%2==0){
     printf("%d\n",*(ptr+i));}}



    return 0;
}