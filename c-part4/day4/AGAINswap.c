#include<stdio.h>
int main(){
int x,y;
x=10;
int temp=x;
y=20;
int *ptr;
ptr=&x;
*ptr=y;
printf("%d",x);
ptr=&y;
*ptr=temp;
printf("%d",y);
    return 0;
}