#include <stdio.h>

int main(void)
{
    printf("Nested FOR Loop\n");
    printf("========================\n");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}