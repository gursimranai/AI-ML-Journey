#include <stdio.h>

int main(void)
{
    int number;
    int is_prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 2)
    {
        is_prime = 0;
    }
    else
    {
        for (int i = 2; i <= number / i; i++) // number also 
        {
            if (number % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    printf("\nPrime Number Checker\n");
    printf("========================\n");

    if (is_prime)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}