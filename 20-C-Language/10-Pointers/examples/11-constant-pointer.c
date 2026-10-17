#include <stdio.h>

int main(void)
{
    int first = 10;
    int second = 20;

    /* Pointer to constant data */
    const int *pointer_to_const = &first;

    printf("Pointer to const: %d\n", *pointer_to_const);

    pointer_to_const = &second;

    printf("After reassignment: %d\n", *pointer_to_const);

    /* Constant pointer */
    int *const const_pointer = &first;

    *const_pointer = 100;

    printf("Value through constant pointer: %d\n", first);

    /* Constant pointer to constant data */
    const int *const fixed_pointer = &second;

    printf("Fixed pointer value: %d\n", *fixed_pointer);

    return 0;
}