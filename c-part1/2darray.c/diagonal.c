#include <stdio.h>

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};   
    int i, j;
   int  sum1=0;
    int sum2=0;
    int identity = 1;
    for (i = 0; i < 3; i++)
    {
         sum1+=mat[i][i];
         sum2+=mat[i][3-i-1];
    }
printf("%d \n %d",sum1,sum2);
    return 0;
}