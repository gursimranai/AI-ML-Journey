#include <stdio.h>

void first_function(void)
{
    int number = 10;

    printf("First function: %d\n", number);
}

void second_function(void)
{
    int number = 20;

    printf("Second function: %d\n", number);
}

int main(void)
{
    first_function();
    second_function();

    return 0;
}