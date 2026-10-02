#include <stdio.h>

unsigned long long factorial(int number)
{
    unsigned long long result = 1;

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    return result;
}

int main(void)
{
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("%d! = %llu\n", number, factorial(number));

    return 0;
}