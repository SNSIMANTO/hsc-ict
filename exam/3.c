#include <stdio.h>

int main() {
    float length,width, area;


    printf("Enter the length of the circle: ");
    scanf("%f", &length);

    printf("Enter the width of the circle: ");
    scanf("%f", &width);

    area =length * width;

    printf("Area is = %lf", area);

    return 0;
}
