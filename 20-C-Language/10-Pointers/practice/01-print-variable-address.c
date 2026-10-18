#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int *pointer = &number;

    printf("Value: %d\n", number);
    printf("Address: %p\n", (void *)pointer);

    return 0;
}