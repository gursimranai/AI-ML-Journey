#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nLargest Number\n");
    printf("==============================\n");

    if (a > b)
    {
        printf("%d is larger.\n", a);
    }
    else if (b > a)
    {
        printf("%d is larger.\n", b);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}