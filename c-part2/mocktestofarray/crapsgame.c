#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (1 + rand() % 6) + (1 + rand() % 6);
}

int main() {
    int i, roll, sum, point, won[21] = {0}, lost[21] = {0}, totalRolls = 0;
    int winCount = 0, loseCount = 0;

    srand(time(NULL));

    for (i = 0; i < 1000; i++) {
        roll = 1;
        sum = rollDice();

        if (sum == 7 || sum == 11) {
            won[0]++; winCount++;
        } else if (sum == 2 || sum == 3 || sum == 12) {
            lost[0]++; loseCount++;
        } else {
            point = sum;
            while (1) {
                roll++;
                sum = rollDice();
                if (sum == point) { 
                    if (roll <= 20) won[roll - 1]++;
                    else won[20]++;
                    winCount++;
                    break;
                } else if (sum == 7) { 
                    if (roll <= 20) lost[roll - 1]++;
                    else lost[20]++;
                    loseCount++;
                    break;
                }
            }
        }
        totalRolls += roll;
    }

    printf("Roll\tWon\tLost\n");
    for (i = 0; i < 20; i++) printf("%d\t%d\t%d\n", i + 1, won[i], lost[i]);
    printf(">20\t%d\t%d\n", won[20], lost[20]);

    printf("\nChances of winning = %.2f%%\n", (winCount / 1000.0) * 100);
    printf("Average length of game = %.2f rolls\n", totalRolls / 1000.0);

    return 0;
}
