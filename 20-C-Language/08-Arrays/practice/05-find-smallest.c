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

    int smallest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("\nSmallest Element\n");
    printf("========================\n");
    printf("Smallest: %d\n", smallest);

    return 0;
}