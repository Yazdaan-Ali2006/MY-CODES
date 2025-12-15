#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int counteven,countodd;
    counteven=0;
    countodd=0;
for(i=0;i<10;i++){
    printf("enter the %d number: ",i+1);
    scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
    if(arr[i]%2==0){
        counteven++;
        printf("%d IS EVEN \n",arr[i]);
    }
    else{
        countodd++;
       printf("%d IS  ODD \n",arr[i]);
    }
}
printf("%d are the number of even numbers in array...\n",counteven);
printf("%d are the number of odd numbers in array...\n",countodd);

    return 0;
}