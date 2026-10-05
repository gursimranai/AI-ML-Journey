#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100] = "Machine";
    char second[] = "Learning";

    printf("First string: %s\n", first);
    printf("Second string: %s\n", second);

    printf("\n--- strlen() ---\n");
    printf("Length of first: %zu\n", strlen(first));
    printf("Length of second: %zu\n", strlen(second));

    printf("\n--- strcpy() ---\n");

    char copied[100];
    strcpy(copied, second);

    printf("Copied string: %s\n", copied);

    printf("\n--- strcat() ---\n");

    strcat(first, " ");
    strcat(first, second);

    printf("Concatenated string: %s\n", first);

    printf("\n--- strcmp() ---\n");

    if (strcmp(second, copied) == 0)
    {
        printf("Second and copied strings are equal.\n");
    }

    printf("\n--- strchr() ---\n");

    char *result = strchr(first, 'L');

    if (result != NULL)
    {
        printf("Character 'L' found.\n");
        printf("From match: %s\n", result);
    }

    printf("\n--- strstr() ---\n");

    char *substring = strstr(first, "Learning");

    if (substring != NULL)
    {
        printf("Substring found: %s\n", substring);
    }

    return 0;
}