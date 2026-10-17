#include <stdio.h>

int main(void)
{
    int number = 50;
    int *pointer = &number;

    printf("Original value: %d\n", number);
    printf("Dereferenced value: %d\n", *pointer);

    *pointer = 75;

    printf("Value after dereferencing assignment: %d\n", number);

    return 0;
}