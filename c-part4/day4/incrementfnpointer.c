#include<stdio.h>
void increment(int *n);
/*Write a function increment(int *n) that increases the given number by 10. Call the function
from main() and show that the change is reflected in the original variable.*/
int main(){

int a =10;
int *ptr=&a;
increment(ptr);
printf("%d",a);





    return 0;
}
void increment(int *n){
*n=*n+10;

}