#include <stdio.h>
// bubble sort via pointer
void bubblesort(int arr[])
{
    int *ptr = arr;
    int temp;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}
int main()
{
    int array[10] = {3, 7, 8, 11, 22, 67, 2, 1, 0, 10};
    bubblesort(array);
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
