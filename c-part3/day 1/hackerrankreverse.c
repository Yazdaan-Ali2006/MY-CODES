#include<stdio.h>
int main(){
int i;
int j;

    int n;
printf("Enter the num of terms");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(j=0;j<n;j++){
    printf("%d\n",arr[(n-1)- j]);

}
return 0;}