#include <stdio.h>

int main(void)
{
    int number = 10;
    double value;

    value = number;

    printf("Integer value: %d\n", number);
    printf("Converted value: %.1f\n", value);

    return 0;
}