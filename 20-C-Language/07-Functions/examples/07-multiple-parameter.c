#include <stdio.h>

int multiply(int a, int b, int c)
{
    return a * b * c;
}

int main(void)
{
    int result = multiply(2, 3, 4);

    printf("Result: %d\n", result);

    return 0;
}