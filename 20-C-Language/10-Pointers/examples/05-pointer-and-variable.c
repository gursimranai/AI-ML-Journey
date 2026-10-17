#include <stdio.h>

int main(void)
{
    int number = 42;
    int *pointer = &number;

    printf("Variable value: %d\n", number);
    printf("Variable address: %p\n", (void *)&number);

    printf("Pointer value (address stored): %p\n", (void *)pointer);
    printf("Pointer's own address: %p\n", (void *)&pointer);

    printf("Value through pointer: %d\n", *pointer);

    return 0;
}