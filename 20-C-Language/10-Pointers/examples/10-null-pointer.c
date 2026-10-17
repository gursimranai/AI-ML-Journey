#include <stdio.h>

int main(void)
{
    int *pointer = NULL;

    printf("Pointer initialized to NULL.\n");

    if (pointer == NULL)
    {
        printf("Pointer does not point to an object.\n");
    }

    int number = 50;
    pointer = &number;

    if (pointer != NULL)
    {
        printf("Pointer now refers to: %d\n", *pointer);
    }

    return 0;
}