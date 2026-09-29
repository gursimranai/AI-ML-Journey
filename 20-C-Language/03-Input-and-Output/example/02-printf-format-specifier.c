#include <stdio.h>

int main(void)
{
    int age = 18;
    float percentage = 92.5f;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age        : %d\n", age);
    printf("Percentage : %.1f%%\n", percentage);
    printf("PI         : %.4f\n", pi);
    printf("Grade      : %c\n", grade);

    return 0;
}