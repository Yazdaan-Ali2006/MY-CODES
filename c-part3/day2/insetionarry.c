#include<stdio.h>
int main(){
int arr[10]={1,2,3,5,6};
int item=100;
int pos=2;
int n=5;
n=n+1;
int i;
for(i=n;i>pos;i--){
    arr[i]=arr[i-1];
    }
    arr[i]=item;

for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
}
