#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int main(void)
{
    double a;
    double b;
    char operator;

    printf("Enter expression (example: 10 + 5): ");
    scanf("%lf %c %lf", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            printf("Result: %.2f\n", add(a, b));
            break;

        case '-':
            printf("Result: %.2f\n", subtract(a, b));
            break;

        case '*':
            printf("Result: %.2f\n", multiply(a, b));
            break;

        case '/':
            if (b == 0)
            {
                printf("Error: Division by zero.\n");
            }
            else
            {
                printf("Result: %.2f\n", divide(a, b));
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}