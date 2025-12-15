#include <stdio.h>
int main()
{ // arrange array so that even appears first
    int arr[5] = {7, 1, 3, 2, 4};
    int arr1[5];
    int i, j = 0, temp;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[j] = arr[i];
            j++;
        }
    }
    for (i = 0; i < 5; i++)   //I can use for loop and can do arr[i]=arr[j] to arrange in that array
    {
        if (arr[i] % 2 != 0)
        {
            arr1[j] = arr[i];
            j++;
        }
    }
for(i=0;i<5;i++){
    printf("%d\n",arr1[i]);
}

return 0;
}