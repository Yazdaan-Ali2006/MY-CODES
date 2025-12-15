#include <stdio.h>

int main()
{
    int arr1[5] = {5, 2, 2, 3, 1};
    int arr2[4];
    int same;
    int i, j, k=0;
    for (i = 0; i < 5; i++)
    {   same=0;
        for (j = 0;j < i; j++)
        {
            if (arr1[i] == arr1[j])
            {   same=1;
                break;
            } 
        
          
           } if(same==0){
             arr2[k] = arr1[i];
            k++ ;}
          
        }
      

      for(i=0;i<4;i++){
        printf("%d\n",arr2[i]);
    }
      return 0;}