#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check conditions
    if (number > 0) {
        printf("The number is Positive.\n");
    }
    else if (number < 0) {
        printf("The number is Negative.\n");
    }
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}
