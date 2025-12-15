#include <stdio.h>
int main()
{ // there will not be more than 1 pair
    // Find the total number of pairs in the Array whose sum is equal to the given value x.
    int x = 10;
    int arr[4] = {5, 5, 5, 5};
    int i, j;
    int temp1, temp2;
    int count;
    int pairs;
    for (i = 0; i < 4; i++)
    {
        pairs = 0;
        count = 0;
       
            for (j = i + 1; j < 4; j++)
            {
                if (pairs != 1){
                if (arr[i] + arr[j] == x)
                {
                    temp1 = arr[i];
                    temp2 = arr[j];
                    count++;
                    printf("%d pair of %d and %d\n", count, temp1, temp2);
                    pairs++;
                }
            }
        }
    }
}