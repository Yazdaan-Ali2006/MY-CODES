#include <stdio.h>
#include <conio.h>
int main()
{
    char character[20];
    int i = 0;
    int j;
    char ch;
    printf("ENTER A STRING: \n");
    while ((ch = getche()) !='\r')
    {
        character[i] = ch;
        i++;
    }
printf("\nTHE STRING ENTERED BY  YOU: ");
    character[i] = '\0';
   printf("%s",character);
    return 0;
}