#include <stdio.h>

int main(void)
{
    int dividend;
    int divisor;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    printf("\nRemainder Calculator\n");
    printf("========================\n");

    printf("Dividend : %d\n", dividend);
    printf("Divisor  : %d\n", divisor);
    printf("Remainder: %d\n", dividend % divisor);

    return 0;
}