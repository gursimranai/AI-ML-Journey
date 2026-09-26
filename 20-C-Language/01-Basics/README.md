# 01 — C Fundamentals

This folder contains the basic building blocks of the C programming language — program structure, syntax, comments, identifiers, variables, constants, escape sequences, and basic output.

The focus here is understanding **how a C program is written and structured** before moving into input, operators, conditions, loops, and functions.

---

## 📁 Folder Structure

```text
01-C-Fundamentals/
│
├── README.md
│
├── examples/
│   ├── hello_world.c
│   ├── comments.c
│   ├── variables.c
│   ├── constants.c
│   ├── identifiers.c
│   ├── escape_sequences.c
│   └── basic_program_structure.c
│
├── practice/
│   ├── print_personal_info.c
│   ├── print_ascii_art.c
│   ├── simple_message.c
│   ├── basic_profile.c
│   └── multiple_output_lines.c
│
└── mini-project/
    └── personal_profile.c
```

---

# 1. What is C?

C is a **general-purpose, compiled programming language** created by Dennis Ritchie at Bell Labs.

It is widely used for:

* Operating systems
* Embedded systems
* Compilers
* System software
* Networking
* Performance-critical applications
* Data structures and algorithms
* Understanding memory and computer architecture

C is especially useful for understanding what happens **close to the hardware**.

```text
High-Level Languages
        ↓
      C / C++
        ↓
Assembly
        ↓
Machine Code
        ↓
     Hardware
```

---

# 2. First C Program

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    return 0;
}
```

### Output

```text
Hello, World!
```

---

# 3. Basic Structure of a C Program

```c
#include <stdio.h>

int main(void)
{
    // Program statements

    return 0;
}
```

### Breakdown

| Part                 | Meaning                                      |
| -------------------- | -------------------------------------------- |
| `#include <stdio.h>` | Includes standard input/output functionality |
| `int`                | Return type of `main()`                      |
| `main()`             | Starting point of the program                |
| `{ }`                | Defines a block of code                      |
| `printf()`           | Prints output                                |
| `return 0;`          | Indicates successful program termination     |

### Program Flow

```text
Program starts
      ↓
   main()
      ↓
Execute statements
      ↓
 return 0
      ↓
Program ends
```

---

# 4. `main()` Function

Every executable C program needs a starting point.

The standard form is:

```c
int main(void)
{
    // code
    return 0;
}
```

Another commonly seen form is:

```c
int main()
{
    return 0;
}
```

For modern C code, prefer:

```c
int main(void)
```

because `void` explicitly indicates that the function takes no arguments.

---

# 5. Comments

Comments are ignored by the compiler and are used to explain code.

## Single-Line Comment

```c
// This is a comment
printf("Hello");
```

## Multi-Line Comment

```c
/*
   This is a
   multi-line comment
*/
printf("Hello");
```

Comments do not affect program execution.

```text
Source Code
    ↓
Compiler
    ↓
Comments removed / ignored
    ↓
Executable Code
```

---

# 6. Statements

A statement is an instruction that the program executes.

Most C statements end with a semicolon `;`.

```c
printf("Hello");
```

```c
int age = 18;
```

```c
return 0;
```

### Important

```c
printf("Hello")    // ❌ Missing ;
printf("Hello");   // ✅
```

The semicolon tells the compiler that the statement has ended.

---

# 7. Blocks

A block is a group of statements enclosed inside `{ }`.

```c
{
    statement1;
    statement2;
    statement3;
}
```

Example:

```c
int main(void)
{
    printf("Hello\n");
    printf("Welcome to C\n");

    return 0;
}
```

The statements between `{` and `}` belong to `main()`.

---

# 8. Identifiers

Identifiers are names given to programming elements such as:

* Variables
* Functions
* Arrays
* Structures
* Other user-defined elements

Example:

```c
int age;
int marks;
int total;
```

Here:

```text
age    → identifier
marks  → identifier
total  → identifier
```

## Identifier Rules

Valid:

```c
age
student_age
totalMarks
_number
marks2
```

Invalid:

```c
2marks       // ❌ Cannot start with a digit
student-age  // ❌ '-' is not allowed
my name      // ❌ Spaces are not allowed
int          // ❌ Keyword
```

### General Rule

