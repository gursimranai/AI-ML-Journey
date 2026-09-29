#include <stdio.h>

int main(void)
{
    char character;

    printf("Enter a character: ");
    character = getchar();

    printf("You entered: %c\n", character);

    return 0;
}