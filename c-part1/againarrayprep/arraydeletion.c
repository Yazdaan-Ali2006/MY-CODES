#include <stdio.h>

int main() {
    int arr[4]={1,2,3,4};
    int item=2;
    int i,j;
    for(i=1;i<3;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<3;i++){
    printf("%d\n",arr[i]);}
    return 0;
}