#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    size_t left = 0;
    size_t right = length - 1;

    while (left < right)
    {
        int temp = numbers[left];

        numbers[left] = numbers[right];
        numbers[right] = temp;

        left++;
        right--;
    }

    printf("Reversed Array\n");
    printf("========================\n");

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}