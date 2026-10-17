#include <stdio.h>

int main(void)
{
    int number = 100;
    int *pointer = &number;

    int numbers[] = {10, 20, 30, 40, 50};

    printf("Size of int: %zu bytes\n", sizeof(number));
    printf("Size of int pointer: %zu bytes\n", sizeof(pointer));

    printf("Size of entire array: %zu bytes\n", sizeof(numbers));
    printf("Size of one array element: %zu bytes\n", sizeof(numbers[0]));

    printf("Number of array elements: %zu\n",
           sizeof(numbers) / sizeof(numbers[0]));

    return 0;
}