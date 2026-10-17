#include <stdio.h>

int main(void)
{
    char text[] = "Hello, C!";
    char *pointer = text;

    printf("Original string: %s\n", text);
    printf("Characters using a pointer:\n");

    while (*pointer != '\0')
    {
        printf("%c ", *pointer);
        pointer++;
    }

    printf("\n");

    /* Reset pointer to the first character. */
    pointer = text;

    *pointer = 'Y';

    printf("Modified string: %s\n", text);

    return 0;
}