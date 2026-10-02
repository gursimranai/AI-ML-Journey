#include <stdio.h>

void count_down(int number)
{
    if (number == 0)
    {
        return;
    }

    printf("%d\n", number);

    count_down(number - 1);
}

int main(void)
{
    count_down(5);

    return 0;
}