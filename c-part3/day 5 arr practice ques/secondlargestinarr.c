#include <stdio.h>
int main() { 
// terms         0  1  2  3  4
    int arr1[5] = {5, 4, 3, 2, 1};

    int i, j,temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr1[i] < arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        
    
        }
    }
    for (i = 0; i < 5; i++)
    {    if(i==1){
        printf("%d\n", arr1[i]);
        break;
    }
    }

    return 0;}