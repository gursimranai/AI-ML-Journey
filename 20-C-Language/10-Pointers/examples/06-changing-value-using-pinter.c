#include <stdio.h>

int main(void)
{
    int number = 10;
    int *pointer = &number;

    printf("Before modification: %d\n", number);

    *pointer = 500;

    printf("After modification: %d\n", number);

    number = 1000;

    printf("After direct assignment: %d\n", *pointer);

    return 0;
}