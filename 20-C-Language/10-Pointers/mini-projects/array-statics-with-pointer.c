
#include <stdio.h>

#define MAX_SIZE 100

int calculate_statistics(
    const int *numbers,
    size_t length,
    long long *sum,
    int *minimum,
    int *maximum
)
{
    if (numbers == NULL || length == 0 ||
        sum == NULL || minimum == NULL || maximum == NULL)
    {
        return 0;
    }

    *sum = 0;
    *minimum = *numbers;
    *maximum = *numbers;

    for (size_t i = 0; i < length; i++)
    {
        int current = *(numbers + i);

        *sum += current;

        if (current < *minimum)
        {
            *minimum = current;
        }

        if (current > *maximum)
        {
            *maximum = current;
        }
    }

    return 1;
}

int main(void)
{
    int numbers[MAX_SIZE];
    size_t length;

    printf("===== Array Statistics Analyzer =====\n");
    printf("How many numbers (1-%d)? ", MAX_SIZE);

    if (scanf("%zu", &length) != 1 ||
        length == 0 || length > MAX_SIZE)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %zu integers:\n", length);

    for (size_t i = 0; i < length; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid number entered.\n");
            return 1;
        }
    }

    long long sum;
    int minimum;
    int maximum;

    if (!calculate_statistics(
            numbers, length, &sum, &minimum, &maximum))
    {
        printf("Could not calculate statistics.\n");
        return 1;
    }

    double average = (double)sum / length;

    printf("\n===== Results =====\n");
    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", average);
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);

    printf("Elements using pointers: ");

    const int *pointer = numbers;

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", *(pointer + i));
    }

    printf("\n");

    return 0;
}
