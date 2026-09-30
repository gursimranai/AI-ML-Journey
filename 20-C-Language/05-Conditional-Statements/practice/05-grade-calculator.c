#include <stdio.h>

int main(void)
{
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("\nGrade Calculator\n");
    printf("==============================\n");
    printf("Marks: %.2f\n", marks);

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
    else if (marks >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}