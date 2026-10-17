#include <stdio.h>

void update_value(int *number)
{
    if (number != NULL)
    {
        *number = 100;
    }
}

int main(void)
{
    int value = 25;

    printf("Before function call: %d\n", value);

    update_value(&value);

    printf("After function call: %d\n", value);

    return 0;
}