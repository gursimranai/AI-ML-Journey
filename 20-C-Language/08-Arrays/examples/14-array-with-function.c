#include <stdio.h>

void display_array(const int numbers[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

int calculate_sum(const int numbers[], size_t size)
{
    int sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

int find_largest(const int numbers[], size_t size)
{
    int largest = numbers[0];

    for (size_t i = 1; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    return largest;
}

int main(void)
{
    int numbers[] = {15, 25, 10, 45, 30};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array with Functions\n");
    printf("========================\n");

    printf("Array   : ");
    display_array(numbers, size);

    printf("Sum     : %d\n", calculate_sum(numbers, size));
    printf("Largest : %d\n", find_largest(numbers, size));

    return 0;
}