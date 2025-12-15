#include <stdio.h>
#define roll 5
#define marks 2
int main()
{
    int i, j;
    int row;
    int col;
    int arr[roll][marks];
    for (row = 0; row < roll; row++)
    {
        for (col = 0; col < marks; col++)
        {
            printf("enter roll no %d marks", row + 1);
            scanf("%d", &arr[row][col]);
        }
    }
    for (i = 0; i < roll; i++)
    {
        for (j = 0; j < marks; j++)
        {
            printf("%d\t", arr[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    
    }

    return 0;
}