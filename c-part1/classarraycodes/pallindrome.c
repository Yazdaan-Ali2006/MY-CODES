#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,4,3,2,1};
    int i;
    int j=8; //size-1
    int count=0;
    for(i=0;i<8;i++){
        if(arr[i]==arr[j]){
            count++;
             j--;
        }
    }
    if(count==8){
        printf("pallindrome");
    }
    else{
        printf("Not a pallindrome");
    }
}