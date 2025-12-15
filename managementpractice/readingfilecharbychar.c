#include <stdio.h>

int main()
{
    FILE *ptr = fopen("char.txt", "r");
    char ch;
    while (1)
    {
        ch = fgetc(ptr);  //run the loop till we reach the end of file...
        if (ch == EOF)
        {
            break;
        }
    } 

    return 0;
}