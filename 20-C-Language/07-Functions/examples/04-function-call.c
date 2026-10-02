#include <stdio.h>

void display_message(void)
{
    printf("Function has been called.\n");
}

int main(void)
{
    printf("Before function call.\n");

    display_message();

    printf("After function call.\n");

    return 0;
}