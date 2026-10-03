#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};

    size_t total_bytes = sizeof(numbers);
    size_t element_size = sizeof(numbers[0]);
    size_t length = total_bytes / element_size;

    printf("Array Length\n");
    printf("========================\n");

    printf("Total array size : %zu bytes\n", total_bytes);
    printf("Element size     : %zu bytes\n", element_size);
    printf("Number of elements: %zu\n", length);

    return 0;
}