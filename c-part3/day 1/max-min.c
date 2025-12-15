#include<stdio.h>
int main(){
int n; int i;
int j;
int max;
printf("Enter the num of terms");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter the %d.element",i+1);
    scanf("%d",&arr[i]);
    max=arr[0];
}
for(int j=0;j<n;j++){
     if(max<arr[j]){
        max=arr[j];}
        
    } 
    
    printf("%d",max);
return 0;
}