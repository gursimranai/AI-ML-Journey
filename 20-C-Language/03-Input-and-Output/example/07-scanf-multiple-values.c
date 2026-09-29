#include <stdio.h>

int main(void)
{
    int age;
    float percentage;
    char grade;

    printf("Enter age, percentage and grade: ");
    scanf("%d %f %c", &age, &percentage, &grade);

    printf("\nStudent Information\n");
    printf("----------------------\n");
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}