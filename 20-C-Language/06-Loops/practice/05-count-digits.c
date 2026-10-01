#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;
    int temp;

    printf("Enter an integer: ");
    scanf("%d", &number);

    temp = number;

    if (temp == 0)
    {
        count = 1;
    }
    else
    {
        if (temp < 0)
        {
            temp = -temp;
        }

        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
    }

    printf("\nDigit Counter\n");
    printf("========================\n");
    printf("Number of digits: %d\n", count);

    return 0;
}