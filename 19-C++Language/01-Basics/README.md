# ⚡ C++ Basics

> A structured introduction to the **fundamental syntax, structure, and language elements of C++**.

This section establishes the foundation required to read, write, compile, execute, and understand basic C++ programs.

---

## 🎯 Purpose

The purpose of this section is to understand the fundamental building blocks of the C++ language before moving into variables, data types, operators, control flow, functions, OOP, STL, and DSA.

The focus is on understanding **how C++ programs are structured and how the language works at a fundamental level**.

---

## 📚 Topics Covered

| #  | Topic                    | Description                                         |
| -- | ------------------------ | --------------------------------------------------- |
| 01 | Introduction to C++      | C++, its characteristics, history, and applications |
| 02 | C++ Program Structure    | Anatomy and structure of a C++ program              |
| 03 | Compilation & Execution  | Source code, compiler, linker, and executable       |
| 04 | Comments                 | Single-line and multi-line comments                 |
| 05 | Tokens                   | Fundamental elements of a C++ program               |
| 06 | Keywords & Identifiers   | Reserved words and naming rules                     |
| 07 | Namespaces               | Scope management and namespace usage                |
| 08 | `main()` Function        | Program entry point and execution                   |
| 09 | Statements & Expressions | Basic program instructions and expressions          |
| 10 | Header Files             | Standard and user-defined header concepts           |
| 11 | Basic Syntax             | Fundamental syntax and formatting rules             |

---

## 📂 Folder Structure

```text
01-Basics/
│
├── README.md
│
├── notes/
│   ├── 01-introduction-to-cpp.md
│   ├── 02-cpp-program-structure.md
│   ├── 03-compilation-and-execution.md
│   ├── 04-comments.md
│   ├── 05-tokens.md
│   ├── 06-keywords-and-identifiers.md
│   ├── 07-namespaces.md
│   ├── 08-main-function.md
│   ├── 09-statements-and-expressions.md
│   ├── 10-header-files.md
│   └── 11-basic-syntax.md
│
├── examples/
│   ├── 01_hello_world.cpp
│   ├── 02_comments.cpp
│   ├── 03_program_structure.cpp
│   ├── 04_namespace.cpp
│   ├── 05_main_function.cpp
│   ├── 06_statements.cpp
│   ├── 07_expressions.cpp
│   ├── 08_header_file.cpp
│   ├── 09_multiple_statements.cpp
│   ├── 10_newline.cpp
│   └── 11_basic_syntax.cpp
│
├── practice/
│   ├── 01_print_hello.cpp
│   ├── 02_print_personal_information.cpp
│   ├── 03_print_multiple_lines.cpp
│   ├── 04_print_ascii_art.cpp
│   ├── 05_use_multiple_statements.cpp
│   ├── 06_experiment_with_comments.cpp
│   ├── 07_namespace_practice.cpp
│   ├── 08_expression_practice.cpp
│   ├── 09_program_structure_practice.cpp
│   └── 10_basic_syntax_challenge.cpp
│
├── output/
│   └── README.md
│
└── cheat-sheet/
    ├── cpp-basics-cheat-sheet.md
    └── cpp-syntax-reference.md
```

---

## 🧠 Core Concepts

### 1. Introduction to C++

C++ is a general-purpose, compiled, multi-paradigm programming language designed for performance, flexibility, and control over system resources.

Key characteristics include:

* Compiled language
* Statically typed
* Object-oriented programming
* Generic programming
* Procedural programming
* Low-level memory control
* Standard Template Library (STL)
* High performance
* Cross-platform development

---

### 2. C++ Program Structure

A basic C++ program can be written as:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

Conceptually:

```text
#include <iostream>
        │
        ▼
Preprocessor Directive
        │
        ▼
int main()
        │
        ▼
Program Entry Point
        │
        ▼
Program Statements
        │
        ▼
return 0
```

---

### 3. Compilation & Execution

A C++ program goes through several stages before execution.

```text
Source Code
    │
    ▼
Preprocessing
    │
    ▼
Compilation
    │
    ▼
Object Code
    │
    ▼
Linking
    │
    ▼
Executable
    │
    ▼
Execution
```

Example compilation using GCC/G++:

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

---

### 4. Comments

Comments provide explanations inside source code and are ignored by the compiler.

#### Single-line comment

```cpp
// This is a single-line comment
```

#### Multi-line comment

```cpp
/*
   This is a
   multi-line comment
*/
```

---

### 5. Tokens

Tokens are the fundamental elements that make up a C++ program.

```text
Tokens
│
├── Keywords
├── Identifiers
├── Literals
├── Operators
├── Punctuators
└── Other language elements
```

Example:

```cpp
int age = 18;
```

```text
int     → Keyword
age     → Identifier
=       → Operator
18      → Literal
;       → Punctuator
```

---

### 6. Keywords & Identifiers

**Keywords** are reserved words with predefined meanings in C++.

Examples:

