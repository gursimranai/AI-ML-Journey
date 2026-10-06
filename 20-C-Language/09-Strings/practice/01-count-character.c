#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    size_t count = strlen(text);

    printf("Number of characters: %zu\n", count);

    return 0;
}