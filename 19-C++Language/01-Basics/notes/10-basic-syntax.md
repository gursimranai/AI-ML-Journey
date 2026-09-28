# 🧱 Basic C++ Syntax

> C++ syntax defines the rules for writing valid C++ programs.

---

# 1. What Is Syntax?

**Syntax** is the set of rules that determines how C++ code must be written.

For example:

```cpp
int age = 18;
```

follows valid C++ syntax.

But:

```cpp
int = age 18;
```

does not follow the required syntax.

---

# 2. Basic C++ Program

A simple program:

```cpp
#include <iostream>

int main() {

    std::cout << "Hello, World!";

    return 0;
}
```

Basic structure:

```text
Header
   │
   ▼
main()
   │
   ├── Statements
   ├── Expressions
   └── return
```

---

# 3. Semicolon

Most simple C++ statements end with:

```cpp
;
```

Example:

```cpp
int x = 10;
int y = 20;
std::cout << x + y;
```

The semicolon marks the end of each statement.

---

# 4. Curly Braces

Curly braces:

```cpp
{ }
```

define blocks of code.

Example:

```cpp
int main() {

    std::cout << "Hello";

}
```

They are used in:

* Functions
* `if` statements
* Loops
* Classes
* Namespaces
* Other compound constructs

---

# 5. Parentheses

Parentheses:

```cpp
( )
```

are used in many C++ constructs.

### Function call

```cpp
print();
```

### Function definition

```cpp
void print() {
}
```

### Condition

```cpp
if (age >= 18) {
}
```

### Expression grouping

```cpp
int result = (a + b) * c;
```

---

# 6. Square Brackets

Square brackets:

```cpp
[ ]
```

are commonly used for:

* Array indexing
* Lambda captures
* Other language features

Example:

```cpp
int numbers[3] = {10, 20, 30};

std::cout << numbers[0];
```

Output:

```text
10
```

---

# 7. Case Sensitivity

C++ is case-sensitive.

These are different:

```cpp
age
Age
AGE
```

Likewise:

```cpp
main
Main
MAIN
```

are different identifiers.

---

# 8. Whitespace

Whitespace includes:

* Spaces
* Tabs
* Newlines

For example:

```cpp
int x = 10;
```

can be formatted as:

```cpp
int
x
=
10
;
```

although the second form is obviously less readable.

Good formatting improves maintainability.

---

# 9. Indentation

Indentation makes nested code easier to understand.

Poor:

```cpp
int main(){
if(true){
std::cout<<"Hello";
}
}
```

Better:

```cpp
int main() {

    if (true) {
        std::cout << "Hello";
    }

    return 0;
}
```

Indentation does not usually determine C++ syntax the way it does in Python; braces determine blocks.

---

# 10. Statements

Example:

```cpp
int age = 18;
```

This is a statement.

Multiple statements:

```cpp
int x = 10;
int y = 20;
int sum = x + y;
```

---

# 11. Expressions

Expressions calculate or produce values.

Examples:

```cpp
10 + 20
```

```cpp
x * y
```

```cpp
age >= 18
```

```cpp
calculate()
```

---

# 12. Comments

Single-line:

```cpp
// This is a comment
```

Multi-line:

```cpp
/*
   This is a
   multi-line comment.
*/
```

Comments are ignored as executable program instructions.

---

# 13. Identifiers

Identifiers name program entities.

Examples:

```cpp
age
studentName
totalMarks
calculateAverage
```

Rules include:

* Cannot begin with a digit
* Cannot contain spaces
* Cannot be a keyword
* C++ is case-sensitive

---

# 14. Keywords

Keywords have predefined meanings.

Examples:

```cpp
int
return
if
else
class
for
while
```

They form part of the language syntax.

---

# 15. Literals

Literals represent fixed values.

Examples:

```cpp
10
3.14
'A'
"Hello"
true
```

---

# 16. Operators

Operators perform operations.

Examples:

```cpp
+
-
*
/
%
=
==
!=
<
>
&&
||
```

Example:

```cpp
int sum = a + b;
```

---

# 17. Namespace Syntax

The scope-resolution operator:

```cpp
::
```

is used to access names within a namespace or other scopes.

Example:

```cpp
std::cout
```

Here:

```text
std
 │
 └── Namespace

::
 │
 └── Scope resolution

cout
 │
 └── Name
```

