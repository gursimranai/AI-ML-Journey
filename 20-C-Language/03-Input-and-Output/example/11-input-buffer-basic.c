#include <stdio.h>

int main(void)
{
    int age;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Information\n");
    printf("----------------------\n");
    printf("Age   : %d\n", age);
    printf("Grade : %c\n", grade);

    return 0;
}