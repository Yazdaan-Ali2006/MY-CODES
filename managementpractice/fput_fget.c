#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("yazzy.txt", "r");
    if (ptr == NULL)
    {
        printf("FILE DOSENOT EXIST\n");
    }
    else
    {
     //fputs("\nali",ptr);
      char a =fgetc(ptr);
      printf("%c",a);
    }
    fclose(ptr);

    return 0;
}