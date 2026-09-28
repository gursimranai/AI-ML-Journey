#include <iostream>

int main() {

    int number = 10;
    int doubleNumber = number * 2;
    int tripleNumber = number * 3;

    std::cout << "Number: " << number << '\n';
    std::cout << "Double: " << doubleNumber << '\n';
    std::cout << "Triple: " << tripleNumber << '\n';

    if (number > 0) {
        std::cout << "The number is positive.\n";
    }

    return 0;
}