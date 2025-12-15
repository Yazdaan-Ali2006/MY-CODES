#include <stdio.h>
#include<conio.h>

int main() {
    char input[100];
    int i = 0;
    char ch;

    printf("Enter a string: ");
    while ((ch = getche())!= '\n') {  // stop when Enter is pressed
        input[i] = ch;
        i++;
    }
    input[i] = '\0';  // end of string

    printf("You entered: %s", input);
    return 0;
}
