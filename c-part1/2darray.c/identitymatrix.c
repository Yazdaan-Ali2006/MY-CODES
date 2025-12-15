#include <stdio.h>

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};   
    int i, j;
    int identity = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j && mat[i][j] != 1)
            {
                identity = 0;
                break;
            }
            else if (i!=j && mat[i][j] ==0)
            {
                identity = 0;
                break;
            }
        }
    }
    if(identity){
        printf("IDENTITY MATRIX");
    }
    else{
        printf("IT IS NOT A IDENTITY MATRIX");
    }

    return 0;
}