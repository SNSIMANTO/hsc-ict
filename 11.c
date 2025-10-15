#include <stdio.h>

int main() {
    int num1, num2, num3;
    int biggest, smallest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is both biggest and smallest
    biggest = num1;
    smallest = num1;

    // Check for biggest
    if (num2 > biggest)
        biggest = num2;
    if (num3 > biggest)
        biggest = num3;

    // Check for smallest
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    // Output results
    printf("The biggest number is: %d\n", biggest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
