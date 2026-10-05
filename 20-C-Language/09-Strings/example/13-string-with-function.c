#include <stdio.h>
#include <string.h>
#include <ctype.h>

void display_string(const char *text)
{
    printf("String: %s\n", text);
}

size_t count_vowels(const char *text)
{
    size_t count = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        char character = (char)tolower((unsigned char)text[i]);

        if (character == 'a' ||
            character == 'e' ||
            character == 'i' ||
            character == 'o' ||
            character == 'u')
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    display_string(text);

    printf("Length: %zu\n", strlen(text));
    printf("Vowels: %zu\n", count_vowels(text));

    return 0;
}