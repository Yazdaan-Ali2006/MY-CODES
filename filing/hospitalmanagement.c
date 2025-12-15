#include <stdio.h>
struct patient
{
    int id;
    char name[100];
    char disease[100];
};
void menu(void);
void enter(struct patient p[], int n);
void display(struct patient p[], int n);
void update(struct patient p[], int n);
void main()
{
    struct patient p[100];

    int choice, n;

    while (1)
    {
        menu();
        printf("enter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("ENTER THE NUMBER OF PATIENTS YOU WANT TO ADD: ");
            scanf("%d", &n);
            if (n < 1)
            {
                printf("INVALID\n");
            }
            else
            {

                enter(p, n);
            }
            break;
        case 2:
            update(p, n);

            break;
        case 3:
            display(p, n);
            break;
        case 4:
            return;
            break;

        default:
            printf("invalid choice");
            break;
        }
    }
}
void menu()
{
    printf("WELCOME TO HOSPITAL MANAGEMENT SYSTEM\n");
    printf("1-ENTER PATIENT DETAILS\n");
    printf("2-UPDATE DETAILS\n");
    printf("3-DISPLAY PATIENT\n");
    printf("4-EXIT\n");
}
void enter(struct patient p[], int n)
{
    FILE *ptr;
    ptr = fopen("newfile.txt", "a");
    int i, j, exist;
    for (i = 0; i < n; i++)
    {
        if (i >= 1)
        {
            for (j = 0; j < i; j++)
            {
                if (p[i].id == p[j].id)
                    exist++;
                break;
            }
        }
        printf("======DETAILS FOR %d PATITENT=====\n", i + 1);
        if (i == 0)
        {
            printf("ENTER ID: ");
            scanf("%d", &p[i].id);
        }
        if (i >= 1)
        {
            while (1)
            {
                exist = 0;
                printf("ENTER ID: ");
                scanf("%d", &p[i].id);
                for (j = 0; j < i; j++)
                {
                    if (p[i].id == p[j].id)
                    {
                        exist++;
                    }
                    break;
                }
                if (exist != 0)
                {
                    printf("ID ALREADY EXIST\n");
                }
                else
                {
                    break;
                }
            }
        }
        printf("ENTER NAME: ");
        scanf(" %[^\n]", p[i].name);
        printf("ENTER DIESEAS: ");
        scanf(" %[^\n]", p[i].disease);
        fprintf(ptr, "%d %s %s \n", p[i].id, p[i].name, p[i].disease);
    }
    fclose(ptr);
}
void display(struct patient p[], int n)
{
    FILE *ptr = fopen("newfile.txt", "r");
    if (ptr == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    int i;
    for (i = 0; i < n; i++)
    {

        if (fscanf(ptr, "%d %s %s\n", &p[i].id, &p[i].name, &p[i].disease) == 3)
        {
            printf("======DETAILS FOR %d PATIENT=====\n", i + 1);
            printf("ID: %d\n", p[i].id);
            printf("NAME: %s\n", p[i].name);
            printf("DISEASE: %s\n", p[i].disease);
            printf("===========================\n");
        }
        else
        {
            break;
        }
    }
    fclose(ptr);
}

void update(struct patient p[], int n)
{
    int id, found = 0, i;
    while (1)
    {
        printf("Enter the ID you want to replace: ");
        scanf("%d", &id);
        for (i = 0; i < n; i++)
        {
            if (id == p[i].id)
            {
                found = 1;
                printf("ENTER THE UPDATED DATA\n");
                printf("ENTER ID: ");
                scanf("%d", &p[i].id);
                printf("ENTER NAME: ");
                scanf(" %[^\n]", p[i].name);
                printf("ENTER DIESEAS: ");
                scanf(" %[^\n]", p[i].disease);
                break;
            }
        }

        if (found != 1)
        {
            printf("THE ENTERED ID DOESNOT EXIST\n");
        }
        else
        {
            break;
        }
    }
}