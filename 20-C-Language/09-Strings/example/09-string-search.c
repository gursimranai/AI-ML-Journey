#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[] = "Artificial Intelligence";
    char character = 'I';

    char *result = strchr(text, character);

    if (result != NULL)
    {
        printf("Character '%c' found.\n", character);
        printf("Remaining string from match: %s\n", result);
    }
    else
    {
        printf("Character '%c' not found.\n", character);
    }

    return 0;
}