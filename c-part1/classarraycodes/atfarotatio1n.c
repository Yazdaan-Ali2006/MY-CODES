#include<stdio.h>
int main()
{
    int x,temp;
    
   
    int arr[5]={1,2,3,4,5};


    printf("ENTER THE NUMBER OF ROTATIONS=");
    scanf("%d",&x);

    x=x%5;

    for(int i=0; i<x; i++)
      {
        temp=arr[0];
        for(int j=0;j<4;j++)
       {
        arr[j]=arr[j+1];
         }
         arr[4]=temp;
      }

    for(int k=0; k<5 ;k++)
    {
        printf("THE VALUE OF arr[%d]=%d\n",k,arr[k]);
    }
}
