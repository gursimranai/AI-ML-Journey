#include <stdio.h>

int main(void)
{
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int largest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("\nLargest Element\n");
    printf("========================\n");
    printf("Largest: %d\n", largest);

    return 0;
}