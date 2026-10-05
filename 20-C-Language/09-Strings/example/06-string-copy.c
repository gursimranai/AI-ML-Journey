#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Machine Learning";
    char destination[50];

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}