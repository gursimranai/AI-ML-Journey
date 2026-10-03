#include <stdio.h>

int main(void)
{
    int numbers[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }

    double average = (double)sum / 5;

    printf("\nArray Statistics\n");
    printf("========================\n");
    printf("Sum     : %d\n", sum);
    printf("Average : %.2f\n", average);

    return 0;
}