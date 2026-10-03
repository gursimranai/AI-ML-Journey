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

    printf("\nArray Elements\n");
    printf("========================\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}