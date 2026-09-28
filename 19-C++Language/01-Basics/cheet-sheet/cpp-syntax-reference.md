# ⚡ C++ Syntax Reference

> A compact syntax lookup sheet for writing and reading basic C++ programs.

---

# 1. 🏗️ Basic Program

```cpp
#include <iostream>

int main() {

    // Code goes here

    return 0;
}
```

---

# 2. 📦 Header Files

### Standard header

```cpp
#include <iostream>
```

### Other common headers

```cpp
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
```

### Local header

```cpp
#include "myheader.h"
```

---

# 3. 💬 Comments

### Single-line

```cpp
// Comment
```

### Multi-line

```cpp
/*
   Comment
   Comment
*/
```

---

# 4. 📊 Variables

### Declaration

```cpp
int age;
```

### Initialization

```cpp
int age = 18;
```

### Assignment

```cpp
age = 20;
```

### Multiple variables

```cpp
int a = 10;
int b = 20;
int c = 30;
```

---

# 5. 🔢 Basic Data Types

```cpp
int age = 18;

float temperature = 36.5f;

double pi = 3.14159;

char grade = 'A';

bool passed = true;
```

Quick syntax:

```text
int      → whole number
float    → decimal
double   → higher-precision decimal
char     → single character
bool     → true / false
```

---

# 6. 📝 String Syntax

Using `std::string`:

```cpp
#include <string>

std::string name = "Gursimran";
```

String literals:

```cpp
"Hello"
"C++"
"AI and ML"
```

Character literals:

```cpp
'A'
'7'
'\n'
```

Remember:

```text
'A'       → char
"Hello"   → string literal
```

---

# 7. 📤 Output

### Basic

```cpp
std::cout << "Hello";
```

### Variable

```cpp
std::cout << age;
```

### Text + variable

```cpp
std::cout << "Age: " << age;
```

### Multiple values

```cpp
std::cout << "Name: " << name << ", Age: " << age;
```

---

# 8. ↩️ New Lines

### Escape sequence

```cpp
std::cout << "Hello\n";
```

### Character literal

```cpp
std::cout << "Hello" << '\n';
```

### Multiple lines

```cpp
std::cout << "Line 1\n";
std::cout << "Line 2\n";
```

---

# 9. ➕ Arithmetic Operators

```cpp
a + b      // Addition
a - b      // Subtraction
a * b      // Multiplication
a / b      // Division
a % b      // Remainder
```

Example:

```cpp
int a = 10;
int b = 3;

std::cout << a + b << '\n';
std::cout << a - b << '\n';
std::cout << a * b << '\n';
std::cout << a / b << '\n';
std::cout << a % b << '\n';
```

---

# 10. ⚖️ Comparison Operators

```cpp
a == b     // Equal
a != b     // Not equal
a > b      // Greater
a < b      // Less
a >= b     // Greater/equal
a <= b     // Less/equal
```

Example:

```cpp
bool result = age >= 18;
```

---

# 11. 🔄 Assignment Operators

```cpp
x = 10;

x += 5;
x -= 5;
x *= 5;
x /= 5;
x %= 5;
```

Equivalent:

```cpp
x += 5;
```

means:

```cpp
x = x + 5;
```

---

# 12. 🔢 Increment and Decrement

```cpp
x++;
x--;

++x;
--x;
```

Basic meaning:

```text
x++ → increase after expression evaluation
++x → increase before expression evaluation

x-- → decrease after expression evaluation
--x → decrease before expression evaluation
```

---

# 13. 🧮 Expressions

### Arithmetic

```cpp
a + b
a * b
x / 2
```

### Comparison

```cpp
age >= 18
a == b
```

### Assignment

```cpp
x = a + b;
```

### Function call

```cpp
std::sqrt(25.0);
```

---

# 14. 📝 Statements

### Declaration

```cpp
int age = 18;
```

### Assignment

```cpp
age = 20;
```

### Expression statement

```cpp
a + b;
```

### Output

```cpp
std::cout << age;
```

### Return

```cpp
return 0;
```

---

# 15. 🚦 `if` Statement

```cpp
if (condition) {

    // Code

}
```

Example:

```cpp
if (age >= 18) {

    std::cout << "Adult\n";

}
```

---

# 16. 🔀 `if-else`

```cpp
if (condition) {

    // True

} else {

    // False

}
```

Example:

```cpp
if (number > 0) {

    std::cout << "Positive\n";

} else {

    std::cout << "Not positive\n";

}
```

---

# 17. 🌐 Namespace Syntax

### Define

```cpp
namespace College {

    int students = 1000;

}
```

### Access

```cpp
College::students
```

### Standard library

```cpp
std::cout
std::string
std::sqrt
```

---

# 18. 🏷️ Namespace Alias

```cpp
namespace calc = calculation;
```

Then:

```cpp
calc::add();
```

Useful when a namespace has a long name.

---

# 19. 🧱 Scope Resolution Operator

```cpp
::
```

Examples:

```cpp
std::cout
College::students
std::sqrt
```

Pattern:

```text
namespace :: name
```

---

# 20. 🔤 Identifiers

Valid:

```cpp
age
studentCount
student_1
_value
totalMarks
```

Invalid:

```cpp
2students
student name
class
my-value
```

Rules:

