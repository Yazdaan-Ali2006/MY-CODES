#include <stdio.h>
struct info
{
    int id;
    char name[100];
    int age;
};

int main()
{

    FILE *ptr;
    ptr = fopen("data.dat", "wb");
    if (ptr == NULL)
    {
        printf("FILE NOT FOUND...\n");
    }
    struct info i = {25030, "ali", 19};
    fwrite(&i, sizeof(i), 1, ptr);
    fclose(ptr);
    ptr = fopen("data.dat", "rb");
    fread(&i, sizeof(i), 1, ptr);
    fclose(ptr);
    printf("%s\n", i.name);
    printf("%d\n", i.id);
    printf("%d\n", i.age);

    return 0;
}