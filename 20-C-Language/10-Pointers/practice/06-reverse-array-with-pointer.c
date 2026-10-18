#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int *left = numbers;
    int *right = numbers + length - 1;

    while (left < right)
    {
        int temporary = *left;
        *left = *right;
        *right = temporary;

        left++;
        right--;
    }

    printf("Reversed array: ");

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}