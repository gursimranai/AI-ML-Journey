#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum: %d\n", add(a, b));

    return 0;
}