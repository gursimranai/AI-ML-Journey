#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("\nSum of numbers from 1 to %d\n", n);
    printf("========================\n");
    printf("Sum: %d\n", sum);

    return 0;
}