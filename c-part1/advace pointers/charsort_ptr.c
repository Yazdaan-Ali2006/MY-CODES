#include <stdio.h>
#include <string.h>
void sort(char *str[])
{
    int i, j;
    char *temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char *list[]={"zain","yasir","ali","ahmed","fatima"};
    sort(list);
    int i=0;
    for(i=0;i<5;i++){
        printf("%s\n",list[i]);
    }

    return 0;
}