#include <stdio.h>

int main(void)
{
    float first_number;
    float second_number;

    printf("========================================\n");
    printf("          SIMPLE CALCULATOR             \n");
    printf("========================================\n");

    printf("Enter first number: ");
    scanf("%f", &first_number);

    printf("Enter second number: ");
    scanf("%f", &second_number);

    printf("\n");
    printf("CALCULATOR RESULTS\n");
    printf("----------------------------------------\n");

    printf("First Number  : %.2f\n", first_number);
    printf("Second Number : %.2f\n", second_number);

    printf("\n");
    printf("Addition      : %.2f\n", first_number + second_number);
    printf("Subtraction   : %.2f\n", first_number - second_number);
    printf("Multiplication: %.2f\n", first_number * second_number);

    printf("========================================\n");

    return 0;
}