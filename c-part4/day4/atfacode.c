#include <stdio.h>
int main ()
{
  int arr[5]={1,2,3,4,5};
  int *ptr;
  ptr=arr;

  for(int i=0;i<5;i++)
  {
    if(i%2==0)
    {
        printf("\nthe value of arr[%d]=%d",i,*(ptr+(i)));
    }
  }
}