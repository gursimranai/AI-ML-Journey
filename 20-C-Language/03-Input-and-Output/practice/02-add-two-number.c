#include <stdio.h>

int main(void)
{
    int first_number;
    int second_number;
    int sum;

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter second number: ");
    scanf("%d", &second_number);

    sum = first_number + second_number;

    printf("\nAddition\n");
    printf("----------------\n");
    printf("First Number : %d\n", first_number);
    printf("Second Number: %d\n", second_number);
    printf("Sum          : %d\n", sum);

    return 0;
}