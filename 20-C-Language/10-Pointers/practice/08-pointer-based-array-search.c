#include <stdio.h>

int main(void)
{
    int numbers[] = {12, 25, 37, 48, 59, 63};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    int *pointer = numbers;
    int found = 0;

    printf("Enter the number to search for: ");

    if (scanf("%d", &target) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (size_t i = 0; i < length; i++)
    {
        if (*(pointer + i) == target)
        {
            printf("Found %d at index %zu.\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d was not found in the array.\n", target);
    }

    return 0;
}