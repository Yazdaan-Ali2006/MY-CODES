#include <stdio.h>

int main() {
    int sales[5][4] = {0};
    int s, p, v;
    int i, j;

    while (1) {
        scanf("%d %d %d", &s, &p, &v);
        if (s == 0 && p == 0 && v == 0) break;
        sales[p - 1][s - 1] += v;
    }

    for (i = 0; i < 5; i++) {
        int row_total = 0;
        for (j = 0; j < 4; j++) {
            printf("%d ", sales[i][j]);
            row_total += sales[i][j];
        }
        printf("%d\n", row_total);
    }

    for (j = 0; j < 4; j++) {
        int col_total = 0;
        for (i = 0; i < 5; i++) {
            col_total += sales[i][j];
        }
        printf("%d ", col_total);
    }

    return 0;
}
 