#include <stdio.h>

int main() {
      int arr[4][4];
    int i, j;
    int sum1 = 0;
    int sum2 = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("enter the element for %d row and %d column: \n", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<4;i++){
        sum1+=arr[i][j];
        sum2+=arr[i][4-i-1];
    }
 printf("%d is the sum of right diagonal....\n",sum1);
 printf("%d is the sum of left diagonal....\n",sum2);

    return 0;
}