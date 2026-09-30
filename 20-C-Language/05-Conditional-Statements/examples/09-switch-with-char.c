#include <stdio.h>

int main(void)
{
    char grade = 'A';

    printf("SWITCH with Character\n");
    printf("========================\n");

    printf("Grade: %c\n", grade);

    switch (grade)
    {
        case 'A':
            printf("Excellent performance.\n");
            break;

        case 'B':
            printf("Good performance.\n");
            break;

        case 'C':
            printf("Average performance.\n");
            break;

        case 'D':
            printf("Needs improvement.\n");
            break;

        case 'F':
            printf("Failed.\n");
            break;

        default:
            printf("Invalid grade.\n");
    }

    return 0;
}