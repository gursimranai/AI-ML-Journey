#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];
    size_t consonants = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        unsigned char character = (unsigned char)text[i];

        if (isalpha(character))
        {
            char lower = (char)tolower(character);

            if (lower != 'a' &&
                lower != 'e' &&
                lower != 'i' &&
                lower != 'o' &&
                lower != 'u')
            {
                consonants++;
            }
        }
    }

    printf("Number of consonants: %zu\n", consonants);

    return 0;
}