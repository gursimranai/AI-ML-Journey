#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT 500

void analyze_text(const char *text,
                  size_t *characters,
                  size_t *letters,
                  size_t *digits,
                  size_t *spaces,
                  size_t *vowels,
                  size_t *consonants)
{
    *characters = strlen(text);
    *letters = 0;
    *digits = 0;
    *spaces = 0;
    *vowels = 0;
    *consonants = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        unsigned char character = (unsigned char)text[i];

        if (isalpha(character))
        {
            (*letters)++;

            char lower = (char)tolower(character);

            if (lower == 'a' ||
                lower == 'e' ||
                lower == 'i' ||
                lower == 'o' ||
                lower == 'u')
            {
                (*vowels)++;
            }
            else
            {
                (*consonants)++;
            }
        }
        else if (isdigit(character))
        {
            (*digits)++;
        }
        else if (isspace(character))
        {
            (*spaces)++;
        }
    }
}

size_t count_words(const char *text)
{
    size_t words = 0;
    int inside_word = 0;

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (isspace((unsigned char)text[i]))
        {
            inside_word = 0;
        }
        else if (!inside_word)
        {
            words++;
            inside_word = 1;
        }
    }

    return words;
}

void display_analysis(const char *text)
{
    size_t characters;
    size_t letters;
    size_t digits;
    size_t spaces;
    size_t vowels;
    size_t consonants;
    size_t words;

    analyze_text(
        text,
        &characters,
        &letters,
        &digits,
        &spaces,
        &vowels,
        &consonants
    );

    words = count_words(text);

    printf("\n========================================\n");
    printf("           TEXT ANALYZER\n");
    printf("========================================\n");

    printf("Text       : %s\n", text);
    printf("----------------------------------------\n");
    printf("Characters : %zu\n", characters);
    printf("Words      : %zu\n", words);
    printf("Letters    : %zu\n", letters);
    printf("Digits     : %zu\n", digits);
    printf("Spaces     : %zu\n", spaces);
    printf("Vowels     : %zu\n", vowels);
    printf("Consonants : %zu\n", consonants);

    printf("========================================\n");
}

int main(void)
{
    char text[MAX_TEXT];

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    if (text[0] == '\0')
    {
        printf("No text was entered.\n");
        return 0;
    }

    display_analysis(text);

    return 0;
}