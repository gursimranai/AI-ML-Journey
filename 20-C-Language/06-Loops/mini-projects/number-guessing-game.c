#include <stdio.h>

int main(void)
{
    int secret_number = 37;
    int guess;
    int attempts = 0;

    printf("========================================\n");
    printf("          NUMBER GUESSING GAME          \n");
    printf("========================================\n");

    printf("Guess the number between 1 and 100.\n");
    printf("You have unlimited attempts.\n\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n\n");
        }
        else if (guess < secret_number)
        {
            printf("Too low! Try again.\n\n");
        }
        else if (guess > secret_number)
        {
            printf("Too high! Try again.\n\n");
        }
        else
        {
            printf("\n========================================\n");
            printf("Congratulations! You guessed it.\n");
            printf("Secret Number : %d\n", secret_number);
            printf("Attempts      : %d\n", attempts);
            printf("========================================\n");

            break;
        }
    }

    return 0;
}