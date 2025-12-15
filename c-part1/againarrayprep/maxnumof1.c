#include <stdio.h>

int main() {
    int mat[3][3]={{1,1,0},{1,1,6},{1,1,0}};
    int sumrow;
    int i,j,temp;
    int count,max=0;
    for(i=0;i<3;i++){
         count=0;
        for(j=0;j<3;j++)
        {
           if(mat[i][j]==1){
            count++;

           }
        
        }
        if(max<count){
            max=count;
            temp=i;
        }
    }
    printf("MAX NUMBER OF 1'S IS  %d WHICH IS PRESENT IN ROW--",max);
        for(i=0;i<3;i++){
            count=0;
            for ( j = 0; j < 3; j++)
            {
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(max==count){
            printf("%d",i+1);}
        }

    return 0;
}