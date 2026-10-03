#include <stdio.h>

int main(void)
{
    int original[] = {10, 20, 30, 40, 50};
    size_t length = sizeof(original) / sizeof(original[0]);

    int copy[5];

    for (size_t i = 0; i < length; i++)
    {
        copy[i] = original[i];
    }

    printf("Array Copy\n");
    printf("========================\n");

    printf("Original: ");

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", original[i]);
    }

    printf("\nCopy    : ");

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", copy[i]);
    }

    printf("\n");

    return 0;
}