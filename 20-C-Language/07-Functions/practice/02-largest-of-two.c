#include <stdio.h>

int find_largest(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

int main(void)
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Largest: %d\n", find_largest(a, b));

    return 0;
}