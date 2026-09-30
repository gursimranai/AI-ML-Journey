#include <stdio.h>

int main(void)
{
    int age = 20;
    float marks = 85.0f;

    printf("Multiple Conditions\n");
    printf("========================\n");

    printf("Age   : %d\n", age);
    printf("Marks : %.1f\n", marks);

    if (age >= 18 && marks >= 60)
    {
        printf("Both conditions are satisfied.\n");
        printf("Student is eligible.\n");
    }
    else
    {
        printf("Eligibility conditions are not satisfied.\n");
    }

    return 0;
}