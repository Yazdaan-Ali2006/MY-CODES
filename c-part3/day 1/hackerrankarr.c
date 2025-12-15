#include<stdio.h>
int main(){
int n;
int sum=0;
printf("Enter the num of terms");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter the %d.element",i+1);
    scanf("%d",&arr[i]);
 sum=sum+arr[i];
}
printf("sum of numbers stored in array is %d",sum);
return 0;
}