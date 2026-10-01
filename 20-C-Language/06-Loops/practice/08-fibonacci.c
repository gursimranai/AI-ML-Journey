#include <stdio.h>

int main(void)
{
    int n;
    long long first = 0;
    long long second = 1;
    long long next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("\nFibonacci Series\n");
    printf("========================\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%lld ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}