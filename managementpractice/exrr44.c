/*4-Write a C program to count the number of characters, words, and lines in a text file given
by the user.*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("testing.txt", "r");
    if (ptr == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    int lines = 0;
    int words = 0;
    int characters = 0;
    char ch;

    // First loop: count characters and lines
    while ((ch = fgetc(ptr)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
        else
        {
            characters++;
        }
    }

    printf("total lines %d\n", lines);
    printf("total characters %d\n", characters);

    // Reset file pointer to beginning
    rewind(ptr);

    // Second loop: count words
    int inWord = 0;
    while ((ch = fgetc(ptr)) != EOF)
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            if (inWord == 1)
            {
                words++;
                inWord = 0;
            }
        }
        else
        {
            inWord = 1;
        }
    }

    // If file ended while inside a word
    if (inWord == 1)
    {
        words++;
    }

    printf("total words %d\n", words);

    fclose(ptr);
    return 0;
}