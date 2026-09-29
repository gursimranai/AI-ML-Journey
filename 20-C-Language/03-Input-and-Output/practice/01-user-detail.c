#include <stdio.h>

int main(void)
{
    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nUser Details\n");
    printf("====================\n");
    printf("Name: %s", name);
    printf("Age : %d\n", age);

    return 0;
}