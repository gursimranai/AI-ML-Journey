#include <stdio.h>

int main(void)
{
    float marks1;
    float marks2;
    float marks3;
    float total;
    float average;
    float percentage;

    printf("========================================\n");
    printf("            MARKS CALCULATOR            \n");
    printf("========================================\n");

    printf("Enter marks for Subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &marks3);

    total = marks1 + marks2 + marks3;
    average = total / 3.0f;
    percentage = (total / 300.0f) * 100.0f;

    printf("\n");
    printf("MARKS REPORT\n");
    printf("----------------------------------------\n");

    printf("Subject 1    : %.2f\n", marks1);
    printf("Subject 2    : %.2f\n", marks2);
    printf("Subject 3    : %.2f\n", marks3);

    printf("----------------------------------------\n");

    printf("Total Marks  : %.2f / 300\n", total);
    printf("Average      : %.2f\n", average);
    printf("Percentage   : %.2f%%\n", percentage);

    printf("========================================\n");

    return 0;
}