#include <stdio.h>

int main(void)
{
    int count = 1;

    printf("Infinite Loop Concept\n");
    printf("========================\n");

    /*
        The following would create an infinite loop:

        while (1)
        {
            printf("Running...\n");
        }

        It is commented out so the program can terminate normally.
    */

    while (count <= 3)
    {
        printf("Loop simulation: %d\n", count);
        count++;
    }

    printf("Infinite loop example skipped.\n");

    return 0;
}