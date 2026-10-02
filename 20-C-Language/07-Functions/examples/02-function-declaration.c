#include <stdio.h>

void greet(void);

int main(void)
{
    greet();

    return 0;
}

void greet(void)
{
    printf("Hello from the declared function.\n");
}