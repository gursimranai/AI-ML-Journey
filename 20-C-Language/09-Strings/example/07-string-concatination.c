#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[50] = "Artificial ";
    char second[] = "Intelligence";

    strcat(first, second);

    printf("Combined String: %s\n", first);

    return 0;
}