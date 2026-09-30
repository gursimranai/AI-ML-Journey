#include <stdio.h>

int main(void)
{
    char name[50];
    float marks1;
    float marks2;
    float marks3;
    float total;
    float percentage;
    char grade;

    printf("========================================\n");
    printf("          STUDENT GRADE SYSTEM          \n");
    printf("========================================\n");

    printf("Enter student name: ");
    scanf(" %49[^\n]", name);

    printf("Enter marks for Subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &marks3);

    total = marks1 + marks2 + marks3;
    percentage = (total / 300.0f) * 100.0f;

    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("\n========================================\n");
    printf("             STUDENT REPORT             \n");
    printf("========================================\n");

    printf("Name        : %s\n", name);
    printf("Subject 1   : %.2f\n", marks1);
    printf("Subject 2   : %.2f\n", marks2);
    printf("Subject 3   : %.2f\n", marks3);

    printf("----------------------------------------\n");

    printf("Total Marks : %.2f / 300\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    printf("----------------------------------------\n");

    if (percentage >= 50)
    {
        printf("Result      : PASS\n");
    }
    else
    {
        printf("Result      : FAIL\n");
    }

    printf("========================================\n");

    return 0;
}