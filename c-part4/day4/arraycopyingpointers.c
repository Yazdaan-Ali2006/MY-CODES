#include<stdio.h>
/*Create two arrays of equal size. Use pointers to copy the contents of the first array into
the second (without using array indexing).*/
int main(){
int arr1[3]={1,2,3};
int arr2[3]={4,5,6};
int *ptr1;
ptr1=&arr1[0];
int *ptr2;
ptr2=&arr2[0];
int i;
for(i=0;i<3;i++){
   *(ptr2+i)=*(ptr1+i);
   printf("%d\n",*(ptr2+i));
}
return 0;
}