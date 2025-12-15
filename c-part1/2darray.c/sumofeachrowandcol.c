#include <stdio.h>
int main() {
    int arr[3][3]={{1,2,3,},{22,0,0},{19,18,11}};
    int rows=3;
    int col=3;
    int sumrow,sumcol;
    int i,j;
    for(i=0;i<rows;i++){
    sumrow=0; sumcol=0;
        for(j=0;j<col;j++){
           sumrow+=arr[i][j];
           sumcol+=arr[j][i];
        }
        printf("%d is the sum of row %d\n",sumrow,i+1);
        printf("%d is the sum of col %d\n",sumcol,i+1);
    }
    /*for(i=0;i<col;i++)
    {    sumcol=0;
         for(j=0;j<rows;j++){
        sumcol+=arr[j][i];
    }
      printf("%d is the sum of col %d\n",sumcol,i+1);
        
    }*/

   
    return 0;
}