#include <stdio.h>

int main(void)
{
    float price;
    int quantity;
    float total;

    printf("Enter item price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nSimple Bill\n");
    printf("========================\n");
    printf("Price    : %.2f\n", price);
    printf("Quantity : %d\n", quantity);
    printf("Total    : %.2f\n", total);

    return 0;
}