#include <stdio.h>

int main() {
    int arr1[10];
    int arr2[10];
    int common[10]; 
    int exist, i, j, k = 0;

    printf("Enter 10 numbers for Set 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 numbers for Set 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                exist = 0;
                for (int x = 0; x < k; x++) { 
                    if (common[x] == arr1[i]) {
                        exist = 1;
                        break;
                    }
                }
                if (exist == 0) { 
                    common[k] = arr1[i];
                    k++;
                }
            }
        }
    }

    printf("Unique common elements are:\n");
    for (i = 0; i < k; i++) {
        printf("%d\n", common[i]);
    }

    return 0;
}
