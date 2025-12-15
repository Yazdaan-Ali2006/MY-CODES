#include<stdio.h>
int main(){
int n=3;
int arr[10]={1,2,3};
int pos=2;
int item=500;
n=n+1;
int i;

for(i=n+1;i>pos;i--){
    arr[i]=arr[i-1];
}
arr[i]=item;
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}



    return 0;
}