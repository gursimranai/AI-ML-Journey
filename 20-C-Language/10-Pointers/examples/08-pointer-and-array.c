#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *pointer = numbers;

    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements using pointers:\n");

    for (size_t i = 0; i < length; i++)
    {
        printf("Element %zu: %d\n", i, *(pointer + i));
    }

    return 0;
}