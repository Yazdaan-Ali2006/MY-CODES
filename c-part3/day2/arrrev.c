#include <stdio.h>
int main()
{

    int arr[3] = {1, 2, 3};
    int arrrev[3];
    int i;
    int j = 0;
    for (i = 2; i >= 0; i++)
    {
        arrrev[j] = arr[i];
        j++;
    }

    for (i = 0; i < 3; i++)
    {

        printf("%d", arrrev[i]);
    }

    return 0;
}