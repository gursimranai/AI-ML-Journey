#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int *pointer = numbers;
    int sum = 0;

    for (size_t i = 0; i < length; i++)
    {
        sum += *(pointer + i);
    }

    printf("Array sum: %d\n", sum);

    return 0;
}