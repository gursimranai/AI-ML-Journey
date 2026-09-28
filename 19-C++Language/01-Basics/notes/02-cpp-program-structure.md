# 🧱 C++ Program Structure

> Understanding the anatomy of a C++ program and the role of each component.

---

## 1. Basic C++ Program

A minimal C++ program can look like this:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

Output:

```text
Hello, World!
```

Although this program is small, it contains several important language and library concepts.

---

## 2. Anatomy of a C++ Program

```text
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

Conceptually:

```text
┌──────────────────────────────┐
│ #include <iostream>          │
│                              │
│ Header / Preprocessor        │
├──────────────────────────────┤
│ int main()                   │
│ {                            │
│     Program Statements       │
│                              │
│     return 0;                │
│ }                            │
└──────────────────────────────┘
```

---

# 3. Preprocessor Directive

```cpp
#include <iostream>
```

`#include` is a preprocessor directive.

It tells the preprocessor to make the declarations from the specified header available to the source file.

Here:

```cpp
#include <iostream>
```

provides facilities associated with standard input and output streams, including `std::cout`.

---

## 4. Header Files

Headers provide declarations and interfaces that allow programs to use library functionality.

Examples:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
```

Different headers provide different facilities.

```text
Header
  │
  ├── <iostream>  → Input / Output
  ├── <string>    → std::string
  ├── <vector>    → std::vector
  ├── <algorithm> → Standard algorithms
  └── <cmath>     → Mathematical functions
```

---

# 5. The `main()` Function

Every hosted C++ program has a designated starting point: the `main()` function.

Example:

```cpp
int main() {
    return 0;
}
```

The operating system starts the program, and execution enters `main()`.

---

## 6. Return Type of `main()`

The standard form is:

```cpp
int main()
```

The `int` indicates that `main()` returns an integer status to the environment.

Example:

```cpp
int main() {
    return 0;
}
```

A return value of `0` conventionally indicates successful completion.

---

# 7. Curly Braces

Curly braces define a block of code.

```cpp
int main() {
    // Code inside the block
}
```

Everything between:

```text
{
    ...
}
```

belongs to that block.

Braces are heavily used throughout C++:

```cpp
if (condition) {
    // block
}

for (...) {
    // block
}

class Student {
    // class definition
};
```

---

# 8. Statements

A statement represents an instruction.

Example:

```cpp
std::cout << "Hello";
```

Another:

```cpp
return 0;
```

Most C++ statements end with a semicolon:

```cpp
statement;
```

Example:

```cpp
int age = 18;
age = 19;
return 0;
```

---

# 9. Expressions

An expression is a sequence of operators and operands that produces a value or otherwise participates in computation.

Example:

```cpp
10 + 20
```

produces:

```text
30
```

Example:

```cpp
int result = 10 + 20;
```

Here:

```text
10 + 20
   │
   ▼
Expression
   │
   ▼
result = 10 + 20;
   │
   ▼
Statement
```

---

# 10. Namespace

The C++ Standard Library primarily uses the `std` namespace.

Example:

```cpp
std::cout
```

Here:

```text
std
 │
 └── namespace

cout
 │
 └── name inside the namespace
```

Using `std::` explicitly makes the origin of the name clear.

---

# 11. Output Statement

```cpp
std::cout << "Hello, World!";
```

`std::cout` represents the standard output stream.

The insertion operator:

```cpp
<<
```

sends data to the output stream.

Example:

```cpp
std::cout << "Hello";
std::cout << 100;
```

Multiple values can be chained:

```cpp
std::cout << "Age: " << 18;
```

Detailed input/output concepts are covered separately.

---

# 12. Return Statement

```cpp
return 0;
```

The `return` statement exits the current function and provides a value to its caller.

Inside `main()`:

```cpp
return 0;
```

indicates successful completion to the environment.

---

# 13. Complete Program Breakdown

Consider:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

Breakdown:

| Component         | Purpose                      |
| ----------------- | ---------------------------- |
| `#include`        | Preprocessor directive       |
| `<iostream>`      | Standard input/output header |
| `int`             | Return type of `main()`      |
| `main()`          | Program entry point          |
| `{ }`             | Function body                |
| `std::cout`       | Standard output stream       |
| `<<`              | Stream insertion operator    |
| `"Hello, World!"` | String literal               |
| `return`          | Returns from function        |
| `0`               | Success status               |
| `;`               | Ends a statement             |

---

# 14. Program Structure Diagram

```text
C++ Program
│
├── Preprocessor Directives
│
├── Declarations / Definitions
│
├── main()
│   │
│   ├── Statements
│   ├── Expressions
│   └── Return
│
└── Other Functions / Classes / Objects
```

A larger program may contain:

```text
Program
│
├── Headers
├── Macros / Preprocessor Directives
├── Namespace Declarations
├── Constants
├── Classes
├── Functions
├── Global Objects
└── main()
```

---

# 15. Multiple Functions

A C++ program can contain multiple functions.

```cpp
#include <iostream>

void greet() {
    std::cout << "Hello!";
}

int main() {
    greet();
    return 0;
}
```

Structure:

```text
Program
│
├── greet()
│
└── main()
      │
      └── calls greet()
```

---

# 16. Whitespace and Formatting

C++ generally ignores extra whitespace between tokens.

These are equivalent:

```cpp
int x = 10;
```

and:

```cpp
int    x    =    10;
```

However, consistent formatting is important for readability.

Preferred:

```cpp
int main() {
    std::cout << "Hello";
    return 0;
}
```

---

# 17. Case Sensitivity

C++ is case-sensitive.

These are different identifiers:

```cpp
age
Age
AGE
```

Similarly:

```cpp
main
Main
MAIN
```

are different names.

---

# 18. Comments in Program Structure

Comments can document different sections.

```cpp
#include <iostream>

// Program entry point
int main() {

    // Display message
    std::cout << "Hello";

    return 0;
}
```

Comments are ignored during program execution.

---

# 19. A Slightly Larger Example

```cpp
#include <iostream>

void displayMessage() {
    std::cout << "Learning C++";
}

int main() {
    displayMessage();

    return 0;
}
```

Program flow:

```text
Program Starts
      │
      ▼
   main()
      │
      ▼
displayMessage()
      │
      ▼
Print "Learning C++"
      │
      ▼
return 0
      │
      ▼
Program Ends
```

---

# 20. Common Errors

### Missing semicolon

Incorrect:

```cpp
std::cout << "Hello"
```

Correct:

```cpp
std::cout << "Hello";
```

### Missing braces

Incorrect:

```cpp
int main()
    std::cout << "Hello";
```

Correct:

```cpp
int main() {
    std::cout << "Hello";
}
```

### Missing header

If using `std::cout`, the required declarations must be available.

```cpp
#include <iostream>
```

### Incorrect namespace qualification

```cpp
cout << "Hello";
```

Use:

```cpp
std::cout << "Hello";
```

---

# 21. Key Takeaways

* A C++ program is composed of language constructs, declarations, definitions, and statements.
* `main()` is the entry point of a hosted C++ program.
* Header files provide declarations and library interfaces.
* `#include` is processed before compilation.
* Curly braces define blocks.
* Most statements end with `;`.
* `std::cout` is used for standard output.
* `return 0` from `main()` conventionally indicates successful completion.
* C++ is case-sensitive.
* Proper structure and formatting improve readability and maintainability.
