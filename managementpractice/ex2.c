/*2- Write a program that asks the user to enter their name and age.
Save this data to a file
named info.txt, then reopen the file and display the contents on the screen.
*/
#include <stdio.h>
struct data
{
    char name[50];
    int age;
} d1;
int main()
{
    printf("Enter Name: ");
    scanf(" %[^\n]", &d1.name);

    printf("Enter Age: ");
    scanf("%d", &d1.age);
    FILE *ptr;
    ptr = fopen("info.txt", "w");
    fprintf(ptr, "%s %d", d1.name, d1.age);
    fclose(ptr);
    ptr = fopen("info.txt", "r");
    while (fscanf(ptr, "%s %d %d", d1.name, &d1.age) == 2)
    {
        printf("NAME:%s\nAGE:%d", d1.name, d1.age);
    }
    fclose(ptr);
}