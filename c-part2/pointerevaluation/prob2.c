/*4. Reverse Print
Print an array in reverse order using a pointer (no array indexing allowed)*/
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int *ptr;
ptr=arr;
int i;
for(i=4;i>=0;i--){
    printf("%d\n",(*(ptr+i)));
}




}