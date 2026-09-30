#include <stdio.h>

int main(void)
{
    int marks = 85;

    printf("ELSE-IF Ladder\n");
    printf("========================\n");
    printf("Marks: %d\n", marks);

    if (marks >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 70)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}