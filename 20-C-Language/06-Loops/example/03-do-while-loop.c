#include <stdio.h>

int main(void)
{
    int i = 1;

    printf("DO-WHILE Loop\n");
    printf("========================\n");

    do
    {
        printf("Iteration: %d\n", i);
        i++;
    }
    while (i <= 5);

    return 0;
}