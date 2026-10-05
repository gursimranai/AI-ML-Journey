#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[50];
    char second[50];

    printf("Enter first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';

    int result = strcmp(first, second);

    if (result == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string comes before second string.\n");
    }
    else
    {
        printf("First string comes after second string.\n");
    }

    return 0;
}