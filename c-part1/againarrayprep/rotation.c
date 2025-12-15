#include <stdio.h>
int rotate(int arr[],int n){
    int i,j;
    int temp;
    for(i=1;i<=n;i++){
        temp=arr[SIZE-i];
        for(j=4;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(i=0;i<SIZE;i++){
        printf("%d\n",arr[i]);
    }
}
int main() {
    int arr[5]={1,2,3,4,5};
    int i,j;
    int shifts=1;
    int temp;
    for(i=1;i<=shifts;i++){
        temp=arr[5-i];
        for(j=4;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}