#include <stdio.h>

int main() {
    float radius, volume,PI;
    PI=3.1416;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Volume of the sphere = %f", volume);

    return 0;
}
