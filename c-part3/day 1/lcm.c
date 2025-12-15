#include<stdio.h>
void lcm(int,int);
int main(){

int a,b;
printf("Enter two numbers to compute LCM\n");
scanf("%d %d",&a,&b);
lcm(a,b);

    return 0;
}
void lcm(int a,int b){
    int max=a;
    if(b>a){
        max=b; 
    }
  for(int i=max;;i++){
    if(i%a==0 && i%b==0){
        printf("lcm is %d", i);
        break;
  }
}}