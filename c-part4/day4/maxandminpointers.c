#include <stdio.h>
void main(void)
{    int arr[3] = {100, 28, 30};
    int *ptr;
    ptr = &arr[0];
    int max = arr[0];
    int min = arr[0];
    int i;
     for (i = 0; i < 3; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }    }
printf("the maximum value in the array is %d\n", max);
printf("the minimum value in the array is %d\n", min);
}
