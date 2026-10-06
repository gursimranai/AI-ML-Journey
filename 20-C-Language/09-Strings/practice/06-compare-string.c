#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[100];
    char second[100];

    printf("Enter first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';

    if (strcmp(first, second) == 0)
    {
        printf("Both strings are equal.\n");
    }
    else
    {
        printf("The strings are different.\n");
    }

    return 0;
}