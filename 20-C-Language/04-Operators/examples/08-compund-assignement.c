#include <stdio.h>

int main(void)
{
    int number = 20;

    printf("Compound Assignment Operators\n");
    printf("==============================\n");

    printf("Original : %d\n", number);

    number += 5;
    printf("After += 5 : %d\n", number);

    number -= 3;
    printf("After -= 3 : %d\n", number);

    number *= 2;
    printf("After *= 2 : %d\n", number);

    number /= 2;
    printf("After /= 2 : %d\n", number);

    number %= 7;
    printf("After %%= 7: %d\n", number);

    return 0;
}