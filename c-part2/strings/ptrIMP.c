#include <stdio.h>
#include <stdlib.h>
int *funct(void){
    static int x;
    char str[10];
    scanf("%s",str);
    x=atoi(str);
    return &x;
}
int main() {
    int *ptr;
    ptr=funct();
    printf("*ptr=%d",*ptr);

    return 0;
}