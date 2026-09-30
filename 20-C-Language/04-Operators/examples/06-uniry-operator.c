#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("Unary Operators\n");
    printf("========================\n");

    printf("Original value : %d\n", number);
    printf("Positive (+)   : %d\n", +number);
    printf("Negative (-)   : %d\n", -number);
    printf("Logical NOT (!) : %d\n", !number);

    return 0;
}