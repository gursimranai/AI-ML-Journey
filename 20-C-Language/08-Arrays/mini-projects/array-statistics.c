#include <stdio.h>

#define MAX_SIZE 100

void input_array(int numbers[], int size)
{
    printf("\nEnter %d numbers:\n", size);
    printf("----------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

void display_array(const int numbers[], int size)
{
    printf("\nArray\n");
    printf("----------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}

int calculate_sum(const int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

double calculate_average(const int numbers[], int size)
{
    return (double)calculate_sum(numbers, size) / size;
}

int find_maximum(const int numbers[], int size)
{
    int maximum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

int find_minimum(const int numbers[], int size)
{
    int minimum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    return minimum;
}

int count_even(const int numbers[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int count_odd(const int numbers[], int size)
{
    return size - count_even(numbers, size);
}

int count_positive(const int numbers[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > 0)
        {
            count++;
        }
    }

    return count;
}

int count_negative(const int numbers[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < 0)
        {
            count++;
        }
    }

    return count;
}

int count_zero(const int numbers[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == 0)
        {
            count++;
        }
    }

    return count;
}

void display_statistics(const int numbers[], int size)
{
    printf("\n========================================\n");
    printf("          ARRAY STATISTICS              \n");
    printf("========================================\n");

    printf("Sum           : %d\n",
           calculate_sum(numbers, size));

    printf("Average       : %.2f\n",
           calculate_average(numbers, size));

    printf("Maximum       : %d\n",
           find_maximum(numbers, size));

    printf("Minimum       : %d\n",
           find_minimum(numbers, size));

    printf("Even Numbers  : %d\n",
           count_even(numbers, size));

    printf("Odd Numbers   : %d\n",
           count_odd(numbers, size));

    printf("Positive      : %d\n",
           count_positive(numbers, size));

    printf("Negative      : %d\n",
           count_negative(numbers, size));

    printf("Zeros         : %d\n",
           count_zero(numbers, size));

    printf("========================================\n");
}

int main(void)
{
    int numbers[MAX_SIZE];
    int size;

    printf("========================================\n");
    printf("          ARRAY STATISTICS              \n");
    printf("========================================\n");

    printf("Enter array size (1-%d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size < 1 || size > MAX_SIZE)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    input_array(numbers, size);

    display_array(numbers, size);

    display_statistics(numbers, size);

    return 0;
}