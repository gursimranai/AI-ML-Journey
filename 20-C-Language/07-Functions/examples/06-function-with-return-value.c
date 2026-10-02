#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main(void)
{
    int result = square(5);

    printf("Square: %d\n", result);

    return 0;
}