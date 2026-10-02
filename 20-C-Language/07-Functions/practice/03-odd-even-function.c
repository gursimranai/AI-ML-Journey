#include <stdio.h>

int is_even(int number)
{
    return number % 2 == 0;
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_even(number))
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}