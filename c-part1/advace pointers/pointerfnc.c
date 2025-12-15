#include <stdio.h>
#include <stdlib.h>
int *func(){
    static int x;
     char name[20];
     printf("Element:\n");
    scanf("%s",name);
    x=atoi(name);
    return &x;
    }
int main() {
    int *ptr=func();
    printf("%d",*ptr);
    
    return 0;
}