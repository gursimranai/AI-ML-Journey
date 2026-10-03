#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Accessing Array Elements\n");
    printf("========================\n");

    printf("First element : %d\n", numbers[0]);
    printf("Second element: %d\n", numbers[1]);
    printf("Third element : %d\n", numbers[2]);
    printf("Fourth element: %d\n", numbers[3]);
    printf("Fifth element : %d\n", numbers[4]);

    return 0;
}