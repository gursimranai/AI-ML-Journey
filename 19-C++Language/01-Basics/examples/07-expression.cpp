#include <iostream>

int main() {

    int a = 10;
    int b = 20;

    // Arithmetic expression
    int sum = a + b;

    // Multiplication expression
    int product = a * b;

    // Comparison expression
    bool isGreater = b > a;

    std::cout << "Sum: " << sum << '\n';
    std::cout << "Product: " << product << '\n';
    std::cout << "Is b greater than a? " << isGreater << '\n';

    return 0;
}