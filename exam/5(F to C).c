#include <stdio.h>

int main() {
    double f, c;
    scanf("%lf", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("%lf", c);
    return 0;
}

