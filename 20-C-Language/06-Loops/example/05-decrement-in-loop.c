#include <stdio.h>

int main(void)
{
    printf("Decrementing Loop\n");
    printf("========================\n");

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}