#include <stdio.h>

int main() {
    int arr[5]={1,3,2,5,6};
    int temp;
    int i,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }

    }
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}