#include <stdio.h>

int main(void)
{
    int first = 10;
    int second = 20;

    int *first_pointer = &first;
    int *second_pointer = &second;

    printf("First value: %d\n", *first_pointer);
    printf("Second value: %d\n", *second_pointer);

    *first_pointer = 100;
    *second_pointer = 200;

    printf("\nAfter modification:\n");
    printf("First: %d\n", first);
    printf("Second: %d\n", second);

    return 0;
}