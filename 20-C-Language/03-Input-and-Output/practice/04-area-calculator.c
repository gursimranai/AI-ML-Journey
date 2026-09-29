#include <stdio.h>

int main(void)
{
    float length;
    float width;
    float area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("\nRectangle Details\n");
    printf("========================\n");
    printf("Length : %.2f\n", length);
    printf("Width  : %.2f\n", width);
    printf("Area   : %.2f square units\n", area);

    return 0;
}