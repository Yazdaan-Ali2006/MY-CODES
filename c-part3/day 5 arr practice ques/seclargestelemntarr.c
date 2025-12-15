#include<stdio.h>
int main()
{
    int arr[10] = {1,4,8,24,36,9,20,84,84,45};
    int largest, second;

    largest = arr[0];
    second = arr[0];

    for(int i = 0; i < 10; i++)
    {
        if(largest < arr[i])
        {
            second = largest;
            largest = arr[i];
        }
        else if(second < arr[i] && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("THE LARGEST ELEMENT IS %d\n", largest);
    printf("THE SECOND LARGEST ELEMENT IS %d", second);

    return 0;
}
