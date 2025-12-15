#include <stdio.h>

int main()
{
    int arr[5] = {99, 516, 8, 1, 12};
    int max, min;
    max = arr[0]; // max=99
    min = arr[0]; // min = 99
    int i;
    for (i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("%d\n", max);
    printf("%d\n", min);
    return 0;
}