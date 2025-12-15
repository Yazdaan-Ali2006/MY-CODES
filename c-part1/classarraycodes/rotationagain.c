#include<stdio.h>
int main(){
 
int i;
int arr[6]={1,3,5,6,7,8};
int temp;
int j;
int shift=7%6;
for(j=0;j<=shift;j++){
    temp=arr[6-1];
    for(i=5;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}   
for(j=0;j<6;j++){
    printf("%d\n",arr[j]);

}

    return 0;
}