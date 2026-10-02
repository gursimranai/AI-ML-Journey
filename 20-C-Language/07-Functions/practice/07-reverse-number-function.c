#include <stdio.h>

int reverse_number(int number)
{
    int reversed = 0;
    int sign = 1;

    if (number < 0)
    {
        sign = -1;
        number = -number;
    }

    while (number != 0)
    {
        int digit = number % 10;

        reversed = reversed * 10 + digit;

        number /= 10;
    }

    return reversed * sign;
}

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Reversed number: %d\n", reverse_number(number));

    return 0;
}