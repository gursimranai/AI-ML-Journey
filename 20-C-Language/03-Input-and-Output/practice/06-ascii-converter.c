#include <stdio.h>

int main(void)
{
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("\nCharacter Information\n");
    printf("========================\n");
    printf("Character : %c\n", character);
    printf("ASCII     : %d\n", character);

    return 0;
}