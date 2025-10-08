
#include <stdio.h>

int main() {
    float radius, surface_area, volume,PI;
    PI=3.1416;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Surface area হিসাব
    surface_area = 4 * PI * radius * radius;

    // Volume হিসাব
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    // Output দেখানো
    printf("Surface area of the sphere = %lf\n", surface_area);
    printf("Volume of the sphere = %lf\n", volume);

    return 0;
}
