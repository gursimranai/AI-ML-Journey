#include <stdio.h>

int main(void)
{
    int age = 20;

    printf("IF Statement\n");
    printf("========================\n");

    if (age >= 18)
    {
        printf("Age: %d\n", age);
        printf("You are an adult.\n");
    }

    return 0;
}