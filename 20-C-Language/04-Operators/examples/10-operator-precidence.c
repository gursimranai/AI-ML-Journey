#include <stdio.h>

int main(void)
{
    int result1;
    int result2;

    result1 = 10 + 5 * 2;
    result2 = (10 + 5) * 2;

    printf("Operator Precedence\n");
    printf("========================\n");

    printf("10 + 5 * 2       = %d\n", result1);
    printf("(10 + 5) * 2     = %d\n", result2);

    return 0;
}