#include <stdio.h>
#define SIZE 5
void input(int arr[], int n)
{
    printf("ENTER THE ELEMENTS\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT %d : ", i + 1);
        scanf("\n%d", &arr[i]);
    }
}

void print(int arr[], int n)
{
    printf("PRINTING THE ARRAY....\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT %d IS :%d\n", i + 1, arr[i]);
    }
}
int maximum(int arr[])
{
    int i;
    int max = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int minimum(int arr[])
{
    int i;
    int min = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

void sort(int arr[], int n)
{ // JUST ASSUMING FOR UNDERSTANDING {5,4,3,2,1}
    int i, j;
    int temp;
    int min = arr[0];
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void rotate(int arr[], int n)
{
    int i, j;
    int temp;
    for (i = 1; i <= n; i++)
    {
        temp = arr[SIZE - i];
        for (j = 4; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void prime(int arr[])
{
    int count = 0;
    int i, j;
    int num;
    for (i = 0; i < SIZE; i++)
    {
        num = arr[i];
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                break;
            }
        }
        if (num > 1 && j == num)
        {
            count++;
            printf("%d is prime\n", num);
        }
    }
    if (count == 0)
    {
        printf("the given array doesnot have any prime number\n");
    }
}

int main()
{
    int arr[SIZE];
    input(arr, SIZE);
    print(arr, SIZE);
    printf("PRIME TEST\n");
    prime(arr);
    printf("%d IS THE MAXIMUM VALUE\n", maximum(arr));
    printf("%d IS THE MINIMUM VALUE\n", minimum(arr));
    printf("AFTER SORTING THE ARRAY IS \n");
    sort(arr, SIZE);
    printf("ROTATING THE ARRAY TILL 4 SHIFTS\n");
    rotate(arr, 4);

    return 0;
}