# ⚡ C++ Basics Cheat Sheet

> A compact revision guide for the fundamental concepts covered in `01-Basics`.

---

## 1. 🧩 Basic C++ Program

```cpp
#include <iostream>

int main() {

    std::cout << "Hello, World!\n";

    return 0;
}
```

### Breakdown

| Part                  | Meaning                             |
| --------------------- | ----------------------------------- |
| `#include <iostream>` | Includes input/output functionality |
| `int main()`          | Program entry point                 |
| `{ }`                 | Defines a block                     |
| `std::cout`           | Prints output                       |
| `'\n'`                | New line                            |
| `return 0;`           | Successful program termination      |

---

# 2. 🏗️ Program Structure

```text
Preprocessor Directives
        ↓
Header Files
        ↓
main() Function
        ↓
Statements
        ↓
Expressions
        ↓
Output / Processing
        ↓
return 0
```

Example:

```cpp
#include <iostream>

int main() {

    int a = 10;
    int b = 20;

    int sum = a + b;

    std::cout << sum << '\n';

    return 0;
}
```

---

# 3. 💬 Comments

### Single-line

```cpp
// This is a comment
```

### Multi-line

```cpp
/*
   This is a
   multi-line comment.
*/
```

### Remember

```text
Comments
   ↓
Ignored by compiler
   ↓
Used to explain code
```

Good comments explain **why**, not obvious **what**.

---

# 4. 🔤 C++ Tokens

A token is a basic unit recognized by the compiler.

```text
Tokens
├── Keywords
├── Identifiers
├── Literals
├── Operators
└── Punctuators
```

Example:

```cpp
int age = 18;
```

Tokens:

```text
int      → Keyword
age      → Identifier
=        → Operator
18       → Literal
;        → Punctuator
```

---

# 5. 🔑 Keywords

Keywords are reserved words with predefined meanings.

Examples:

```cpp
int
double
char
bool
if
else
for
while
return
class
public
private
namespace
const
void
```

You cannot normally use a keyword as an identifier.

❌ Invalid:

```cpp
int class = 10;
```

---

# 6. 🏷️ Identifiers

Identifiers are names given to program elements.

Examples:

```cpp
int age;
int studentCount;
double averageMarks;
```

### Rules

```text
✓ Letters allowed
✓ Digits allowed
✓ Underscore allowed
✗ Cannot start with a digit
✗ Cannot contain spaces
✗ Cannot be a keyword
✓ Case-sensitive
```

Valid:

```cpp
age
studentCount
_marks
value2
```

Invalid:

```cpp
2value
student name
class
```

### Naming Convention

Prefer meaningful names:

```cpp
int studentCount;
double averageMarks;
```

instead of:

```cpp
int x;
double y;
```

---

# 7. 🔢 Literals

A literal is a fixed value written directly in source code.

### Integer

```cpp
10
-25
1000
```

### Floating-point

```cpp
3.14
-2.5
10.0
```

### Character

```cpp
'A'
'7'
'\n'
```

### String

```cpp
"Hello"
"C++"
```

### Boolean

```cpp
true
false
```

Example:

```cpp
int age = 18;
double pi = 3.14;
char grade = 'A';
bool passed = true;
```

---

# 8. 📦 Variables

A variable stores a value in memory.

```cpp
int age = 18;
```

Structure:

```text
Data Type → Variable Name → Value
    ↓             ↓           ↓
   int           age         18
```

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

---

# 9. 📊 Common Basic Data Types

| Type     | Purpose                  | Example           |
| -------- | ------------------------ | ----------------- |
| `int`    | Integer                  | `10`              |
| `float`  | Decimal                  | `3.14f`           |
| `double` | Higher-precision decimal | `3.14`            |
| `char`   | Single character         | `'A'`             |
| `bool`   | True/false               | `true`            |
| `void`   | No value                 | `void function()` |

Example:

```cpp
int age = 18;
float temperature = 36.5f;
double pi = 3.14159;
char grade = 'A';
bool active = true;
```

---

# 10. ➕ Operators

## Arithmetic

| Operator | Meaning        |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |
| `%`      | Remainder      |

Example:

```cpp
int result = 10 + 5;
```

---

## Comparison

| Operator | Meaning       |
| -------- | ------------- |
| `==`     | Equal         |
| `!=`     | Not equal     |
| `>`      | Greater than  |
| `<`      | Less than     |
| `>=`     | Greater/equal |
| `<=`     | Less/equal    |

Example:

```cpp
bool result = 10 > 5;
```

---

## Assignment

```cpp
=
+=
-=
*=
/=
%=
```

Example:

```cpp
int x = 10;

x += 5;   // 15
```

---

# 11. 🧮 Expressions

An expression produces a value.

```cpp
a + b
x * 10
age >= 18
```

Example:

```cpp
int a = 10;
int b = 20;

int sum = a + b;
```

Here:

```text
a + b
 ↓
Expression
 ↓
30
```

---

# 12. 📝 Statements

A statement performs an action.

```cpp
int age = 18;
```

```cpp
std::cout << age;
```

```cpp
return 0;
```

Most simple C++ statements end with:

```cpp
;
```

### Important

```text
Expression → produces a value

Statement → performs an action
```

An expression can also be part of a statement:

```cpp
int sum = a + b;
```

---

# 13. 🚪 `main()`

Execution of a hosted C++ program begins in `main()`.

Standard form:

```cpp
int main() {

    // Program code

    return 0;
}
```

### Command-line form

