#include <stdio.h>

#define MAX_STUDENTS 5

void display_menu(void)
{
    printf("\n========================================\n");
    printf("         STUDENT MANAGEMENT             \n");
    printf("========================================\n");
    printf("1. Add Student Marks\n");
    printf("2. Display Student Marks\n");
    printf("3. Calculate Average\n");
    printf("4. Find Highest Marks\n");
    printf("5. Exit\n");
    printf("========================================\n");
}

void add_marks(int marks[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks added successfully.\n");
}

void display_marks(int marks[], int count)
{
    printf("\nStudent Marks\n");
    printf("----------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
}

double calculate_average(int marks[], int count)
{
    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += marks[i];
    }

    return (double)sum / count;
}

int find_highest(int marks[], int count)
{
    int highest = marks[0];

    for (int i = 1; i < count; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

int main(void)
{
    int marks[MAX_STUDENTS] = {0};
    int count;
    int choice;
    int data_added = 0;

    printf("========================================\n");
    printf("        STUDENT MANAGEMENT SYSTEM       \n");
    printf("========================================\n");

    printf("Enter number of students (1-%d): ", MAX_STUDENTS);
    scanf("%d", &count);

    if (count < 1 || count > MAX_STUDENTS)
    {
        printf("Invalid number of students.\n");
        return 0;
    }

    while (1)
    {
        display_menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                add_marks(marks, count);
                data_added = 1;
                break;

            case 2:
                if (!data_added)
                {
                    printf("\nPlease add marks first.\n");
                }
                else
                {
                    display_marks(marks, count);
                }
                break;

            case 3:
                if (!data_added)
                {
                    printf("\nPlease add marks first.\n");
                }
                else
                {
                    printf("\nAverage Marks: %.2f\n",
                           calculate_average(marks, count));
                }
                break;

            case 4:
                if (!data_added)
                {
                    printf("\nPlease add marks first.\n");
                }
                else
                {
                    printf("\nHighest Marks: %d\n",
                           find_highest(marks, count));
                }
                break;

            case 5:
                printf("\nExiting Student Management System...\n");
                return 0;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
}