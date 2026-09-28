#include <iostream>
#include <cmath>

int main() {

    double number = 25.0;

    // sqrt() is provided by <cmath>.
    double result = std::sqrt(number);

    std::cout << "Square root of " << number << ": " << result << '\n';

    return 0;
}