#include <stdio.h>
#include<string.h>

#define MAX 100
struct patient{
    int id;
    char name[50];
    char disease[50];
};

struct patient patients[MAX];


void add();
void display();
void update();
void delete();
void IDsearch();
void NAMEsearch();

int main()
{
    int choice=0;

    while (choice !=5)
    {
        printf("\n1.ADD PATIENT\n");
        printf("2.DISPLAY PATIENT\n");
        printf("3.UPDATE PATIENT\n");
        printf("4.DELETE PATIENT\n");
        printf("5.SEARCH PATIENT BY ID\n");
        printf("6.SEARCH PATIENT BY NAME\n");
        printf("7.BACK\n");

    printf("ENTER YOUR CHOICE=");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
               add();
               break;
        case 2:
               display();
               break;
        case 3:
               update();
               break;
        case 4:
               delete();
               break;
        case 5:
               IDsearch();
               break;               
        case 6:
               NAMEsearch();
               break;               
        case 7:
               printf("EXITING...");
               return 0;
        default:
               printf("INVALID INPUT");
               break;
    }
    
  }  

  return 0;
}


void add()
{    
 
    FILE *fp=fopen("hospital.txt","a");
    if(fp == NULL)
    {
        printf("ERROR LOADING THE FILE");
        return;
    }
    struct patient p;
 
    printf("ENTER THE ID=");
    scanf(" %d",&p.id);

    printf("ENTER THE NAME=");
    scanf(" %[^\n]",p.name);
    
    printf("ENTER THE DISEASE=");
    scanf(" %[^\n]",p.disease);

    fprintf(fp,"ID=%d|NAME=%s|DISEASE=%s\n",p.id,p.name,p.disease);
    fclose(fp);

    printf("PATIENT ADDED SUCCESFULLY!");
        
}


void display()
{
  FILE *fp=fopen("hospital.txt","r");
  if(fp ==NULL)
  {
    printf("ERROR LOADING THE FILE!");
    return;
  }
  struct patient p;

while(fscanf(fp,"ID=%d|NAME=%[^|]|DISEASE=%[^\n]\n",&p.id,p.name,p.disease)==3)
{
    printf("ID=%d|NAME=%s|DISEASE=%s\n",p.id,p.name,p.disease);
}
fclose(fp);

printf("DATA SUCCESSFULLY DISPLAYED!");
}

void update()
{
 int id;
 int found=0;

 printf("ENTER THE ID=");
 scanf("%d",&id);

 FILE *fp=fopen("hospital.txt","r");
 FILE *temp=fopen("temp.txt","w");

 struct patient p;
 while(fscanf(fp,"ID=%d|NAME=%[^|]|DISEASE=%[^\n]\n",&p.id,p.name,p.disease)==3)
{
    if(p.id == id)
    {
      found=1;
      int choice=0,stop=0;
      
      while (stop==0)
    {
        printf("\n1.CHANGE NAME \n");
        printf("2.CHANGE DISEASE\n");
        printf("3.BACK\n");

    printf("ENTER YOUR CHOICE=");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
           printf("ENTER THE NAME=");
           scanf(" %[^\n]",p.name);
           break;

        case 2:
          printf("ENTER THE DISEASE=");
          scanf(" %[^\n]",p.disease);              
          break;

        case 3:
               stop=1;
               printf("EXITING...");
               break;

        default:
               printf("INVALID INPUT");
               break;
        }
    
      }  
    
    }
    fprintf(temp,"ID=%d|NAME=%s|DISEASE=%s\n",p.id,p.name,p.disease);
}

fclose(fp);
fclose(temp);

remove("hospital.txt");
rename("temp.txt","hospital.txt");

if(!found)
{
    printf("ID NOT FOUND");
}

}

void delete()
{
  int id;
  int found=0;

  printf("ENTER ID=");
  scanf("%d",&id);

  FILE *fp=fopen("hospital.txt","r");
  FILE *temp=fopen("temp.txt","w");

  struct patient p;

  while(fscanf(fp,"ID=%d|NAME=%[^|]|DISEASE=%[^\n]\n",&p.id,p.name,p.disease)==3)
  {
    if(p.id==id)
    {  
         found=1;
        continue;
    }
fprintf(temp,"ID=%d|NAME=%s|DISEASE=%s\n",p.id,p.name,p.disease);

  }

  fclose(fp);
  fclose(temp);
  

  remove("hospital.txt");
  rename("temp.txt","hospital.txt");

  if(!found)
  {
    printf("ID NOT FOUND");
  }

  else
  {printf("DELETION SUCCESFUL");}

}

void IDsearch()
{
    FILE *fp=fopen("hospital.txt","r");
    
    int id,found=0;
    printf("ENTER THE ID=");
    scanf("%d",&id);
    
    struct patient p;
    while(fscanf(fp,"ID=%d|NAME=%[^|]|DISEASE=%[^\n]\n",&p.id,p.name,p.disease)==3)
    {
        if(p.id==id)
        {
            found=1;
            printf("ID FOUND!\n");
            printf("ID=%d|NAME=%s|DISEASE=%s\n",p.id,p.name,p.disease);

        }
    }
fclose(fp);
    if(found==0)
    {
        printf("ID not found");
    }
}

void NAMEsearch()
{
    FILE *fp=fopen("hospital.txt","r");
    
    int found=0;
    char name[50];
    printf("ENTER THE NAME=");
    scanf(" %[^\n]",name);
    
    struct patient p;
    while(fscanf(fp,"ID=%d|NAME=%[^|]|DISEASE=%[^\n]\n",&p.id,p.name,p.disease)==3)
    {
        if(strcmp(p.name,name)==0)
        {
            found=1;
            printf("ID FOUND!\n");
            printf("ID=%d|NAME=%s|DISEASE=%s\n",p.id,p.name,p.disease);

        }
    }
fclose(fp);
    if(found==0)
    {
        printf("ID not found");
    }
}