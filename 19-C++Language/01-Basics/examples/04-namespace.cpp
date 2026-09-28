#include <iostream>
using namespace std;  // With this line we dont need to mention that we use cout from std namespace

// User-defined namespace
namespace College {
    int students = 1000;
}

int main() {

    // Accessing a namespace member using ::
    cout << "Students: " << College::students << '\n';

    return 0;
}