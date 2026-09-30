#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nExpression Evaluation\n");
    printf("========================\n");

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    printf("\na + b * c       = %d\n", a + b * c);
    printf("(a + b) * c     = %d\n", (a + b) * c);
    printf("a * b + c       = %d\n", a * b + c);
    printf("a + b + c       = %d\n", a + b + c);

    return 0;
}