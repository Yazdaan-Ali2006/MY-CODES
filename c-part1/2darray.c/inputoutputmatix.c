#include <stdio.h>

int main() {
    int matrix[3][3]={{1,0,3},{-4,5,6},{66,77,88}};
    int rows=3;
   int  cols=3;
   int pos=0;
   int neg=0;
   int zero=0;

    int i;
    int j;
    /*printf("ENTER THE MATRIX\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("\nFor %d row and %d column:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }*/
   printf("PRINTING THE MATRIX\n");
    for(i=0;i<rows;i++){
           for(j=0;j<cols;j++){
            if(matrix[i][j]>0){
                pos++;
            }
           else if(matrix[i][j]<0){
                neg++;
            }
            else{
                zero++;
            }
    
               
        }
      
    }

printf("In the given 2D array there %d positive numbers, %d negaive numbers and %d zeros are there",pos,neg,zero);


    return 0;
}