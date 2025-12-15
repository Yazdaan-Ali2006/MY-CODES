#include <stdio.h>
int calc(){
    static int sum = 0;
    sum++;
    return sum;
}
void main()
{
 printf("%d \n",calc());
 printf("%d \n",calc());
}
