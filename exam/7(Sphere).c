#include <stdio.h>

int main() {
    double radius, surface_area,PI;
    PI=3.1416;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    surface_area = 4 * PI * radius * radius;

    printf("Surface area of the sphere = %lf", surface_area);

    return 0;
}
