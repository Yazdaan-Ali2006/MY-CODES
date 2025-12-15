#include <stdio.h>
int main() //sorting by storing in a new array
{ // terms         0  1  2  3  4
    int arr1[5] = {5, 4, 3, 2, 1};
    int arr2[5];
    int i, j;
    int temp;
    int k = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr1[i] < arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
        arr2[k] = arr1[i];
        k++;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}