/*4-Write a C program to count the number of characters, words, and lines in a text file given
by the user.*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("testing.txt", "r");
    int lines = 0;
    int words = 0;
    int characters = 0;
    char ch;
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
    rewind(ptr);
       int inWord = 0;
    while ((ch = fgetc(ptr)) != EOF)  //ali is good boy
    {
        if(ch==' '||ch=='\n' ||ch=='\t'){
            if(inWord==1){
                words++;
            }
        }
        else{
          inWord=1;
        }
    }
    if (inWord == 1)
    { printf("words %d",words);}

    fclose(ptr);
    return 0;
}