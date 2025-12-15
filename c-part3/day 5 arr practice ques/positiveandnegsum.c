#include<stdio.h>
int main(){
int arr[5]={0,1,2,-2,-1};
int sumpositive=0;
int sumnegative=0;
int i;
for(i=0;i<5;i++){
    if(arr[i]>0){
        sumpositive+=arr[i];
    }
   else if(arr[i]<0){
        sumnegative+=arr[i];
    }
}
printf("THE SUM OF ALL POSITIVE NUMBERS IN ARRAY IS %d\n",sumpositive);
printf("THE SUM OF ALL NEGATIVE NUMBERS IN ARRAY IS %d\n",sumnegative);






    return 0;
}