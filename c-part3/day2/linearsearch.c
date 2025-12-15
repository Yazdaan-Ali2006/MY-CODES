#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int find;
    int i;
    while (1)
    {
        printf("WHICH NUMBER DO YOU WANT TO FIND IN AN ARRAY\n");
        scanf("%d", &find);
        int count = 0;
        for (i = 0; i <= 5; i++)
        {
            if (arr[i] == find)
            {
                count++;
                break;
            }
        }
        if (count == 1)
        {
            printf("THE ELEMENT EXIST AT INDEX arr[%d]\n", i);
            break;
        }
        else
        {
            printf("DOES NOT EXIST\n");
        }
    }
    return 0;
}