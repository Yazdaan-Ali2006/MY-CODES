#include <stdio.h>
int main()
{   int a = 10;
    int *ptr = &a;
    a = 100;
    int *ptr2 = NULL;
    printf("%d\n", *ptr);
    printf("%p\n", ptr);
    printf("%p\n", ptr2);

    return 0;
}