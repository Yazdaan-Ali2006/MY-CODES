#include<stdio.h>
int main(){
    int mat[2][2]={{10,10},{11,11}};
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("[%d][%d]\t%x",i,j,&mat[i][j]);
        }
    }
}