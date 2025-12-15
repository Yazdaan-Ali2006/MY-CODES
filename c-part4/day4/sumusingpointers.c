#include<stdio.h>
int main(){
float arr[4]={1,2,300,4};
float *ptr;
int i;
float sum=0;
ptr=&arr[0];
for (i=0;i<4;i++){
   printf("THE VALUE OF ARR[%d] IS %f\n",i,*(ptr+i));
   sum=sum+*(ptr+i);}
printf("%f",sum);


    return 0;
}