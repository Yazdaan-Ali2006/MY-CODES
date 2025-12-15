#include <stdio.h>

int main() {
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sumrow;
    int i,j,temp;
    int max=0;
    for(i=0;i<3;i++){
         sumrow=0;
        for(j=0;j<3;j++)
        {
         sumrow+=mat[i][j];
        
        }
        if(max<sumrow){
            max=sumrow;
            temp=i;
        }
    }
    printf("MAX SUM OF ROW %d IS %d\n",temp+1,max);
    return 0;
}