```cpp
int main(int argc, char* argv[]) {

    return 0;
}
```

For beginner programs, use:

```cpp
int main()
```

---

# 14. 📤 Output with `std::cout`

Header:

```cpp
#include <iostream>
```

Basic output:

```cpp
std::cout << "Hello";
```

Multiple values:

```cpp
std::cout << "Age: " << age;
```

New line:

```cpp
std::cout << "Hello\n";
```

or:

```cpp
std::cout << "Hello" << '\n';
```

---

# 15. 📦 Headers

Headers provide declarations and functionality.

Examples:

```cpp
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
```

Example:

```cpp
#include <cmath>

double result = std::sqrt(25.0);
```

### Standard Header

```cpp
#include <iostream>
```

### Local Header

```cpp
#include "myheader.h"
```

---

# 16. 🌐 Namespaces

A namespace groups related names and helps prevent naming conflicts.

```cpp
namespace College {

    int students = 1000;

}
```

Access:

```cpp
College::students
```

### Standard namespace

```cpp
std::cout
std::sqrt
std::string
```

The `::` operator is the **scope resolution operator**.

---

# 17. 🧱 Braces, Parentheses and Brackets

### Curly braces

```cpp
{
}
```

Used for blocks:

```cpp
int main() {

}
```

### Parentheses

```cpp
(
)
```

Used with functions and conditions:

```cpp
main()
```

```cpp
if (age >= 18)
```

### Square brackets

```cpp
[
]
```

Used with arrays and indexing:

```cpp
numbers[0]
```

---

# 18. 🔚 Semicolon

Most C++ statements end with `;`.

```cpp
int age = 18;

std::cout << age;

return 0;
```

Missing semicolon:

```cpp
int age = 18
```

can cause a syntax error.

---

# 19. 🔠 C++ Is Case-Sensitive

These are different identifiers:

```cpp
age
Age
AGE
```

Likewise:

```cpp
std::cout
```

is correct, while:

```cpp
std::Cout
```

is different and invalid because the standard name is case-sensitive.

---

# 20. 📐 Whitespace and Indentation

Whitespace usually does not change the meaning of C++ code, but indentation improves readability.

Good:

```cpp
int main() {

    int age = 18;

    std::cout << age;

    return 0;
}
```

Avoid:

```cpp
int main(){int age=18;std::cout<<age;return 0;}
```

Both can represent valid code, but the first is much easier to read.

---

# 21. 🔄 Compilation Process

Basic flow:

```text
C++ Source Code
      ↓
Preprocessing
      ↓
Compilation
      ↓
Object Code
      ↓
Linking
      ↓
Executable
      ↓
Run
```

Typical GCC/G++ command:

```bash
g++ main.cpp -o main
```

Run:

```bash
./main
```

On Windows:

```bash
main.exe
```

---

# 22. ⚠️ Common Beginner Errors

### Missing header

```cpp
std::cout << "Hello";
```

without:

```cpp
#include <iostream>
```

---

### Missing `std::`

```cpp
cout << "Hello";
```

Use:

```cpp
std::cout << "Hello";
```

---

### Missing semicolon

```cpp
int age = 18
```

Correct:

```cpp
int age = 18;
```

---

### Wrong capitalization

```cpp
Std::cout
```

Correct:

```cpp
std::cout
```

---

### Using `"` for a character

❌

```cpp
char grade = "A";
```

✓

```cpp
char grade = 'A';
```

---

### Using `' '` for a string

❌

```cpp
std::cout << 'Hello';
```

✓

```cpp
std::cout << "Hello";
```

---

# 23. 🧠 Syntax vs Logic Errors

### Syntax Error

The code violates C++ grammar.

```cpp
int age = 18
```

Missing `;`.

### Logic Error

The program runs but produces the wrong result.

```cpp
int a = 10;
int b = 20;

int result = a - b;   // Wrong if addition was intended
```

---

# 24. 🤖 C++ Basics in AI/ML

C++ fundamentals become useful later in:

```text
C++
 ↓
Data Structures
 ↓
Algorithms
 ↓
Memory Management
 ↓
Performance Optimization
 ↓
AI/ML Systems
 ↓
High-Performance Computing
```

C++ is commonly encountered in performance-sensitive areas such as:

* ML frameworks
* Computer vision systems
* Robotics
* Game/graphics systems
* Numerical computing
* Inference engines
* High-performance libraries

---

# 25. 🎯 Interview Quick Points

### Q: Where does a C++ program start?

`main()`.

### Q: What does `#include` do?

It requests inclusion of a header's contents during preprocessing.

### Q: What does `std::` mean?

It refers to a name in the standard namespace.

### Q: What does `::` represent?

Scope resolution operator.

### Q: Why is `;` used?

It terminates many C++ statements.

### Q: Is C++ case-sensitive?

Yes.

### Q: What is an identifier?

A programmer-defined name for an entity such as a variable or function.

### Q: What is a literal?

A fixed value written directly in source code.

### Q: What does `return 0;` mean in `main()`?

It returns zero to indicate successful termination of the program.

---

# ⚡ Ultra-Quick Revision

```text
#include <iostream>     → Header
int main()              → Entry point
{ }                     → Block
std::cout               → Output
<<                      → Stream insertion
'\n'                    → New line
;                       → Statement terminator
//                      → Single-line comment
/* */                   → Multi-line comment
std::                   → Standard namespace
::                      → Scope resolution
int                     → Integer
double                  → Decimal
char                    → Character
bool                    → Boolean
return 0;               → Successful termination
```
