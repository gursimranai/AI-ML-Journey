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

    int left = 0;
    int right = 4;

    while (left < right)
    {
        int temp = numbers[left];

        numbers[left] = numbers[right];
        numbers[right] = temp;

        left++;
        right--;
    }

    printf("\nReversed Array\n");
    printf("========================\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}