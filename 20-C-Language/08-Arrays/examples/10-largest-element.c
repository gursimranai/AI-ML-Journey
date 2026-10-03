#include <stdio.h>

int main(void)
{
    int numbers[] = {25, 10, 75, 40, 60};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int largest = numbers[0];

    for (size_t i = 1; i < length; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest Element\n");
    printf("========================\n");
    printf("Largest: %d\n", largest);

    return 0;
}