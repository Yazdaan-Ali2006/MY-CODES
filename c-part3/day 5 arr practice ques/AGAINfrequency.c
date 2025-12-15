#include <stdio.h>
int main()
{
    int arr[5] = {2, 2, 3, 3, 5};
    int i, j;
    int temp;
    int count;
    for (i = 0; i < 5; i++)
    {
        count = 1;
        temp = arr[i];
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        int flag = 0, k;
        for (k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d appears %d times\n", temp, count);
        }
    }

    return 0;
}