```cpp
int
class
return
if
else
while
for
public
private
```

**Identifiers** are names given to program elements such as variables, functions, classes, and objects.

Example:

```cpp
int studentAge;
```

```text
int         → Keyword
studentAge  → Identifier
```

Basic identifier rules:

* Cannot begin with a number
* Cannot contain spaces
* Cannot be a reserved keyword
* Can contain letters, digits, and `_`
* C++ is case-sensitive

---

### 7. Namespaces

Namespaces help organize code and prevent naming conflicts.

Example:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello";
    return 0;
}
```

The `std` namespace contains many components of the C++ Standard Library.

Examples:

```cpp
std::cout
std::cin
std::string
std::vector
```

---

### 8. `main()` Function

The `main()` function is the entry point of a standard C++ program.

```cpp
int main() {
    return 0;
}
```

The program begins execution from `main()`.

A common form using command-line arguments is:

```cpp
int main(int argc, char* argv[]) {
    return 0;
}
```

---

### 9. Statements & Expressions

A **statement** represents an instruction that performs an action.

Example:

```cpp
int result = 10 + 20;
```

An **expression** produces a value.

```text
10 + 20
   │
   ▼
Expression
   │
   ▼
int result = 10 + 20;
   │
   ▼
Statement
```

Statements commonly end with a semicolon:

```cpp
int x = 10;
x = x + 5;
```

---

### 10. Header Files

Header files provide declarations and interfaces that can be used by a program.

Example:

```cpp
#include <iostream>
```

Common standard headers include:

```text
<iostream>
<string>
<vector>
<cmath>
<algorithm>
<fstream>
```

The C++ Standard Library provides a large collection of reusable functionality through standard headers.

---

### 11. Basic Syntax

Important C++ syntax elements include:

* Semicolons `;`
* Curly braces `{ }`
* Parentheses `( )`
* Square brackets `[ ]`
* Identifiers
* Keywords
* Operators
* Literals
* Comments
* Whitespace
* Case sensitivity

Example:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, C++!";
    return 0;
}
```

---

# 💻 Examples

The `examples/` directory contains small, focused programs demonstrating individual concepts.

Each example is designed to:

* Demonstrate one concept
* Show correct syntax
* Provide executable code
* Make experimentation easy
* Serve as a future reference

Example naming follows a consistent numbering system:

```text
01_hello_world.cpp
02_comments.cpp
03_program_structure.cpp
...
```

---

# 🧩 Practice

The `practice/` directory contains exercises designed to reinforce the concepts covered in the notes and examples.

Practice focuses on:

* Writing basic programs
* Understanding syntax
* Experimenting with language features
* Identifying errors
* Modifying existing programs
* Building basic logical thinking

The difficulty gradually increases while remaining within the scope of C++ fundamentals.

---

# 📖 Notes Format

Each concept is documented using a consistent structure where applicable:

```text
Concept
   │
   ▼
Definition
   │
   ▼
Syntax
   │
   ▼
How It Works
   │
   ▼
Example
   │
   ▼
Output
   │
   ▼
Common Mistakes
   │
   ▼
C vs C++
   │
   ▼
AI/ML Relevance
   │
   ▼
Interview Points
```

This structure keeps the notes useful for both **learning and later revision**.

---

# ⚠️ Common Beginner Errors

Common issues addressed throughout this section include:

* Missing semicolons
* Incorrect braces
* Incorrect `main()` syntax
* Missing header files
* Namespace-related errors
* Invalid identifiers
* Case-sensitivity mistakes
* Incorrect syntax
* Compilation errors
* Linking errors

---

# 🔄 C vs C++

Since this repository also contains a dedicated C programming section, relevant concepts may be compared between C and C++.

```text
C
│
├── Procedural Programming
├── printf / scanf
├── C-style strings
└── Manual memory management
```

```text
C++
│
├── Procedural Programming
├── Object-Oriented Programming
├── Generic Programming
├── STL
├── RAII
└── Modern Language Features
```

These comparisons are intended to clarify how C++ extends and differs from C.

---

# 🤖 AI/ML Relevance

C++ fundamentals provide a foundation for understanding performance-oriented software and systems used in AI/ML.

```text
C++ Fundamentals
       │
       ▼
Programming Logic
       │
       ▼
Memory & Performance
       │
       ▼
Data Structures
       │
       ▼
Algorithms
       │
       ▼
Efficient Software
       │
       ▼
AI/ML Systems
```

C++ is particularly relevant to areas such as:

* High-performance computing
* Numerical computing
* Computer vision
* Robotics
* Game engines
* Inference systems
* AI/ML libraries
* Systems programming

---

# 🧪 Learning Approach

The emphasis is on understanding rather than memorizing syntax.

```text
Learn
  ↓
Understand
  ↓
Write
  ↓
Compile
  ↓
Run
  ↓
Debug
  ↓
Experiment
  ↓
Practice
  ↓
Apply
```

The objective is to understand **why the code works**, not simply remember how to write it.
