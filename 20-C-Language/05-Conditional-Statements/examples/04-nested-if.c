#include <stdio.h>

int main(void)
{
    int age = 20;
    int has_id = 1;

    printf("Nested IF Statement\n");
    printf("========================\n");

    if (age >= 18)
    {
        printf("Age requirement satisfied.\n");

        if (has_id == 1)
        {
            printf("ID verification successful.\n");
            printf("Entry allowed.\n");
        }
    }

    return 0;
}