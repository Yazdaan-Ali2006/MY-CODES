#include <stdio.h>

int main() {
    int x;
    int arr[] = {6 ,4,2,5,5}; // You can change this array or take input
    int n = sizeof(arr) / sizeof(arr[0]); // Automatically get array size
    int i, j;
    int temp1, temp2;
    int count = 0;
    int pairs = 0;

    printf("Enter the target sum: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x && pairs == 0) {
                temp1 = arr[i];
                temp2 = arr[j];
                count++;
                printf("%d pair of %d and %d\n", count, temp1, temp2);
                pairs = 1;
                break;
            }
        }
        if (pairs == 1)
            break;
    }

    if (pairs == 0)
        printf("No pair found with sum %d\n", x);

    return 0;
}