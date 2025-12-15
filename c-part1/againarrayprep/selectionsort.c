#include <stdio.h>

int main() {
    int arr[4]={54,144,2,1}; 
    int temp;
    int i,j;
    int min;
    int minindex;
    for(i=0;i<4;i++){
        min=arr[i];         
        minindex=i;  
     for(j=i+1;j<5;j++){
        if(min>arr[j]){
            min=arr[j];
            minindex=j;
        }
     }
     temp=arr[i];
     arr[i]=arr[minindex];
     arr[minindex]=temp;
            
    }
    for(i=0;i<4;i++){
        printf("%d\n",arr[i]);
    }


    return 0;
}