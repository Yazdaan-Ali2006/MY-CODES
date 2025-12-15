#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int max,min,i,*ptr;
    ptr = arr;
    max = *ptr;
    min=*ptr;
    for (i = 0; i < 5; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
        
    }
      printf("%d\n",max);
      printf("%d\n",min);

    return 0;
}