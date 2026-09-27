#include <stdio.h>

int main(void)
{
    /* Student information */
    const int ROLL_NUMBER = 101;

    int age = 18;
    float percentage = 92.5f;
    double height = 175.75;
    char grade = 'A';

    /* Display student information */
    printf("========================================\n");
    printf("          STUDENT INFORMATION            \n");
    printf("========================================\n");

    printf("Roll Number : %d\n", ROLL_NUMBER);
    printf("Age         : %d years\n", age);
    printf("Percentage  : %.1f%%\n", percentage);
    printf("Height      : %.2f cm\n", height);
    printf("Grade       : %c\n", grade);

    printf("----------------------------------------\n");

    /* Display data type sizes */
    printf("DATA TYPE INFORMATION\n");
    printf("----------------------------------------\n");

    printf("int         : %zu byte(s)\n", sizeof(age));
    printf("float       : %zu byte(s)\n", sizeof(percentage));
    printf("double      : %zu byte(s)\n", sizeof(height));
    printf("char        : %zu byte(s)\n", sizeof(grade));

    printf("========================================\n");

    return 0;
}