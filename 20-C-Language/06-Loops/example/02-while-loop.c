#include <stdio.h>

int main(void)
{
    int i = 1;

    printf("WHILE Loop\n");
    printf("========================\n");

    while (i <= 5)
    {
        printf("Iteration: %d\n", i);
        i++;
    }

    return 0;
}