#include <stdio.h>

int main(void)
{
    char name[] = "Gursimran";

    printf("Using %%s: %s\n", name);

    printf("Characters:\n");

    for (size_t i = 0; name[i] != '\0'; i++)
    {
        printf("name[%zu] = %c\n", i, name[i]);
    }

    return 0;
}