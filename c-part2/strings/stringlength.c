#include <stdio.h>
#include <conio.h>
void strlength(char input[])
{
    int i = 0;
    int count = 0;
    char store;
    printf("ENTER A STRING:\n");
    while ((store = getche()) != '\r')
    {
        input[i] = store;
        i++;
        count++;
    }
    input[i] = '\0';

    printf("\nTHE LENGTH OF THE SRING IS-->%d", count);
}

int main()
{
    char input[50];
   strlength(input);

    return 0;
}