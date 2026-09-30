#include <stdio.h>

int main(void)
{
    int number = 5;

    printf("Increment and Decrement\n");
    printf("========================\n");

    printf("Original       : %d\n", number);

    number++;
    printf("After ++       : %d\n", number);

    number--;
    printf("After --       : %d\n", number);

    printf("Prefix ++      : %d\n", ++number);
    printf("Postfix ++     : %d\n", number++);

    printf("Final value    : %d\n", number);

    return 0;
}