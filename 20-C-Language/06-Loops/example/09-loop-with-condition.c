#include <stdio.h>

int main(void)
{
    printf("Loop with Condition\n");
    printf("========================\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even.\n", i);
        }
    }

    return 0;
}