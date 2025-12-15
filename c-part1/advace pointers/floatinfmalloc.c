#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,avg,sum=0;
    printf("Enter the number of terms: ");
    scanf("%f",&n);
   float *arr=(float *)malloc(n*sizeof(float));
   int i;
   //input
   for(i=0;i<n;i++){
    printf("Enter the %d number: \n",i+1);
    scanf("%f",&arr[i]); //arr[i] is same as (arr+i)
   }
   //printing
       printf("YOU ENTERED\n");
   for(i=0;i<n;i++){

    printf("%d) %.2f\n",i+1,arr[i]);
      sum+=arr[i];
   }
  printf("THE SUM IS: %.2f\nTHE AVERAGE IS:%.2f",sum,(sum/n));
  free(arr);
    return 0;
}