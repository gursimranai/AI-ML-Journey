#include <stdio.h>

int main(void)
{
    double first_number;
    double second_number;

    printf("========================================\n");
    printf("           BASIC CALCULATOR             \n");
    printf("========================================\n");

    printf("Enter first number: ");
    scanf("%lf", &first_number);

    printf("Enter second number: ");
    scanf("%lf", &second_number);

    printf("\n");
    printf("CALCULATION RESULTS\n");
    printf("----------------------------------------\n");

    printf("First Number   : %.2f\n", first_number);
    printf("Second Number  : %.2f\n", second_number);

    printf("\n");
    printf("Addition       : %.2f\n", first_number + second_number);
    printf("Subtraction    : %.2f\n", first_number - second_number);
    printf("Multiplication : %.2f\n", first_number * second_number);

    printf("========================================\n");

    return 0;
}