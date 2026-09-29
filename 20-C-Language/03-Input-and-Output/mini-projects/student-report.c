#include <stdio.h>

int main(void)
{
    char name[50];
    int age;
    int roll_number;
    float percentage;
    char grade;

    printf("========================================\n");
    printf("             STUDENT REPORT             \n");
    printf("========================================\n");

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("\n");
    printf("========================================\n");
    printf("           STUDENT INFORMATION          \n");
    printf("========================================\n");

    printf("Name       : %s", name);
    printf("Age        : %d\n", age);
    printf("Roll Number: %d\n", roll_number);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    printf("========================================\n");

    return 0;
}