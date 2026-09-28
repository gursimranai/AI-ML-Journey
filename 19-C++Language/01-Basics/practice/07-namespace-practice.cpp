#include <iostream>

namespace College {
    int students = 1000;
}

namespace Course {
    int duration = 4;
}

int main() {

    std::cout << "Students: " << College::students << '\n';
    std::cout << "Course Duration: " << Course::duration << " years\n";

    return 0;
}