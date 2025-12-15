#include <stdio.h>
#include <conio.h>
void concate(char str1[], char str2[])
{
    int length = 0;
    int i;
    while (str1[length] != '\0')
    {
        length++;
    }
    i = 0;
    str1[length]=' ';
    length++;
    while (str2[i] != '\0')
    {
        str1[length] = str2[i];
        i++;
        length++;
    }

}

    int main()
    {
        char str1[20] = "hello"; 
        char str2[10] = "world";
        concate(str1,str2);
        printf("%s", str1);
        return 0;
    }