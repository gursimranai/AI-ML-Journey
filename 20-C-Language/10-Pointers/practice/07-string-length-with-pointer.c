#include <stdio.h>

size_t string_length(const char *pointer)
{
    size_t length = 0;

    while (*pointer != '\0')
    {
        length++;
        pointer++;
    }

    return length;
}

int main(void)
{
    char text[] = "Pointer Programming";

    printf("String: %s\n", text);
    printf("Length: %zu\n", string_length(text));

    return 0;
}