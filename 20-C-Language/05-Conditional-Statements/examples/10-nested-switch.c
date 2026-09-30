#include <stdio.h>

int main(void)
{
    int category = 1;
    int option = 2;

    printf("Nested SWITCH Statement\n");
    printf("========================\n");

    printf("Category: %d\n", category);
    printf("Option  : %d\n", option);

    switch (category)
    {
        case 1:
            printf("\nProgramming\n");

            switch (option)
            {
                case 1:
                    printf("C Programming selected.\n");
                    break;

                case 2:
                    printf("C++ Programming selected.\n");
                    break;

                case 3:
                    printf("Python selected.\n");
                    break;

                default:
                    printf("Invalid programming option.\n");
            }

            break;

        case 2:
            printf("\nAI/ML\n");

            switch (option)
            {
                case 1:
                    printf("Machine Learning selected.\n");
                    break;

                case 2:
                    printf("Deep Learning selected.\n");
                    break;

                default:
                    printf("Invalid AI/ML option.\n");
            }

            break;

        default:
            printf("Invalid category.\n");
    }

    return 0;
}