```text
First character:
    Letter or _

Remaining characters:
    Letters
    Digits
    _
```

---

# 9. C is Case-Sensitive

C treats uppercase and lowercase letters as different.

```c
int age;
int Age;
int AGE;
```

These are three different identifiers.

```text
age ≠ Age ≠ AGE
```

Example:

```c
int age = 18;

printf("%d", age);   // ✅
printf("%d", Age);   // ❌ Different identifier
```

---

# 10. Keywords

Keywords are reserved words that have special meaning in C.

Examples:

```text
int
char
float
double
if
else
for
while
return
void
struct
const
static
switch
case
break
continue
```

You cannot use a keyword as an identifier.

```c
int return = 10;   // ❌
```

---

# 11. Variables

A variable is a named memory location used to store a value.

Example:

```c
int age = 18;
```

Conceptually:

```text
Variable
   ↓
┌─────────────┐
│     age     │
├─────────────┤
│     18      │
└─────────────┘
```

The exact memory representation depends on the variable's type and system.

---

# 12. Variable Declaration

Declaration tells the compiler about a variable.

```c
int age;
```

Here:

```text
int → data type
age → variable name
```

Declaration with initialization:

```c
int age = 18;
```

---

# 13. Constants

A constant is a value that should not be modified after initialization.

Using `const`:

```c
const int DAYS = 7;
```

Trying to modify it:

```c
DAYS = 10;   // ❌
```

Example:

```c
#include <stdio.h>

int main(void)
{
    const int DAYS_IN_WEEK = 7;

    printf("%d\n", DAYS_IN_WEEK);

    return 0;
}
```

A common naming convention for constants is:

```text
UPPER_CASE
```

---

# 14. Escape Sequences

Escape sequences represent special characters inside strings and character constants.

| Escape | Meaning         |
| ------ | --------------- |
| `\n`   | New line        |
| `\t`   | Horizontal tab  |
| `\\`   | Backslash       |
| `\"`   | Double quote    |
| `\'`   | Single quote    |
| `\r`   | Carriage return |
| `\b`   | Backspace       |
| `\0`   | Null character  |

### Example

```c
#include <stdio.h>

int main(void)
{
    printf("Hello\nWorld");

    return 0;
}
```

Output:

```text
Hello
World
```

### Tab

```c
printf("Name\tAge");
```

Output:

```text
Name    Age
```

### Quotes

```c
printf("\"Hello C!\"");
```

Output:

```text
"Hello C!"
```

---

# 15. `printf()`

`printf()` is used to display formatted output.

It is declared in:

```c
#include <stdio.h>
```

Example:

```c
printf("Hello");
```

Multiple values can also be printed:

```c
printf("Age: %d\n", age);
```

Format specifiers such as `%d` are covered more deeply in the **Data Types** and **Input/Output** sections.

---

# 16. Whitespace

C generally ignores extra spaces, tabs, and newlines between tokens.

These can produce the same result:

```c
int age = 18;
```

```c
int     age     =     18;
```

```c
int
age
=
18;
```

However, formatting code properly makes it much easier to read.

Preferred:

```c
int age = 18;
```

---

# 17. Basic Program Example

```c
#include <stdio.h>

int main(void)
{
    printf("Name: Gursimran\n");
    printf("Branch: CSE - AI/ML\n");
    printf("Language: C\n");

    return 0;
}
```

Output:

```text
Name: Gursimran
Branch: CSE - AI/ML
Language: C
```

---

# 18. ASCII Art

C can also be used to generate simple text-based graphics.

```c
#include <stdio.h>

int main(void)
{
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("*******\n");

    return 0;
}
```

Output:

```text
   *
  ***
 *****
*******
```

This is useful for practicing:

* `printf()`
* Strings
* Newlines
* Tabs
* Program structure

---

# 19. Basic File Naming

Use descriptive `.c` filenames.

Good:

```text
hello_world.c
variables.c
escape_sequences.c
personal_profile.c
```

Avoid:

```text
abc.c
test123.c
finalfinal.c
program_new_new.c
```

For the repository, numbered filenames make the learning sequence easy to follow:

```text
01_hello_world.c
02_comments.c
03_variables.c
04_constants.c
```

---

# 20. Compilation

A basic GCC command:

