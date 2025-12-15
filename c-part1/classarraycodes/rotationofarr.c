#include<stdio.h>
int main(){
    int shift;
    printf("enter the num of shifts in array\n");
    scanf("%d",&shift);
    int arr[4]={1,2,3,4};
    shift=shift%4;
     // 4,1,2,3
    int i,j;
    for(j=0;j<shift;j++){
        int temp=arr[4-1];
    for(i=3;i>0;i--){
           arr[i]=arr[i-1];

    } 
    arr[0]=temp;
    }
    for(i=0;i<4;i++){

      printf("%d\n",arr[i]);

    }

} 
