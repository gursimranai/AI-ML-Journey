#include <stdio.h>

int main(void)
{
    int numbers[] = {25, 10, 75, 40, 60};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int smallest = numbers[0];

    for (size_t i = 1; i < length; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Smallest Element\n");
    printf("========================\n");
    printf("Smallest: %d\n", smallest);

    return 0;
}