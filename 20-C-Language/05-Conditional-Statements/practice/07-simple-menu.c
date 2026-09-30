#include <stdio.h>

int main(void)
{
    int choice;

    printf("========================================\n");
    printf("              SIMPLE MENU               \n");
    printf("========================================\n");

    printf("1. Start\n");
    printf("2. Settings\n");
    printf("3. Help\n");
    printf("4. Exit\n");

    printf("----------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice)
    {
        case 1:
            printf("Starting program...\n");
            break;

        case 2:
            printf("Opening settings...\n");
            break;

        case 3:
            printf("Opening help...\n");
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}