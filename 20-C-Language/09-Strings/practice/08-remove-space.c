#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    size_t write_index = 0;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    for (size_t read_index = 0; text[read_index] != '\0'; read_index++)
    {
        if (!isspace((unsigned char)text[read_index]))
        {
            text[write_index] = text[read_index];
            write_index++;
        }
    }

    text[write_index] = '\0';

    printf("String without spaces: %s\n", text);

    return 0;
}