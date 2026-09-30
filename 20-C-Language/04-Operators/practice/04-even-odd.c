#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("\nEven/Odd Check\n");
    printf("========================\n");

    printf("Number    : %d\n", number);
    printf("Remainder : %d\n", number % 2);
    printf("Even       : %d\n", number % 2 == 0);
    printf("Odd        : %d\n", number % 2 != 0);

    return 0;
}