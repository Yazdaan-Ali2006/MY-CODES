#include<stdio.h>
int main(){
int mat1[3][3]={{0,1,2},{3,4,5},{6,7,8}};
int mat2[3][3]={{11,22,33},{44,55,66},{50,50,50}};
int mat[3][3];
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        mat[i][j]=mat1[i][j]+mat2[i][j];
    }
}for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",mat[i][j]);
    if(j==2)printf("\n");}
}
    return 0;
}