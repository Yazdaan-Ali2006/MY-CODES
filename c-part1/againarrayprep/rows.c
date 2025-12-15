#include <stdio.h>

int main() {
    int mat[3][3]={{1,1,0},{0,0,6},{1,2,0}};
    int count, max = 0;
    int i, j;

    // Step 1: Find the maximum number of 1's in any row
    for(i=0; i<3; i++) {
        count = 0;
        for(j=0; j<3; j++) {
            if(mat[i][j] == 1) {
                count++;
            }
        }
        if(count > max) {
            max = count;
        }
    }

    // Step 2: Print all rows with that maximum number of 1's
    printf("MAX NUMBER OF 1'S IS %d IN ROW(s): ", max);
    for(i=0; i<3; i++) {
        count = 0;
        for(j=0; j<3; j++) {
            if(mat[i][j] == 1) {
                count++;
            }
        }
        if(count == max) {
            printf("%d ", i + 1); // Row number
        }
    }
    printf("\n");

    return 0;
}
