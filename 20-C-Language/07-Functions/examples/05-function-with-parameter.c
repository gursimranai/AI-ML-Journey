#include <stdio.h>

void print_number(int number)
{
    printf("Number: %d\n", number);
}

int main(void)
{
    print_number(10);
    print_number(25);
    print_number(50);

    return 0;
}