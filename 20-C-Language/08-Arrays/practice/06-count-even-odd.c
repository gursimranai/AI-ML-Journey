#include <stdio.h>

int main(void)
{
    int numbers[10];
    int even_count = 0;
    int odd_count = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("\nEven and Odd Counter\n");
    printf("========================\n");
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers : %d\n", odd_count);

    return 0;
}