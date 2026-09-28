#include <iostream>

int main() {

    // Variable declaration
    int age = 18;

    // Expression
    int nextYearAge = age + 1;

    // Conditional statement
    if (age >= 18) {
        std::cout << "Age: " << age << '\n';
        std::cout << "Next year: " << nextYearAge << '\n';
        std::cout << "Status: Adult\n";
    }

    return 0;
}