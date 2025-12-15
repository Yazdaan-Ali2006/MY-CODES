#include <stdio.h>

int main() {
   int count=0;
    int arr[5]={1,2,3,4,5};
    int i,j;
    int num;
   for(i=0;i<5;i++){
    num=arr[i];
    for(j=2;j<num;j++){
        if(num%j==0){
            break;
        }
    }
    if(num>1 && j==num){
        count++;
        printf("%d is prime\n",num);
    }

   }
   
    return 0;
}