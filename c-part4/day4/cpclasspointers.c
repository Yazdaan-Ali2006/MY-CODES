#include <stdio.h>
int main(){
int *px,x=10;
int *py,y=20;
int *pz,z=30;
px = px+2;
py = &y;    
pz = &z;
printf("the address of x is %p\n",px);
printf("the value of x is %d\n",*px);
printf("the address of y is %p\n",py);
printf("the value of y is %d\n",*py);
printf("the address of z is %p\n",pz);
printf("the value of z is %d\n",*pz);







    return 0;
}