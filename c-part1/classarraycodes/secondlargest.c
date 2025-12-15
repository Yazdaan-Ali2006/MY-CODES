#include<stdio.h>

int main()
{
    int arr[3]={50,50,48};
    int length = 3;

    int largest = arr[0];
    int second = arr[0];

    if (length < 2)
    {
        printf("INVALID INPUT");
        return 0;
    }

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    }
    else if (arr[0] < arr[1])
    {
        largest = arr[1];
        second = arr[0];
    }
    else {
        largest = arr[0];
     second=-1;
    }

    for(int i = 2; i < 3; i++)
    {
        if(largest<arr[i])
        {
            second=largest;
            largest=arr[i];
        }

        else if(second<arr[i] && arr[i]!=largest)
        {
            second=arr[i];
        }
    }

    printf("THE LARGEST ELEMENT IS %d\n",largest);
    printf("THE SECOND LARGEST ELEMENT IS %d",second);

    return 0;
}