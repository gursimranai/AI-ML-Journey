#include <stdio.h>

int main(void)
{
    double value = 3.141592653589793;

    printf("Default  : %f\n", value);
    printf("1 digit  : %.1f\n", value);
    printf("2 digits : %.2f\n", value);
    printf("4 digits : %.4f\n", value);
    printf("6 digits : %.6f\n", value);

    return 0;
}