#include <stdio.h>
int main()
{
   //selection sort
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int i, j, temp, min, minindex;
    for (i = 0; i < 10; i++)
    {
        min = arr[i];
        minindex = i;
        for (j = i; j < 10; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minindex = j;
            }
        } 
        // swapping
            temp = arr[i]; // 10
            arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}