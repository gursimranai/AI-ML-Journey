#include <stdio.h>

int main(void)
{
    int age = 20;
    int has_id = 1;

    printf("Logical Operators\n");
    printf("========================\n");

    printf("AND (&&) : %d\n", age >= 18 && has_id == 1);
    printf("OR  (||) : %d\n", age >= 18 || has_id == 0);
    printf("NOT (!)  : %d\n", !(age >= 18));

    return 0;
}