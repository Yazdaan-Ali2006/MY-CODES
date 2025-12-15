#include <stdio.h>

struct patient
{
    int id;
    char name[20];
    char disease[20];
};
void addpatient();
void displaypatient();
void menu();

{
    int choice;

    while (1)
    {
        menu();
        printf("enter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addpatient();
            break;
        case 2:
            displaypatient();
            break;
        case 3:
            return 0;
            break;

        default:
            printf("invalid choice");
            break;
        }
    }
    return 0;
}
void menu()
{
    printf("WELCOME TO HOSPITAL MANAGEMENT SYSTEM\n");
    printf("1-ENTER PATIENT DETAILS\n");
    printf("2-DISPLAY PATIENTS\n");
    printf("3-EXIT\n");
}
void addpatient()
{
    FILE *ptr;
    ptr=fopen("hpmg.txt","a");
    if (ptr == NULL)
    {
        printf("FAILED");
    }
    struct patient p;
    printf("ID: ");
        scanf("%d", &p.id);
        printf("NAME: ");
        scanf("%s",p.name);
        printf("ENTER DIESEAS: ");
        scanf("%s",p.disease);
        printf("===========================\n");
        fprintf(ptr,"%d %s %s",p.id,p.name,p.disease);
        fclose(ptr);
}