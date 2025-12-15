#include <stdio.h>
#include <string.h>
struct user
{
    char name[100];
    int id;
    int age;
};
void delete(struct user a[], int n);
void enter(struct user a[], int n);
void update(struct user a[], int n);
void displayusers(struct user a[]);
void searchid(struct user a[], int n);
void searchname(struct user a[], int n);
void menu();
int main()
{
    struct user a[100];
    while (1)
    {
        menu();
        int choice, n, id;
        printf("Select the option: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the users you want to add: ");
            scanf("%d", &n);
            enter(a, n);
            break;
        case 2:
            printf("Enter the Id you want to update: ");
            scanf("%d", &id);
            update(a, id);
            break;
        case 3:
            printf("Enter the Id of the user to delete whole data: ");
            scanf("%d", &id);
            delete(a, id);
            break;
        case 4:
            displayusers(a);
            break;
        case 5:
            searchid(a, n);
            break;
        case 6:
            searchname(a, n);
            break;
        case 7:
            printf("Exiting\n");
            return 0;
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    }

    return 0;
}
void menu()
{
    printf("====welcome to user management system=====\n");
    printf("1-Add a user\n");
    printf("2-Update a user\n");
    printf("3-Delete a user\n");
    printf("4-Display a user\n");
    printf("5-Search by Id\n");
    printf("6-Search by Name\n");
    printf("7-Exit\n");
}
void enter(struct user a[], int n)
{
    int i;
    FILE *ptr = fopen("userinfo.txt", "a");
    if (ptr == NULL)
    {
        printf("File doesnot exist\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter details for User No.%d\n", i + 1);
            printf("Name: ");
            scanf(" %[^\n]", &a[i].name);
            printf("Id: ");
            scanf("%d", &a[i].id);
            printf("Age: ");
            scanf("%d", &a[i].age);
            fprintf(ptr," %s %d %d \n", a[i].name, a[i].id, a[i].age);
        }
        fclose(ptr);
    }
}
void update(struct user a[], int id)
{
    FILE *ptr1, *temp;
    int i = 0;
    int found = 0;
    ptr1 = fopen("userinfo.txt", "r");
    temp = fopen("temp.txt", "w");
    while (fscanf(ptr1, "%s %d %d", a[i].name, &a[i].id, &a[i].age) == 3)
    {
        if (id == a[i].id)
        {
            found++;
            printf("NOW ENTER THE DETAILS\n");
            printf("Name: ");
            scanf(" %[^\n]", &a[i].name);
            printf("Id: ");
            scanf("%d", &a[i].id);
            printf("Age: ");
            scanf("%d", &a[i].age);
        }

        fprintf(temp, "%s %d %d \n", a[i].name, a[i].id, a[i].age);
        i++;
    }
    fclose(ptr1);
    fclose(temp);
    remove("userinfo.txt");
    rename("temp.txt", "userinfo.txt");
    if (found)
    {
        printf("Data Updated\n");
    }
    else
    {
        printf("ID not found\n");
    }
}
void delete(struct user a[], int id)
{
    FILE *ptr1, *temp;
    int i = 0;
    int found = 0;
    ptr1 = fopen("userinfo.txt", "r");
    temp = fopen("temp.txt", "w");
    while (fscanf(ptr1, "%s %d %d", a[i].name, &a[i].id, &a[i].age) == 3)
    {
        if (id == a[i].id)
        {
            found++;
            continue;
        }

        fprintf(temp, "%s %d %d \n", a[i].name, a[i].id, a[i].age);
        i++;
    }
    fclose(ptr1);
    fclose(temp);
    remove("userinfo.txt");
    rename("temp.txt", "userinfo.txt");
    if (found)
    {
        printf("ID data has been deleted\n");
    }
    else
    {
        printf("ID not found\n");
    }
}
void displayusers(struct user a[])
{
    FILE *ptr = fopen("userinfo.txt", "r");
    int i = 0;
    while (fscanf(ptr, "%s %d %d", a[i].name, &a[i].id, &a[i].age) == 3)
    {
        printf("NAME:%s\n", a[i].name);
        printf("ID:%d\n", a[i].id);
        printf("AGE:%d\n", a[i].age);
        i++;
    }
    fclose(ptr);
}
void searchid(struct user a[], int n)
{
    FILE *ptr = fopen("userinfo.txt", "r");
    int id;
    printf("Enter Id you want to search\n");
    scanf("%d", &id);
    int i=0;
    int found = 0;
    while (fscanf(ptr, "%s %d %d", a[i].name, &a[i].id, &a[i].age) == 3)
    {
        if (id == a[i].id)
        {
            found++;
            printf("=====DATA OF THE ENTERED ID====\n");
            printf("NAME: %s\n", a[i].name);
            printf("ID: %d\n", a[i].id);
            printf("AGE: %d\n", a[i].age);
        }
    }
    if (found == 0)
    {
        printf("THE GIVEN ID DOES NOT EXIST\n");
    }
}
void searchname(struct user a[], int n)
{

    FILE *ptr = fopen("userinfo.txt", "r");
    char str[100];
    printf("ENTER THE THE NAME TO GET WHOLE DATA\n");
    scanf(" %[^\n]", str);
    int i = 0;
    int found;

    while (fscanf(ptr, "%s %d %d", a[i].name, &a[i].id, &a[i].age) == 3)
    {
        if (strcmp(str, a[i].name) == 0)
        {
            found++;
            printf("=====NAME DETECTECTED====\n");
            printf("NAME:%s\n", a[i].name);
            printf("ID:%d\n", a[i].id);
            printf("AGE:%d\n", a[i].age);
            printf("=======================\n");
        }
        i++;
    }
    if (found == 0)
    {
        printf("NAME DOESNOT EXIST");
    }
}