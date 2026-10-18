#include <stdio.h>

void swap(int *a, int *b)
{
    int temporary = *a;
    *a = *b;
    *b = temporary;
}

int main(void)
{
    int first;
    int second;

    printf("Enter two integers: ");

    if (scanf("%d %d", &first, &second) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swap: first = %d, second = %d\n",
           first, second);

    swap(&first, &second);

    printf("After swap: first = %d, second = %d\n",
           first, second);

    return 0;
}