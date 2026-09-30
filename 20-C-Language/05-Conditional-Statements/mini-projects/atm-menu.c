#include <stdio.h>

int main(void)
{
    int pin;
    int choice;
    float balance = 25000.0f;
    float amount;

    printf("========================================\n");
    printf("               ATM SYSTEM               \n");
    printf("========================================\n");

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin != 1234)
    {
        printf("\nIncorrect PIN.\n");
        printf("Access denied.\n");

        return 0;
    }

    printf("\nLogin successful.\n");

    printf("\n========================================\n");
    printf("                ATM MENU                \n");
    printf("========================================\n");

    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("----------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice)
    {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance += amount;

                printf("Deposit successful.\n");
                printf("New Balance: %.2f\n", balance);
            }
            else
            {
                printf("Invalid deposit amount.\n");
            }

            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Invalid withdrawal amount.\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                balance -= amount;

                printf("Withdrawal successful.\n");
                printf("Remaining Balance: %.2f\n", balance);
            }

            break;

        case 4:
            printf("Thank you for using the ATM.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    printf("\n========================================\n");
    printf("             END OF PROGRAM             \n");
    printf("========================================\n");

    return 0;
}