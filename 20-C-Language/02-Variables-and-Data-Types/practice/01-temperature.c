#include <stdio.h>

int main(void)
{
    float celsius = 36.5f;
    float fahrenheit;

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("Temperature Conversion\n");
    printf("----------------------\n");
    printf("Celsius    : %.1f C\n", celsius);
    printf("Fahrenheit : %.1f F\n", fahrenheit);

    return 0;
}