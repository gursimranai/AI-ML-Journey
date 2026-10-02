#include <stdio.h>

void change_value(int number)
{
    number = 100;
}

int main(void)
{
    int value = 10;

    printf("Before function call: %d\n", value);

    change_value(value);

    printf("After function call: %d\n", value);

    return 0;
}