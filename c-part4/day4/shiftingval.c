#include<stdio.h>

int main()
{
int arr1[4]={1,2,3,4};
int arr2[4]={5,6,7,8};
int arr3[4];
int *ptr1=&arr1[0];
int *ptr2=&arr2[0];
int *ptr3=&arr3[0];
int i;
for(i=0;i<4;i++){
*(ptr3+i)=(*(ptr1+i))*(*(ptr2+i));
printf("%d\n",*(ptr3+i));
}

return 0;
}    
