#include <stdio.h>
void rotate(int arr[], int shifts)
{   int i, j;
    int temp;
    for (i = 0; i<shifts; i++)
    {
        temp = arr[5- 1];
        for(j=5-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
     
    }
}

int main()
{
    int shifts;
    printf("ENTER THE NUMBER OF SHIFTS\n");
    scanf("%d", &shifts);
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, shifts);

    int i,j;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}