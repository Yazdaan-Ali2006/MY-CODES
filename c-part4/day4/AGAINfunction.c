/*. Write a function increment(int *n) that increases the given number by 10. Call the function 
from main() and show that the change is reflected in the original variable. 
*/
#include<stdio.h>
void increment(int *n){
    *n=*n+10;
}
  int main(){
  int a=10;
  increment(&a); 
  printf("%d",a);
  return 0;
}