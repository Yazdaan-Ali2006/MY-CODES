#include <stdio.h>

int main() {
    int arr[4]={1,2,3,4};
    int temp;
    int i ,j,shifts=1;
    for(i=0;i<10;i++){
        temp=arr[4-1]; 
        for(j=3;j>0;j--){
            arr[j]=arr[j-1];
        
        }
        arr[0]=temp;
    }
    for(i=0;i<4;i++){
printf("%d\n",arr[i]);
    }
    return 0;
}