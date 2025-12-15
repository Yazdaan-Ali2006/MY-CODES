#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, die1, die2, sum;
    int freq[13] = {0};

    for (i = 0; i < 36000; i++) {
        die1 = 1 + rand() % 6;
        die2 = 1 + rand() % 6;
        sum = die1 + die2;
        freq[sum]++;
    }

    printf("Sum\tFrequency\n");
    for (i = 2; i <= 12; i++) {
        printf("%d\t%d\n", i, freq[i]);
    }

    return 0;
}
