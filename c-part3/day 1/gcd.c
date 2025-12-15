#include <stdio.h>
void gcd(int, int);
int main()
{

    gcd(4, 8);

    return 0;
}
void gcd(int a, int b)
{
    int i;
    int gcd = 0;
    int smallest = a;
    if (a > b)
    {
        smallest = b;
    }
    for (int i = 0; i <= smallest; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("%d is gcd",i);}