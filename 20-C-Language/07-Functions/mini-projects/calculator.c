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

void display_menu(void)
{
    printf("\n========================================\n");
    printf("             CALCULATOR                 \n");
    printf("========================================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("========================================\n");
}

int main(void)
{
    int choice;
    double a;
    double b;

    while (1)
    {
        display_menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("\nExiting calculator...\n");
            break;
        }

        if (choice < 1 || choice > 5)
        {
            printf("\nInvalid choice. Please try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &a);

        printf("Enter second number: ");
        scanf("%lf", &b);

        printf("\nResult\n");
        printf("----------------------------------------\n");

        switch (choice)
        {
            case 1:
                printf("%.2f + %.2f = %.2f\n",
                       a, b, add(a, b));
                break;

            case 2:
                printf("%.2f - %.2f = %.2f\n",
                       a, b, subtract(a, b));
                break;

            case 3:
                printf("%.2f * %.2f = %.2f\n",
                       a, b, multiply(a, b));
                break;

            case 4:
                if (b == 0)
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                else
                {
                    printf("%.2f / %.2f = %.2f\n",
                           a, b, divide(a, b));
                }
                break;
        }
    }

    return 0;
}