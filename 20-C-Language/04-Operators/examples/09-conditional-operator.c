#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    int maximum = (a > b) ? a : b;

    printf("Conditional Operator\n");
    printf("========================\n");

    printf("First number  : %d\n", a);
    printf("Second number : %d\n", b);
    printf("Maximum       : %d\n", maximum);

    return 0;
}