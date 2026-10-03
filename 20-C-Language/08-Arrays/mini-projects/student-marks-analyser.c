#include <stdio.h>

#define MAX_SUBJECTS 5

void input_marks(int marks[], int size)
{
    printf("\nEnter marks for %d subjects:\n", size);
    printf("----------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        do
        {
            printf("Subject %d: ", i + 1);
            scanf("%d", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100)
            {
                printf("Marks must be between 0 and 100.\n");
            }

        } while (marks[i] < 0 || marks[i] > 100);
    }
}

void display_marks(const int marks[], int size)
{
    printf("\nStudent Marks\n");
    printf("----------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
}

int calculate_total(const int marks[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total;
}

double calculate_average(const int marks[], int size)
{
    int total = calculate_total(marks, size);

    return (double)total / size;
}

int find_highest(const int marks[], int size)
{
    int highest = marks[0];

    for (int i = 1; i < size; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

int find_lowest(const int marks[], int size)
{
    int lowest = marks[0];

    for (int i = 1; i < size; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

int count_passed(const int marks[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] >= 40)
        {
            count++;
        }
    }

    return count;
}

int count_failed(const int marks[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] < 40)
        {
            count++;
        }
    }

    return count;
}

char calculate_grade(double average)
{
    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else if (average >= 70)
    {
        return 'C';
    }
    else if (average >= 60)
    {
        return 'D';
    }
    else if (average >= 40)
    {
        return 'E';
    }

    return 'F';
}

int main(void)
{
    int marks[MAX_SUBJECTS];

    printf("========================================\n");
    printf("        STUDENT MARKS ANALYZER          \n");
    printf("========================================\n");

    input_marks(marks, MAX_SUBJECTS);

    int total = calculate_total(marks, MAX_SUBJECTS);
    double average = calculate_average(marks, MAX_SUBJECTS);
    int highest = find_highest(marks, MAX_SUBJECTS);
    int lowest = find_lowest(marks, MAX_SUBJECTS);
    int passed = count_passed(marks, MAX_SUBJECTS);
    int failed = count_failed(marks, MAX_SUBJECTS);
    char grade = calculate_grade(average);

    display_marks(marks, MAX_SUBJECTS);

    printf("\n========================================\n");
    printf("             ANALYSIS                  \n");
    printf("========================================\n");

    printf("Total Marks   : %d / %d\n",
           total, MAX_SUBJECTS * 100);

    printf("Average       : %.2f\n", average);
    printf("Highest Marks : %d\n", highest);
    printf("Lowest Marks  : %d\n", lowest);
    printf("Passed        : %d\n", passed);
    printf("Failed        : %d\n", failed);
    printf("Grade         : %c\n", grade);

    printf("========================================\n");

    return 0;
}