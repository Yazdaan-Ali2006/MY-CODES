#include<stdio.h>
int s(int n,int a,int b ,int c){
if(n==1){
    return a;
}
if(n==2){
    return b;
}
if(n==3){
    return c;
}

return s(n-1,a,b,c)+s(n-2,a,b,c)+s(n-3,a,b,c);
}

int main(){

int a=s(5,1,2,3);
printf("%d",a);


}