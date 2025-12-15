#include <stdio.h>

int main()
{
    int arr[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {

        printf("ENTER THE NUMBER %d \n", i + 1);
        scanf("%d", &arr[i]);

    }
    printf("IN REVERSE ORDER\n");
    for(i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}