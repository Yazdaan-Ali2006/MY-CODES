#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    ;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n,sizeof(int));

    // input
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d number: \n", i + 1);
        scanf("%d", &arr[i]); // arr[i] is same as (arr+i)
    }
    temp=arr[0];
    // maximum finding
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {   if(arr[i]<arr[j])
           temp=arr[j];
       
        }
    }
    printf("The Maximum Valuse Is:%d",temp);
    free(arr);
    return 0;
}