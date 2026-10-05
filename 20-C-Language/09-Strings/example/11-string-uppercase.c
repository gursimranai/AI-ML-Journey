#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (size_t i = 0; text[i] != '\0'; i++)
    {
        text[i] = (char)toupper((unsigned char)text[i]);
    }

    printf("Uppercase: %s\n", text);

    return 0;
}