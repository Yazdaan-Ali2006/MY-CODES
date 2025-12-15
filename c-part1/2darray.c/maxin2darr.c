#include <stdio.h>

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {90, 65, 33}};
    int max = mat[0][0];
    int rows = 3;
    int cols = 3;
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (max < mat[i][j])
            {
                max = mat[i][j];
            }
        }
    }
    printf("%d", max);
    return 0;
}