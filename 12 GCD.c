#include <stdio.h>

int main() {
    int a, b, gcd;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    // Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    printf("Gorishtho Shadharon Gunoneyok (GCD) of %d and %d is: %d\n", x, y, gcd);

    return 0;
}
