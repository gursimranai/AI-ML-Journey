#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);

    return 0;
}