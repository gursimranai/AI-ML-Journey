#include <stdio.h>

void update_value(int *number)
{
    if (number != NULL)
    {
        *number *= 2;
    }
}

int main(void)
{
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    update_value(&number);

    printf("Doubled value: %d\n", number);

    return 0;
}