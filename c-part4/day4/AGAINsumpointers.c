#include<stdio.h>
int main(){
float arr[3]={1,2,3};
float sum=0;
float*ptr;
ptr=&arr[0];
int i;
for(i=0;i<3;i++){
    printf("arr[%d]=%f\n",i,*(ptr+i));
sum=sum+*(ptr+i);
}
printf("%f",sum);
}