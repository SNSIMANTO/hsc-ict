#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare numbers
    if (num1 > num2) {
        printf("%d is the biggest number.\n", num1);
        printf("%d is the smallest number.\n", num2);
    }
    else if (num2 > num1) {
        printf("%d is the biggest number.\n", num2);
        printf("%d is the smallest number.\n", num1);
    }
    else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
