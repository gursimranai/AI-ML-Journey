#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("\nNumbers from 1 to %d\n", n);
    printf("========================\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}