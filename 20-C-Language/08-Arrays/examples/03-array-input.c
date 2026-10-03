#include <stdio.h>

int main(void)
{
    int numbers[5];

    printf("Array Input\n");
    printf("========================\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nInput completed successfully.\n");

    return 0;
}