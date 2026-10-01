#include <stdio.h>

int main(void)
{
    printf("BREAK Statement\n");
    printf("========================\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        printf("%d\n", i);
    }

    printf("Loop terminated.\n");

    return 0;
}