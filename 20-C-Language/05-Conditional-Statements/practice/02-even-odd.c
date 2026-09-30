#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\nEven / Odd Checker\n");
    printf("==============================\n");

    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}