#include <stdio.h>
/*Write a program in C to input values into a 3x3 matrix
(2D array) and display the sum of each row.*/
int main()
{
    int arr[3][3];
    int i, j;
    int sumrows = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter the element for %d row and %d column: \n", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3; j++)
        {
            sumrows+=arr[i][j];
        }
        printf("THE SUM OF ROW %d is %d\n",i+1,sumrows);
    }

    return 0;
}