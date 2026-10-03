#include <stdio.h>

int main(void)
{
    int numbers[10];
    int target;
    int found = 0;
    int position = -1;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEnter the number to search: ");
    scanf("%d", &target);

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == target)
        {
            found = 1;
            position = i;
            break;
        }
    }

    printf("\nSearch Result\n");
    printf("========================\n");

    if (found)
    {
        printf("%d found at index %d.\n", target, position);
    }
    else
    {
        printf("%d was not found in the array.\n", target);
    }

    return 0;
}