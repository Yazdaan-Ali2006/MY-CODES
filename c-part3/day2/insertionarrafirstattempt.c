#include<stdio.h>
int main(){
int item=100;
int pos=2;
int n=5;
int i;
int arr[5]={1,2,3,5,6};

for(i=n+1;i>pos;i--){
    arr[i]=arr[i-1];
    }
    arr[i]=item;
    n=n+1;
for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }}