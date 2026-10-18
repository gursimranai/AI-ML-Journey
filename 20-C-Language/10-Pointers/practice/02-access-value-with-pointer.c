#include <stdio.h>

int main(void)
{
    int number = 25;
    int *pointer = &number;

    printf("Original value: %d\n", number);
    printf("Value through pointer: %d\n", *pointer);

    *pointer = 75;

    printf("Updated value: %d\n", number);

    return 0;
}