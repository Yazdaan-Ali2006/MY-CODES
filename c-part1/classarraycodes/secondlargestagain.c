#include<stdio.h>
int main(){
int arr[5]={50,50,50,6,7};
int max1=arr[0];
int max2=arr[1];
int i;
for(i=2;i<5;i++){
    if(max1<arr[i]){
        max2=max1;
        max1=arr[i];
    }
    else if(max2<arr[i]){
        max2=arr[i];

    }
}
printf("%d\n",max1);
printf("%d\n",max2);
}