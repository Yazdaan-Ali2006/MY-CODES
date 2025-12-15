#include<stdio.h>
int main()
{
 int arr[10]={1, 2, -3, 4, -1, 0, 5, -2, 3, -4};
  int x,count=0;

  printf("SUM OF=");
  scanf("%d",&x);

  for(int i=0;i<10;i++)
  {
    for(int j=i+1;j<10;j++)
    {
       for(int k=j+1;k<10;k++)
       {
         if(arr[i]+arr[j]+arr[k]==x)
        {count++;}
       }

    }

  }
printf("THE triplets formed are=%d",count);
return 0;

}