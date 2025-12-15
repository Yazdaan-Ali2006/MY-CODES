#include <stdio.h>

int main()
{
    int arr1[6] = {1, 2, 3, 3, 2, 1};
    int arr2[6];

    int j = 0;
    int palindrome = 0;
    for (int i = 5; i >= 0; i--)
    {
        arr2[j] = arr1[i];
        j++;
    }
    for (int k = 0; k < 6; k++)
    {
        printf("THE VALUE OF arr1[%d]=%d and arr2[%d]=%d\n", k, arr1[k], k, arr2[k]);
        if (arr1[k] != arr2[k])
        {
            palindrome++;
        }
    }

    if (palindrome)
    {
        printf("THE ARRAY IS NOT PALINDROME!\n");
    }
    else
    {
        printf("THE ARRAY IS PALINDROME!\n");
    }

    return 0;
}