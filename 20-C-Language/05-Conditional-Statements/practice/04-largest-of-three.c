#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int largest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    printf("\nLargest Number\n");
    printf("==============================\n");
    printf("Numbers : %d, %d, %d\n", a, b, c);
    printf("Largest : %d\n", largest);

    return 0;
}