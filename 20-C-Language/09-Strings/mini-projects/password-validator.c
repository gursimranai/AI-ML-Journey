#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PASSWORD 100

int has_minimum_length(const char *password)
{
    return strlen(password) >= 8;
}

int has_uppercase(const char *password)
{
    for (size_t i = 0; password[i] != '\0'; i++)
    {
        if (isupper((unsigned char)password[i]))
        {
            return 1;
        }
    }

    return 0;
}

int has_lowercase(const char *password)
{
    for (size_t i = 0; password[i] != '\0'; i++)
    {
        if (islower((unsigned char)password[i]))
        {
            return 1;
        }
    }

    return 0;
}

int has_digit(const char *password)
{
    for (size_t i = 0; password[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)password[i]))
        {
            return 1;
        }
    }

    return 0;
}

int has_special_character(const char *password)
{
    for (size_t i = 0; password[i] != '\0'; i++)
    {
        unsigned char character = (unsigned char)password[i];

        if (!isalnum(character) && !isspace(character))
        {
            return 1;
        }
    }

    return 0;
}

void display_result(const char *password)
{
    int length_valid = has_minimum_length(password);
    int uppercase_valid = has_uppercase(password);
    int lowercase_valid = has_lowercase(password);
    int digit_valid = has_digit(password);
    int special_valid = has_special_character(password);

    int score =
        length_valid +
        uppercase_valid +
        lowercase_valid +
        digit_valid +
        special_valid;

    printf("\n========================================\n");
    printf("        PASSWORD VALIDATOR\n");
    printf("========================================\n");

    printf("Minimum length : %s\n",
           length_valid ? "PASS" : "FAIL");

    printf("Uppercase      : %s\n",
           uppercase_valid ? "PASS" : "FAIL");

    printf("Lowercase      : %s\n",
           lowercase_valid ? "PASS" : "FAIL");

    printf("Digit          : %s\n",
           digit_valid ? "PASS" : "FAIL");

    printf("Special char   : %s\n",
           special_valid ? "PASS" : "FAIL");

    printf("----------------------------------------\n");
    printf("Strength score : %d/5\n", score);

    if (score == 5)
    {
        printf("Result         : Strong\n");
    }
    else if (score >= 3)
    {
        printf("Result         : Moderate\n");
    }
    else
    {
        printf("Result         : Weak\n");
    }

    printf("========================================\n");
}

int main(void)
{
    char password[MAX_PASSWORD];

    printf("Enter a password for validation: ");
    fgets(password, sizeof(password), stdin);

    password[strcspn(password, "\n")] = '\0';

    if (password[0] == '\0')
    {
        printf("Password cannot be empty.\n");
        return 0;
    }

    display_result(password);

    return 0;
}