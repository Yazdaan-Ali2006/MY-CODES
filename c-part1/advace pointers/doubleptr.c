#include <stdio.h>
#include <stdlib.h>
#define row 2
#define col 2

int main()
{
  
    int **arr, i, j;
    arr = (int **)malloc(row * sizeof(int*));
    for (i = 0; i < row; i++)
    {
        *(arr + i) = (int *)malloc(col * sizeof(int));
        for (j = 0;j<col;j++){
            printf("integer: ");
            scanf("%d",*(arr+i)+j);
        }
    }
    printf("matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",*(*(arr+i)+j));
            printf("\n");
        }
    }

    return 0;
}
   /* 2D array single loop print using pointers

   int arr[2][2]={{1,2},{3,4}};
     int*ptr;
     for(ptr=&arr[0][0];ptr<=&arr[1][1];ptr++){
         printf("%d\n",*ptr);
     }*/