#include <stdio.h>
struct player
{
    char name[50];
    int id;
    int age;
    float score;
};
struct team
{
    char name[50];
    struct player players[11];
    int totalPlayers;
    float totalScore;
};

void menu(void);
void input(struct player players[], int n);
void display(struct player player[], int n);
void search(struct player player[], int n);
void addteam(struct team teams[], int teamcount);
void displayteams(struct team teams[], int teamcount);

int main()
{
    struct player players[100];
    struct team teams[10];
    int teamcount = 0;
    int num;
    while (1)
    {
        menu();
        int choice;
        printf("ENTER YOUR CHOICE (1-6): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("ENTER THE NUMBER OF PLAYERS\n");
            scanf("%d", &num);
            input(players, num);
            break;
        case 2:
            display(players, num);
            break;
        case 3:
            search(players, num);
            break;
        case 4:
            addteam(teams, teamcount);
            teamcount++;
            break;
        case 5:
            displayteams(teams, teamcount);

            break;
        case 6:
            printf("EXITING....\n");
            return 0;
        }
    }

    return 0;
}
void input(struct player players[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ENTER DETAILS FOR PLAYER %d\n", i + 1);
        printf("NAME: ");
        scanf(" %[^\n]", players[i].name);
        printf("ID: ");
        scanf("%d", &players[i].id);
        printf("AGE: ");
        scanf("%d", &players[i].age);
        printf("SCORE: ");
        scanf("%f", &players[i].score);
    }
}
void menu(void)
{

    printf("\n===========================================\n");
    printf("        CRICKET MANAGEMENT SYSTEM\n");
    printf("===========================================\n");
    printf("(1)---> ADD NEW CRICKETERS\n");
    printf("(2)---> DISPLAY ALL CRICKETERS\n");
    printf("(3)---> SEARCH A CRICKETER\n");
    printf("(4)---> ADD TEAMS\n");
    printf("(5)---> DISPLAY TEAMS\n");
    printf("(6)---> EXIT PROGRAM\n");
    printf("===========================================\n");
}

void display(struct player players[], int n)
{
    printf("\n-------------------------------------------\n");
    printf("           LIST OF CRICKETERS\n");
    printf("-------------------------------------------\n");

    if (n == 0)
    {
        printf("NO PLAYERS HAVE BEEN ADDED YET!\n");

        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("NAME  : %s\n", players[i].name);
        printf("ID    : %d\n", players[i].id);
        printf("AGE   : %d\n", players[i].age);
        printf("-------------------------------------------\n");
    }
}

void search(struct player players[], int n)
{
    int id, found = 0;
    printf("ENTER PLAYER ID TO SEARCH: ");
    scanf("%d", &id);
    for (int i = 0; i < n; i++)
    {
        if (players[i].id == id)
        {
            printf("NAME: %s\nAGE: %d\nSCORE: %.2f\n",
                   players[i].name, players[i].age, players[i].score);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("PLAYER NOT FOUND!\n");
}
void addteam(struct team teams[], int teamCount)
{
    int i, n;

    printf("ENTER TEAM NAME: ");
    scanf(" %[^\n]", teams[teamCount].name);

    printf("ENTER NUMBER OF PLAYERS IN THIS TEAM (max 11): ");
    scanf("%d", &n);

    teams[teamCount].totalPlayers = n;
    teams[teamCount].totalScore = 0;

    for (i = 0; i < n; i++)
    {
        printf("\nENTER DETAILS FOR PLAYER %d\n", i + 1);
        printf("NAME: ");
        scanf(" %[^\n]", teams[teamCount].players[i].name);
        printf("ID: ");
        scanf("%d", &teams[teamCount].players[i].id);
        printf("AGE: ");
        scanf("%d", &teams[teamCount].players[i].age);
        printf("SCORE: ");
        scanf("%f", &teams[teamCount].players[i].score);

        teams[teamCount].totalScore += teams[teamCount].players[i].score;
    }

    printf("\nTEAM '%s' ADDED SUCCESSFULLY! TOTAL SCORE = %.2f\n",
           teams[teamCount].name, teams[teamCount].totalScore);
}

void displayteams(struct team teams[], int teamcount)
{
    if (teamcount == 0)
    {
        printf("\nNO TEAMS HAVE BEEN ADDED YET!\n");
        return;
    }

    printf("\n===========================================\n");
    printf("           LIST OF ALL TEAMS\n");
    printf("===========================================\n");

    for (int i = 0; i < teamcount; i++)
    {
        printf("\nTEAM NAME: %s\n", teams[i].name);
        printf("TOTAL PLAYERS: %d\n", teams[i].totalPlayers);
        printf("TOTAL SCORE: %.2f\n", teams[i].totalScore);
        printf("-------------------------------------------\n");
        printf("PLAYERS LIST:\n");

        for (int j = 0; j < teams[i].totalPlayers; j++)
        {
            printf("  PLAYER %d:\n", j + 1);
            printf("    NAME  : %s\n", teams[i].players[j].name);
            printf("    ID    : %d\n", teams[i].players[j].id);
            printf("    AGE   : %d\n", teams[i].players[j].age);
            printf("    SCORE : %.2f\n", teams[i].players[j].score);
        }
        printf("===========================================\n");
    }
}
