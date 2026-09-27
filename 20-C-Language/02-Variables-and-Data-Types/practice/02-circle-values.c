#include <stdio.h>

int main(void)
{
    double radius = 5.0;
    double pi = 3.141592653589793;
    double diameter;
    double circumference;
    double area;

    diameter = 2.0 * radius;
    circumference = 2.0 * pi * radius;
    area = pi * radius * radius;

    printf("Circle Values\n");
    printf("----------------------\n");
    printf("Radius        : %.2f\n", radius);
    printf("Diameter      : %.2f\n", diameter);
    printf("Circumference : %.2f\n", circumference);
    printf("Area          : %.2f\n", area);

    return 0;
}