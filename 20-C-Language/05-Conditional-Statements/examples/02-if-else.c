#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("IF-ELSE Statement\n");
    printf("========================\n");

    if (number > 0)
    {
        printf("%d is positive.\n", number);
    }
    else
    {
        printf("%d is not positive.\n", number);
    }

    return 0;
}