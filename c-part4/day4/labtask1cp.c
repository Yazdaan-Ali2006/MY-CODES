#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    int *ptr;
    ptr=&y;
    *ptr=y;
    printf("the swapped value of x is %d\n", *ptr);
    ptr = &x;
    *ptr=x;
    printf("the swapped value of y is %d\n", *ptr);
    return 0;
}