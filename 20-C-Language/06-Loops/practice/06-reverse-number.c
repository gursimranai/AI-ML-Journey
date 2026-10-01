#include <stdio.h>

int main(void)
{
    int number;
    int reversed = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int temp = number;

    if (temp < 0)
    {
        temp = -temp;
    }

    while (temp != 0)
    {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    if (number < 0)
    {
        reversed = -reversed;
    }

    printf("\nReverse Number\n");
    printf("========================\n");
    printf("Original : %d\n", number);
    printf("Reversed : %d\n", reversed);

    return 0;
}