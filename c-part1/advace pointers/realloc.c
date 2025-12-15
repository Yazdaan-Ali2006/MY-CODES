#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(n*sizeof(int));

    // input
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d number: \n", i + 1);
        scanf("%d", &arr[i]); // arr[i] is same as (arr+i)
    }
    printf("THE MEMORY HAS BEEN INCREASED !!\n");
    arr=(int *)realloc(arr,(n+3)*sizeof(int));
      // n+3 input
    for (i = n; i < n+3; i++)
    {
        printf("Enter the %d number: \n", i + 1);
        scanf("%d", &arr[i]); // arr[i] is same as (arr+i)
    }
    printf("YOU ENTERED\n");
    // printing the final
    for (i = 0; i < n+3; i++)
    {
            printf("%d)-->%d\n",i+1,arr[i]);
    }

    free(arr);
    return 0;
}