#include <stdio.h>

int main(void)
{
    short int small_number = 100;
    long int large_number = 100000L;
    long long int very_large_number = 9000000000LL;

    printf("Short: %hd\n", small_number);
    printf("Long: %ld\n", large_number);
    printf("Long Long: %lld\n", very_large_number);

    return 0;
}