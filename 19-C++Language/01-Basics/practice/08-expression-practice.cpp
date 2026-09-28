#include <iostream>

int main() {

    int a = 15;
    int b = 5;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;

    bool greater = a > b;
    bool equal = a == b;

    std::cout << "Addition: " << addition << '\n';
    std::cout << "Subtraction: " << subtraction << '\n';
    std::cout << "Multiplication: " << multiplication << '\n';
    std::cout << "Division: " << division << '\n';

    std::cout << "Is A greater than B? " << greater << '\n';
    std::cout << "Are A and B equal? " << equal << '\n';

    return 0;
}