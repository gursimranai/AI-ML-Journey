#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 2;

    double result = (double)a / b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Result = %.2f\n", result);

    return 0;
}