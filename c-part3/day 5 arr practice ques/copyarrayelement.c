#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int arr1[5];
int i;
for(i=0;i<5;i++){
    arr1[i]=arr[i];}
for(i=0;i<5;i++){
    printf("%d\n",arr1[i]);}

    return 0;
}