#include<stdio.h>
#define row 3
#define col 3
int main(){
    int matrix[row][col]={{1,2,3},{6,7,8},{9,10,11}};
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",matrix[i][j]);
            if(j==2){
                printf("\n");
            }
          
        }
    }
  return 0;
}