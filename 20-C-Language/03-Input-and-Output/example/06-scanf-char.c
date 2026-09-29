#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Your grade is: %c\n", grade);

    return 0;
}