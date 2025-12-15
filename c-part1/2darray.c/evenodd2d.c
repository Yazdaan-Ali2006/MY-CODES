#include <stdio.h>

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    int even,odd;
    even=0;
    odd=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]%2==0){
                printf("%d is EVEN\n",arr[i][j]);
                even++;
            }
            else{
                printf("%d is ODD\n",arr[i][j]);
                odd++;

            }

        }
    }
printf("THE GIVEN ARRAY HAVE %d EVEN AND %d ODD NUMBERS\n",even,odd);


    return 0;
}