---

# 18. String Output Syntax

Example:

```cpp
std::cout << "Hello";
```

Here:

```text
std::cout
    │
    └── Output stream

<<
    │
    └── Stream insertion operator

"Hello"
    │
    └── String literal
```

---

# 19. Newline Syntax

You can use:

```cpp
'\n'
```

Example:

```cpp
std::cout << "Hello\n";
```

You can also use:

```cpp
std::endl
```

Example:

```cpp
std::cout << "Hello" << std::endl;
```

For most simple output, `'\n'` is commonly preferred because it does not explicitly request a stream flush.

---

# 20. Combining Basic Syntax

Example:

```cpp
#include <iostream>

int main() {

    int age = 18;

    if (age >= 18) {
        std::cout << "Eligible";
    }

    return 0;
}
```

This single program demonstrates:

* Header
* `main()`
* Variable declaration
* Assignment
* Expression
* Comparison operator
* `if`
* Braces
* `std::cout`
* String literal
* Semicolons
* `return`

---

# 21. Syntax Structure

A simplified view:

```text
C++ Program
│
├── Preprocessor directives
│
├── Declarations
│
├── Functions
│    └── Statements
│          └── Expressions
│
├── Classes / Namespaces
│
└── Comments
```

---

# 22. Common Syntax Errors

### Missing semicolon

```cpp
int age = 18
```

Correct:

```cpp
int age = 18;
```

---

### Missing closing brace

```cpp
int main() {
    std::cout << "Hello";
```

Correct:

```cpp
int main() {
    std::cout << "Hello";
}
```

---

### Incorrect capitalization

```cpp
Int age = 18;
```

Correct:

```cpp
int age = 18;
```

---

### Incorrect string quotes

Incorrect:

```cpp
std::cout << 'Hello';
```

Correct:

```cpp
std::cout << "Hello";
```

`' '` is used for character literals, while `" "` is used for string literals.

---

### Incorrect namespace syntax

Incorrect:

```cpp
std.cout
```

Correct:

```cpp
std::cout
```

---

# 23. Syntax vs Logic Errors

### Syntax Error

The code violates C++ language rules.

```cpp
int x = ;
```

The compiler reports an error.

### Logic Error

The program compiles but produces an incorrect result.

```cpp
int average = total * count;
```

if the intended calculation was:

```cpp
int average = total / count;
```

---

# 24. Syntax and Compilation

A simplified pipeline is:

```text
C++ Source Code
       │
       ▼
Lexical Processing
       │
       ▼
Syntax / Parsing
       │
       ▼
Semantic Analysis
       │
       ▼
Compilation
       │
       ▼
Executable
```

Syntax errors are detected during translation before normal program execution.

---

# 25. Basic Syntax in AI/ML Programs

The same syntax rules apply to AI/ML C++ code.

Example:

```cpp
#include <iostream>

int main() {

    double learningRate = 0.001;
    int batchSize = 32;

    std::cout << "Learning Rate: " << learningRate << '\n';
    std::cout << "Batch Size: " << batchSize << '\n';

    return 0;
}
```

AI/ML introduces more complex algorithms and data structures, but the underlying C++ syntax remains the same.

---

# 26. Professional C++ Syntax Checklist

Before compiling, check:

```text
☑ Semicolons
☑ Matching braces
☑ Matching parentheses
☑ Correct quotes
☑ Correct capitalization
☑ Valid identifiers
☑ Correct keywords
☑ Correct namespace syntax
☑ Required headers
☑ Correct statement structure
```

---

# 27. Interview Points

* C++ is case-sensitive.
* Most simple statements end with `;`.
* `{}` define blocks.
* `()` are used for function calls, parameters, conditions, and grouping.
* `[]` are used for array indexing and other language features.
* `::` is the scope-resolution operator.
* Comments are not executable instructions.
* Syntax errors are detected during compilation/translation.

---

# 28. Key Takeaways

```text
Basic C++ Syntax
       │
       ├── Statements
       ├── Expressions
       ├── Keywords
       ├── Identifiers
       ├── Literals
       ├── Operators
       ├── Braces
       ├── Parentheses
       ├── Semicolons
       ├── Comments
       └── Namespaces
```

Mastering these basic syntax rules provides the foundation for variables, control flow, functions, OOP, STL, DSA, and eventually larger C++ AI/ML systems.
