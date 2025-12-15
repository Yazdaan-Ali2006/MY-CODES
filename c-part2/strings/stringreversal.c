#include <stdio.h>
#include <conio.h>
int main()
{
    char name[20];  //ALI
    printf("ENTER A STRING:");
    scanf("%[^\n]", name);
    int i;
    int length = 0;
    while (name[length] != '\0')
    {
        length++;
    }

    for (i = length-1; i >=0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;
}