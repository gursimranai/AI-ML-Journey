#include <stdio.h>

int main(void)
{
    int number = 100;
    float decimal = 25.5f;
    char letter = 'C';

    void *pointer;

    pointer = &number;
    printf("Integer value: %d\n", *(int *)pointer);

    pointer = &decimal;
    printf("Float value: %.2f\n", *(float *)pointer);

    pointer = &letter;
    printf("Character value: %c\n", *(char *)pointer);

    return 0;
}