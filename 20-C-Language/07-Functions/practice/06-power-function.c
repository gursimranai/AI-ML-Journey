#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main(void)
{
    int base;
    int exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0)
    {
        printf("This program supports non-negative exponents only.\n");
        return 0;
    }

    printf("%d^%d = %lld\n", base, exponent, power(base, exponent));

    return 0;
}