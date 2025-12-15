#include<stdio.h>
int main()
{
  int arr[3]={50,50,1};
  int largest,second;
  
  largest=arr[0];
  second=arr[0];
  for(int i=0;i<3;i++)
  {
 if(largest<arr[i])
    {
       second=largest;
       largest=arr[i];
    }

    else if(second<arr[i] && arr[i]!=largest)
         {
          second=arr[i];
        }
  }

printf("THE LARGEST ELEMENT IS %d\n",largest);
printf("THE SECOND LARGEST ELEMENT IS %d",second);

return 0;
}