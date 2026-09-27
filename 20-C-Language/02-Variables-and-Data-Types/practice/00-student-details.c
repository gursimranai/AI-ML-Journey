#include <stdio.h>

int main(void)
{
    int age = 18;
    int roll_number = 101;
    float percentage = 92.5f;
    char grade = 'A';

    printf("Student Details\n");
    printf("----------------------\n");
    printf("Age        : %d\n", age);
    printf("Roll Number: %d\n", roll_number);
    printf("Percentage : %.1f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}