#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int limit;

    printf("========================================\n");
    printf("      MULTIPLICATION TABLE GENERATOR    \n");
    printf("========================================\n");

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Enter table limit: ");
    scanf("%d", &limit);

    if (limit <= 0)
    {
        printf("\nTable limit must be greater than 0.\n");
        return 0;
    }

    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\n========================================\n");
    printf("       MULTIPLICATION TABLES            \n");
    printf("========================================\n");

    for (int number = start; number <= end; number++)
    {
        printf("\nTable of %d\n", number);
        printf("----------------------------------------\n");

        for (int i = 1; i <= limit; i++)
        {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }

    printf("\n========================================\n");
    printf("          END OF PROGRAM                \n");
    printf("========================================\n");

    return 0;
}