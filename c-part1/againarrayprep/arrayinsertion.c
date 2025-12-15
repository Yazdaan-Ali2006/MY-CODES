#include <stdio.h>
#define SIZE 4
int main() {
    int arr[SIZE+1]={1,2,3,4};  //{1, ,2,3,4}
    int i,j;
    int updatedsize=SIZE+1;
    int item=100;
    int pos=2; //3 ki jaga pr element insert hoga
    for(i=SIZE;i>pos;i--){
        arr[i] =arr[i-1];
    
    }
    arr[2]=item;
    for(i=0;i<updatedsize;i++){
        printf("%d\n",arr[i]);
    }

    
    return 0;
}