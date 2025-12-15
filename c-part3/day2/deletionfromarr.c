#include<stdio.h>
int main(){
int i;
int n=3;
int arr[3]={1,2,3}; // 2 to be deleted it is at index [1]
n=n-1;
for(i=1;i<n;i++){
    arr[i]=arr[i+1];
}
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}











}