#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[100];
    int is_palindrome = 1;

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
            char first = (char)tolower((unsigned char)text[left]);
            char last = (char)tolower((unsigned char)text[right]);

            if (first != last)
            {
                is_palindrome = 0;
                break;
            }

            left++;
            right--;
        }
    }

    if (is_palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}