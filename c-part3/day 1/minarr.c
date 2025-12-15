#include<stdio.h>
int main(){
int n; int i;
int j;
int min;
printf("Enter the num of terms");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter the %d.element",i+1);
    scanf("%d",&arr[i]);
    min=arr[0];
}
for(int j=0;j<n;j++){
     if(min>arr[j]){
        min=arr[j];}
        
    } 
    
    printf("%d",min);
return 0;
}