```text
✓ Letters
✓ Digits after the first character
✓ Underscore
✗ Cannot start with a digit
✗ No spaces
✗ Cannot use keywords
```

---

# 21. 🔑 Common Keywords

```cpp
int
float
double
char
bool
void
if
else
for
while
return
class
struct
public
private
const
namespace
using
```

---

# 22. 🔚 Punctuation

| Symbol | Common use                 |
| ------ | -------------------------- |
| `;`    | Statement termination      |
| `{ }`  | Block                      |
| `( )`  | Function/condition         |
| `[ ]`  | Array/indexing             |
| `< >`  | Header inclusion/templates |
| `"`    | String literal             |
| `' '`  | Character literal          |
| `::`   | Scope resolution           |
| `,`    | Separates items            |

---

# 23. 🔀 Common Escape Sequences

| Escape | Meaning        |
| ------ | -------------- |
| `\n`   | New line       |
| `\t`   | Tab            |
| `\\`   | Backslash      |
| `\"`   | Double quote   |
| `\'`   | Single quote   |
| `\0`   | Null character |

Example:

```cpp
std::cout << "Name:\tGursimran\n";
```

---

# 24. 🧮 Operator Precedence — Basic

A simplified order to remember:

```text
()
 ↓
* / %
 ↓
+ -
 ↓
< > <= >=
 ↓
== !=
 ↓
&&
 ↓
||
 ↓
= 
```

Example:

```cpp
int result = 2 + 3 * 4;
```

Multiplication happens first:

```text
3 * 4 = 12
2 + 12 = 14
```

Use parentheses when clarity matters:

```cpp
int result = (2 + 3) * 4;
```

---

# 25. 🔢 Type Conversion

### Implicit conversion

```cpp
int x = 10;
double y = x;
```

### Explicit conversion

```cpp
double x = 10.5;

int y = static_cast<int>(x);
```

Result:

```text
10.5 → 10
```

---

# 26. 📐 `const`

Use `const` when a value should not be modified.

```cpp
const double PI = 3.14159;
```

This is invalid:

```cpp
PI = 3.14;
```

---

# 27. 📏 `sizeof`

Returns the size of a type or object in bytes.

```cpp
sizeof(int)
```

Example:

```cpp
int age = 18;

std::cout << sizeof(age);
```

The exact size of fundamental types can depend on the implementation.

---

# 28. 🔬 Math Functions

Header:

```cpp
#include <cmath>
```

Common functions:

```cpp
std::sqrt(25.0);
std::pow(2.0, 3.0);
std::abs(-10);
std::floor(3.8);
std::ceil(3.2);
```

Example:

```cpp
double result = std::sqrt(25.0);

std::cout << result;
```

---

# 29. 🚪 `main()` Syntax

### Basic

```cpp
int main() {

    return 0;
}
```

### With command-line arguments

```cpp
int main(int argc, char* argv[]) {

    return 0;
}
```

---

# 30. 🛠️ Compilation

Using G++:

```bash
g++ main.cpp -o main
```

Run on Linux/macOS:

```bash
./main
```

Run on Windows:

```bash
main.exe
```

Compile with a modern standard:

```bash
g++ -std=c++17 main.cpp -o main
```

---

# 31. 🐛 Common Syntax Mistakes

### Missing semicolon

❌

```cpp
int age = 18
```

✓

```cpp
int age = 18;
```

### Wrong output syntax

❌

```cpp
cout << "Hello";
```

✓

```cpp
std::cout << "Hello";
```

### Wrong header

❌

```cpp
#include iostream
```

✓

```cpp
#include <iostream>
```

### Wrong character syntax

❌

```cpp
char grade = "A";
```

✓

```cpp
char grade = 'A';
```

### Wrong string syntax

❌

```cpp
std::cout << 'Hello';
```

✓

```cpp
std::cout << "Hello";
```

---

# 32. ⚡ Complete Syntax Template

```cpp
#include <iostream>

int main() {

    // Variables
    int firstNumber = 10;
    int secondNumber = 20;

    // Expression
    int sum = firstNumber + secondNumber;

    // Output
    std::cout << "First Number: " << firstNumber << '\n';
    std::cout << "Second Number: " << secondNumber << '\n';
    std::cout << "Sum: " << sum << '\n';

    // Condition
    if (sum > 0) {
        std::cout << "Sum is positive.\n";
    }

    return 0;
}
```

---

# 🧠 One-Page Syntax Memory Map

```text
                    C++ SYNTAX
                        │
        ┌───────────────┼────────────────┐
        ↓               ↓                ↓
     Headers         main()          Comments
        │               │                │
    #include        { code }          //  or /*
        │               │                │
        └───────────────┼────────────────┘
                        ↓
                    Variables
                        │
                  int x = 10;
                        │
                        ↓
                    Operators
                        │
              + - * / % == > <
                        │
                        ↓
                   Expressions
                        │
                        ↓
                    Statements
                        │
                  statement;
                        │
                        ↓
                     Output
                        │
                  std::cout <<
                        │
                        ↓
                    return 0;
```

---

# 🚀 Essential Syntax to Memorize

```cpp
#include <iostream>

int main() {

    int number = 10;

    std::cout << number << '\n';

    return 0;
}
```

If you understand this structure, you already have the foundation needed to start building larger C++ programs.