```bash
gcc program.c -o program
```

Run:

### Windows

```bash
program.exe
```

### Linux/macOS

```bash
./program
```

Example:

```bash
gcc hello_world.c -o hello_world
```

Then:

```bash
hello_world
```

---

# 21. Compilation Flow

```text
hello_world.c
      │
      ▼
 Preprocessor
      │
      ▼
   Compiler
      │
      ▼
  Assembler
      │
      ▼
   Linker
      │
      ▼
hello_world.exe
```

The detailed compilation process is documented in:

```text
00-Setup-and-Toolchain/
```

---

# 22. Common Beginner Errors

### Missing Semicolon

```c
printf("Hello")     // ❌
```

Correct:

```c
printf("Hello");    // ✅
```

### Wrong `main()`

```c
int main
{
}
```

Correct:

```c
int main(void)
{
    return 0;
}
```

### Missing Header

```c
printf("Hello");
```

Correct:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello");
    return 0;
}
```

### Incorrect Identifier

```c
int student-name;   // ❌
```

Correct:

```c
int student_name;   // ✅
```

### Case Mistake

```c
int age = 18;

printf("%d", Age);  // ❌
```

`age` and `Age` are different identifiers.

---

# 23. Small Practice Programs

The `practice/` folder contains small programs that use only the concepts introduced here.

### Personal Information

```c
#include <stdio.h>

int main(void)
{
    printf("Name: Gursimran\n");
    printf("Course: B.Tech CSE\n");
    printf("Specialization: AI/ML\n");

    return 0;
}
```

### Multiple Lines

```c
#include <stdio.h>

int main(void)
{
    printf("Line 1\n");
    printf("Line 2\n");
    printf("Line 3\n");

    return 0;
}
```

### ASCII Art

```c
#include <stdio.h>

int main(void)
{
    printf("  /\\\n");
    printf(" /  \\\n");
    printf("/____\\\n");

    return 0;
}
```

---

# 24. Mini Project — Personal Profile

The `mini-project/` folder contains a slightly larger program using only fundamental concepts.

Example:

```c
#include <stdio.h>

int main(void)
{
    printf("==============================\n");
    printf("       PERSONAL PROFILE       \n");
    printf("==============================\n");

    printf("Name       : Gursimran\n");
    printf("Course     : B.Tech CSE\n");
    printf("Speciality : AI/ML\n");
    printf("Language   : C\n");

    printf("==============================\n");

    return 0;
}
```

This is intentionally simple.

More complex projects should be introduced after learning:

```text
Variables
   ↓
Data Types
   ↓
Input / Output
   ↓
Operators
   ↓
Conditions
   ↓
Loops
   ↓
Functions
```

---

# 25. C Fundamentals → AI/ML Connection

Although C is not the primary language for most ML experimentation, understanding C helps explain what happens underneath higher-level AI/ML tools.

```text
Python
  │
  ├── NumPy
  ├── PyTorch
  ├── TensorFlow
  └── Scikit-learn
          │
          ▼
      C / C++ / CUDA
          │
          ▼
     System Hardware
          │
          ▼
        CPU/GPU
```

Understanding C becomes especially useful later for:

* Memory management
* Pointers
* Arrays
* Data structures
* Algorithms
* Performance optimization
* Computer architecture
* Understanding native libraries
* Low-level AI/ML systems

---

# 26. Fundamental Syntax Cheat Sheet

| Concept            | Syntax               |
| ------------------ | -------------------- |
| Header             | `#include <stdio.h>` |
| Main function      | `int main(void)`     |
| Block              | `{ ... }`            |
| Statement          | `statement;`         |
| Comment            | `// comment`         |
| Multi-line comment | `/* comment */`      |
| Variable           | `int age;`           |
| Initialization     | `int age = 18;`      |
| Constant           | `const int X = 10;`  |
| Output             | `printf("Hello");`   |
| New line           | `\n`                 |
| Tab                | `\t`                 |
| Return             | `return 0;`          |

---

# 27. Fundamental Program Template

```c
#include <stdio.h>

int main(void)
{
    // Code goes here

    return 0;
}
```

Keep this as the basic starting template for small C programs.

---

The next folder should introduce **C data types, memory size, ranges, type modifiers, format specifiers, and type conversion**.
