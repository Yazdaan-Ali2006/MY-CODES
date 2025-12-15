#include<stdio.h>
//inc element by 1;
int main(){
int arr[3]={1,2,3};
int i;
int *ptr;
ptr=arr;
for(i=0;i<3;i++){
  printf("%d\n",*(ptr+i)+1);

}



return 0;
}