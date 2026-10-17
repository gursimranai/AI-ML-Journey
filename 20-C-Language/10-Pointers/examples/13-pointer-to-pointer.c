#include <stdio.h>

int main(void)
{
    int number = 10;
    int *pointer = &number;
    int **double_pointer = &pointer;

    printf("Original value: %d\n", number);
    printf("Through pointer: %d\n", *pointer);
    printf("Through double pointer: %d\n", **double_pointer);

    **double_pointer = 99;

    printf("After modification: %d\n", number);

    return 0;
}