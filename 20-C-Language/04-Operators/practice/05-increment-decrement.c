#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\nIncrement and Decrement\n");
    printf("========================\n");

    printf("Original value : %d\n", number);

    number++;
    printf("After ++       : %d\n", number);

    number--;
    printf("After --       : %d\n", number);

    printf("Prefix ++      : %d\n", ++number);
    printf("Postfix ++     : %d\n", number++);

    printf("Final value    : %d\n", number);

    return 0;
}