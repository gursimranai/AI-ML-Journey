#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];
    size_t vowels = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        char character = (char)tolower((unsigned char)text[i]);

        if (character == 'a' ||
            character == 'e' ||
            character == 'i' ||
            character == 'o' ||
            character == 'u')
        {
            vowels++;
        }
    }

    printf("Number of vowels: %zu\n", vowels);

    return 0;
}