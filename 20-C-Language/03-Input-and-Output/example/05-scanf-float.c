#include <stdio.h>

int main(void)
{
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Temperature: %.2f\n", temperature);

    return 0;
}