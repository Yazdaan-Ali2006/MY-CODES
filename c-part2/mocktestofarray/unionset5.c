#include <stdio.h>

int main() {
    int arr1[10], arr2[10], combined[20], unique[20];
    int i, j, k = 0, isUnique;
    printf("Enter 10 numbers for Set 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 10 numbers for Set 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < 10; i++) {
        combined[i] = arr1[i];
        combined[i + 10] = arr2[i];
    }
    for (i = 0; i < 20; i++) {
        isUnique = 1;
        for (j = 0; j < k; j++) {
            if (combined[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[k] = combined[i];
            k++;
        }
    }
    printf("Unique elements from both sets are:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
