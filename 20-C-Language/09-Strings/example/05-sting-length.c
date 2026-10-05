#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[] = "Artificial Intelligence";

    printf("String: %s\n", text);
    printf("Length: %zu\n", strlen(text));
    printf("Array size: %zu bytes\n", sizeof(text));

    return 0;
}