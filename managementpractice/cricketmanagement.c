#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*
 * ##########################################################
 * #                                                        #
 * #              MODULE 1: CRICKET MANAGEMENT              #
 * #                                                        #
 * ##########################################################
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cricket
{
    char name[50];
    int id;
    int age;
    float score;
};

void saveCricketData(struct cricket cricketers[], int n);
int loadCricketData(struct cricket cricketers[]);
void menuCricket(void);
void inputCricket(struct cricket cricketers[], int *currentCount, int amount);
void displayCricket(struct cricket cricketers[], int n);
void searchCricket(struct cricket cricketers[], int n);
void updateCricketer(struct cricket cricketers[], int n);
void deleteCricketer(struct cricket cricketers[], int *n);
int isIdTaken(struct cricket cricketers[], int count, int id);

void cricketSystem()
{
    struct cricket cricketers[100];
    int num = loadCricketData(cricketers); 

    while (1)
    {
        menuCricket();
        int choice;
        printf("Your Input: ");
        if (scanf("%d", &choice) != 1) { 
            while (getchar() != '\n');
            printf("Invalid input! Try again.\n");
            continue;
        }

        switch (choice)
        {
        case 1:
        {
            int amount;
            printf("ENTER THE NUMBER OF CRICKETERS TO ADD: ");
            if (scanf("%d", &amount) != 1 || amount <= 0) {
                while (getchar() != '\n');
                printf("Invalid number. Returning to menu.\n");
                break;
            }
            inputCricket(cricketers, &num, amount);     
            saveCricketData(cricketers, num);
            break;
        }
        case 2:
            displayCricket(cricketers, num);
            printf("\nPress Enter to continue...");
            getchar(); getchar();
            break;
        case 3:
            searchCricket(cricketers, num);
            printf("\nPress Enter to continue...");
            getchar(); getchar();
            break;
        case 4:
            updateCricketer(cricketers, num);
            saveCricketData(cricketers, num);
            break;
        case 5:
            deleteCricketer(cricketers, &num);
            saveCricketData(cricketers, num);
            break;
        case 6:
            printf("Exiting Cricket Management System...\n");
            saveCricketData(cricketers, num);
            return;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}

void menuCricket(void)
{
    printf("\n===========================================\n");
    printf("         CRICKET MANAGEMENT SYSTEM         \n");
    printf("===========================================\n");
    printf("(1) Add New Cricketers\n");
    printf("(2) Display All Cricketers\n");
    printf("(3) Search a Cricketer\n");
    printf("(4) Update a Cricketer\n");
    printf("(5) Delete a Cricketer\n");
    printf("(6) Main Menu\n");
    printf("===========================================\n");
}

/* check if id exists */
int isIdTaken(struct cricket cricketers[], int count, int id)
{
    for (int i = 0; i < count; i++)
        if (cricketers[i].id == id)
            return 1;
    return 0;
}

void inputCricket(struct cricket cricketers[], int *currentCount, int amount)
{
    for (int k = 0; k < amount; k++)
    {
        if (*currentCount >= 100)
        {
            printf("Maximum capacity reached (100). Cannot add more players.\n");
            return;
        }

        int i = *currentCount;
        printf("\n===========================================\n");
        printf("          ENTER DETAILS FOR CRICKETER %d\n", i + 1);
        printf("===========================================\n");

        while (getchar() != '\n');

        printf("Name: ");
        fgets(cricketers[i].name, sizeof(cricketers[i].name), stdin);
        cricketers[i].name[strcspn(cricketers[i].name, "\n")] = '\0';

        int id;
        while (1)
        {
            printf("ID: ");
            if (scanf("%d", &id) != 1) {
                while (getchar() != '\n');
                printf("Invalid ID. Try again.\n");
                continue;
            }
            if (isIdTaken(cricketers, *currentCount, id))
                printf("ID already exists! Enter a different ID.\n");
            else
            {
                cricketers[i].id = id;
                break;
            }
        }

        printf("Age: ");
        while (scanf("%d", &cricketers[i].age) != 1) {
            while (getchar() != '\n');
            printf("Invalid age. Enter a valid integer: ");
        }

        printf("Score: ");
        while (scanf("%f", &cricketers[i].score) != 1) {
            while (getchar() != '\n');
            printf("Invalid score. Enter a valid number: ");
        }

        (*currentCount)++;
    }

    printf("Player(s) added successfully!\n");
}

/* Display all players */
void displayCricket(struct cricket cricketers[], int n)
{
    if (n == 0)
    {
        printf("\nNo cricketers have been added yet!\n");
        return;
    }

    printf("\n===========================================\n");
    printf("           LIST OF CRICKETERS\n");
    printf("===========================================\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n===========================================\n");
        printf("           CRICKETER %d\n", i + 1);
        printf("===========================================\n");
        printf("Name       : %s\n", cricketers[i].name);
        printf("ID Number  : %d\n", cricketers[i].id);
        printf("Age        : %d\n", cricketers[i].age);
        printf("Score      : %.2f\n", cricketers[i].score);
        printf("===========================================\n");
    }
}

/* Search by ID */
void searchCricket(struct cricket cricketers[], int n)
{
    int id, found = 0;
    printf("Enter Cricketer ID to Search: ");
    if (scanf("%d", &id) != 1) {
        while (getchar() != '\n');
        printf("Invalid ID.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (cricketers[i].id == id)
        {
            found = 1;
            printf("\n===========================================\n");
            printf("           CRICKETER FOUND\n");
            printf("===========================================\n");
            printf("Name       : %s\n", cricketers[i].name);
            printf("Age        : %d\n", cricketers[i].age);
            printf("Score      : %.2f\n", cricketers[i].score);
            printf("===========================================\n");
            break;
        }
    }

    if (!found)
        printf("Cricketer not found!\n");
}

/* Menu update*/
void updateCricketer(struct cricket cricketers[], int n)
{
    int id, found = 0;
    printf("Enter ID of the cricketer to update: ");
    if (scanf("%d", &id) != 1) {
        while (getchar() != '\n');
        printf("Invalid ID.\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (cricketers[i].id == id)
        {
            found = 1;
            int choice;
            do
            {
                printf("\n===========================================\n");
                printf("           UPDATE CRICKETER MENU\n");
                printf("===========================================\n");
                printf("1. Add Runs (to existing score)\n");
                printf("2. Change Name\n");
                printf("3. Change Age\n");
                printf("4. Change ID\n");
                printf("5. Return to Main Menu\n");
                printf("===========================================\n");
                printf("Your Input: ");
                if (scanf("%d", &choice) != 1) {
                    while (getchar() != '\n');
                    printf("Invalid option! Try again.\n");
                    continue;
                }

                switch (choice)
                {
                case 1:
                {
                    float newRuns;
                    printf("Enter runs scored recently: ");
                    while (scanf("%f", &newRuns) != 1) {
                        while (getchar() != '\n');
                        printf("Invalid number. Enter runs scored recently: ");
                    }
                    cricketers[i].score += newRuns;
                    printf("Runs updated! Total score: %.2f\n", cricketers[i].score);
                    break;
                }
                case 2:
                {
                    while (getchar() != '\n');
                    printf("Enter new name: ");
                    fgets(cricketers[i].name, sizeof(cricketers[i].name), stdin);
                    cricketers[i].name[strcspn(cricketers[i].name, "\n")] = '\0';
                    printf("Name updated successfully!\n");
                    break;
                }
                case 3:
                {
                    printf("Enter new age: ");
                    while (scanf("%d", &cricketers[i].age) != 1) {
                        while (getchar() != '\n');
                        printf("Invalid age. Enter new age: ");
                    }
                    printf("Age updated successfully!\n");
                    break;
                }
                case 4:
                {
                    int newId;
                    while (1)
                    {
                        printf("Enter new ID: ");
                        if (scanf("%d", &newId) != 1) {
                            while (getchar() != '\n');
                            printf("Invalid ID. Try again.\n");
                            continue;
                        }

                        int taken = 0;
                        for (int j = 0; j < n; j++)
                        {
                            if (j != i && cricketers[j].id == newId)
                            {
                                taken = 1;
                                break;
                            }
                        }

                        if (!taken)
                            break;

                        printf("This ID is already taken! Enter another.\n");
                    }
                    cricketers[i].id = newId;
                    printf("ID updated successfully!\n");
                    break;
                }
                case 5:
                    printf("Returning to main menu...\n");
                    break;
                default:
                    printf("Invalid choice! Try again.\n");
                }

            } while (choice != 5);

            break;
        }
    }

    if (!found)
        printf("Cricketer with ID %d not found!\n", id);
}

/* Delete by ID */
void deleteCricketer(struct cricket cricketers[], int *n)
{
    int id, found = 0;
    printf("Enter ID of the cricketer to delete: ");
    if (scanf("%d", &id) != 1) {
        while (getchar() != '\n');
        printf("Invalid ID.\n");
        return;
    }

    for (int i = 0; i < *n; i++)
    {
        if (cricketers[i].id == id)
        {
            found = 1;
            for (int j = i; j < *n - 1; j++)
            {
                cricketers[j] = cricketers[j + 1];
            }
            (*n)--;
            printf("Cricketer deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Cricketer with ID %d not found!\n", id);
}

/* File save/load */
void saveCricketData(struct cricket cricketers[], int n)
{
    FILE *fp = fopen("cricket.dat", "wb");
    if (!fp)
    {
        printf("Error saving cricket data!\n");
        return;
    }
    fwrite(&n, sizeof(int), 1, fp);
    fwrite(cricketers, sizeof(struct cricket), n, fp);
    fclose(fp);
}

int loadCricketData(struct cricket cricketers[])
{
    FILE *fp = fopen("cricket.dat", "rb");
    if (!fp)
        return 0;
    int n = 0;
    if (fread(&n, sizeof(int), 1, fp) != 1) { fclose(fp); return 0; }
    if (n > 100) n = 0; // safety
    fread(cricketers, sizeof(struct cricket), n, fp);
    fclose(fp);
    return n;
}

