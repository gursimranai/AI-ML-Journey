#include <stdio.h>

int main(void)
{
    float celsius;
    float fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("\nTemperature Conversion\n");
    printf("========================\n");
    printf("Celsius    : %.2f C\n", celsius);
    printf("Fahrenheit : %.2f F\n", fahrenheit);

    return 0;
}