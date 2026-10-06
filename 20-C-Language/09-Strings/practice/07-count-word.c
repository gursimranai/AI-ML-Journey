#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    size_t word_count = 0;
    int inside_word = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        if (isspace((unsigned char)text[i]))
        {
            inside_word = 0;
        }
        else if (!inside_word)
        {
            word_count++;
            inside_word = 1;
        }
    }

    printf("Number of words: %zu\n", word_count);

    return 0;
}