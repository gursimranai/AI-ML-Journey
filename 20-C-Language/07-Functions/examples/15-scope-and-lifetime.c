#include <stdio.h>

void demonstrate_scope(void)
{
    int local_number = 50;

    printf("Inside function: %d\n", local_number);
}

int main(void)
{
    demonstrate_scope();

    /*
        local_number cannot be accessed here
        because it belongs to demonstrate_scope().
    */

    return 0;
}
