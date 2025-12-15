/*Create two arrays of equal size. Use pointers to copy the contents of the first array into 
the second (without using array indexing).*/
#include<stdio.h>
int main(){
 int arr1[4]={1,2,3,4};
 int arr2[4]={5,6,7,8};
 int *ptr1,*ptr2;
 ptr1=arr1;
 ptr2=arr2;
 int i;
 for(i=0;i<4;i++)
{
    *(ptr2+i)=*(ptr1+i);
    printf("%d\n",*(ptr2+i));
}
 


return 0;
}
