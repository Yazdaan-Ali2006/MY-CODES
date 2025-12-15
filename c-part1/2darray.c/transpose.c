#include <stdio.h>\
//TRANSPOSE OF MATRIX
int main() {
    int arr[3][3]={{1,2,3,},{22,0,0},{19,18,11}};
    int rows=3;
    int cols=3;

    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            arr[i][j]=arr[j][i];
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
           printf(" %d ",arr[i][j]);
        }
    printf("\n");
    }
    return 0;
}