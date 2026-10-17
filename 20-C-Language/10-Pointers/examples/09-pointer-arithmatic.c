#include <stdio.h>

int main(void)
{
    int numbers[] = {100, 200, 300, 400, 500};
    int *pointer = numbers;

    printf("First element: %d\n", *pointer);
    printf("Second element: %d\n", *(pointer + 1));
    printf("Third element: %d\n", *(pointer + 2));

    pointer++;

    printf("\nAfter pointer++:\n");
    printf("Current element: %d\n", *pointer);

    pointer += 2;

    printf("After pointer += 2: %d\n", *pointer);

    return 0;
}