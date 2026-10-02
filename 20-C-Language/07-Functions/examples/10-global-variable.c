#include <stdio.h>

int number = 100;

void display_number(void)
{
    printf("Inside function: %d\n", number);
}

int main(void)
{
    printf("Inside main: %d\n", number);

    display_number();

    return 0;
}