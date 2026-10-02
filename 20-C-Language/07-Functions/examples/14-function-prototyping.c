#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int result = add(15, 25);

    printf("Result: %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}