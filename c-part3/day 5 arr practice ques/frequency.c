#include <stdio.h>
// frequecy of element
int main()
{
    int arr[5] = {2, 2, 3, 3, 5};
    int temp;
    int count;
    int j, i;
    for (i = 0; i < 5; i++)
    {   count = 1;
        temp = arr[i];
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        int k, flag = 0;
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