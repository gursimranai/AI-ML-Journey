#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("\nFactorial Calculator\n");
    printf("========================\n");
    printf("%d! = %llu\n", n, factorial);

    return 0;
}