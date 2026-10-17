#include <stdio.h>

int main(void)
{
    int number = 25;
    int *pointer = &number;

    printf("Number: %d\n", number);
    printf("Pointer stores address: %p\n", (void *)pointer);
    printf("Value through pointer: %d\n", *pointer);

    return 0;
}