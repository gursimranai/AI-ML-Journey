
#include <stdio.h>

int add(double a, double b, double *result)
{
    *result = a + b;
    return 1;
}

int subtract(double a, double b, double *result)
{
    *result = a - b;
    return 1;
}

int multiply(double a, double b, double *result)
{
    *result = a * b;
    return 1;
}

int divide(double a, double b, double *result)
{
    if (b == 0.0)
    {
        return 0;
    }

    *result = a / b;
    return 1;
}

int main(void)
{
    double first, second, result;
    char operator;

    printf("===== Pointer-Based Calculator =====\n");
    printf("Operations: +  -  *  /\n");

    printf("Enter an expression (example: 10 + 5): ");

    if (scanf("%lf %c %lf", &first, &operator, &second) != 3)
    {
        printf("Invalid input format.\n");
        return 1;
    }

    int success = 0;

    switch (operator)
    {
        case '+':
            success = add(first, second, &result);
            break;

        case '-':
            success = subtract(first, second, &result);
            break;

        case '*':
            success = multiply(first, second, &result);
            break;

        case '/':
            success = divide(first, second, &result);
            break;

        default:
            printf("Invalid operator.\n");
            return 1;
    }

    if (!success)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
