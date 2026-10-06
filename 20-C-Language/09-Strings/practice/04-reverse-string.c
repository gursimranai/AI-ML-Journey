#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    size_t length = strlen(text);

    if (length > 1)
    {
        size_t left = 0;
        size_t right = length - 1;

        while (left < right)
        {
            char temp = text[left];
            text[left] = text[right];
            text[right] = temp;

            left++;
            right--;
        }
    }

    printf("Reversed string: %s\n", text);

    return 0;
}