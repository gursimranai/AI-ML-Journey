#include <stdio.h>

int main(void)
{
    int choice = 2;

    printf("SWITCH Statement\n");
    printf("========================\n");

    printf("Choice: %d\n", choice);

    switch (choice)
    {
        case 1:
            printf("You selected Start.\n");
            break;

        case 2:
            printf("You selected Settings.\n");
            break;

        case 3:
            printf("You selected Exit.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}