int main(){
int mat[3][2]={{0,1,},{3,4,},{6,7,}};
int transpose[2][3];
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        transpose[j][i]=mat[i][j];    }
}for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d\t",transpose[i][j]);
    if(j==1)printf("\n");}
}
    return 0;
}