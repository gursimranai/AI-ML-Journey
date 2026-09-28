# 🔑 Keywords and Identifiers in C++

> Keywords have predefined meaning in C++, while identifiers are names created by the programmer.

---

# 1. Keywords

A **keyword** is a reserved word that has a special meaning in the C++ language.

Examples:

```cpp
int
float
double
if
else
for
while
return
class
public
private
```

Because keywords are reserved, they cannot normally be used as programmer-defined names.

---

# 2. Example

```cpp
int age = 18;
```

Here:

```text
int
│
└── Keyword

age
│
└── Identifier
```

---

# 3. Common C++ Keywords

Some commonly encountered keywords include:

| Category     | Keywords                                            |
| ------------ | --------------------------------------------------- |
| Data types   | `int`, `char`, `float`, `double`, `bool`, `void`    |
| Control flow | `if`, `else`, `switch`, `case`, `default`           |
| Loops        | `for`, `while`, `do`                                |
| Functions    | `return`                                            |
| OOP          | `class`, `struct`, `public`, `private`, `protected` |
| Memory       | `new`, `delete`                                     |
| Constants    | `const`, `constexpr`                                |
| Exceptions   | `try`, `catch`, `throw`                             |
| Inheritance  | `virtual`, `override`, `final`                      |
| Namespaces   | `namespace`, `using`                                |
| Templates    | `template`, `typename`                              |
| Boolean      | `true`, `false`                                     |

C++ has many additional contextual and standard-language keywords.

---

# 4. Keywords Cannot Be Used as Normal Identifiers

Invalid:

```cpp
int class = 10;
```

Invalid:

```cpp
int return = 5;
```

Invalid:

```cpp
int while = 20;
```

Use another name:

```cpp
int classNumber = 10;
```

---

# 5. What Is an Identifier?

An **identifier** is a name given to a program entity.

Examples:

```cpp
age
studentName
totalMarks
calculateAverage
```

Identifiers can name things such as:

* Variables
* Functions
* Classes
* Objects
* Namespaces
* Structures
* Enumerations
* Templates

---

# 6. Identifier Rules

A C++ identifier generally follows these rules:

### Rule 1: Start with a letter or underscore

Valid:

```cpp
age
_student
studentName
```

---

### Rule 2: Can contain letters, digits, and underscores

Valid:

```cpp
student1
marks2026
total_marks
```

---

### Rule 3: Cannot start with a digit

Invalid:

```cpp
1student
2026marks
```

Valid:

```cpp
student1
marks2026
```

---

### Rule 4: Cannot contain spaces

Invalid:

```cpp
student name
```

Valid:

```cpp
studentName
```

or:

```cpp
student_name
```

---

### Rule 5: Cannot be a keyword

Invalid:

```cpp
int class = 10;
```

---

### Rule 6: C++ is case-sensitive

These are different identifiers:

```cpp
age
Age
AGE
```

Example:

```cpp
int age = 18;
int Age = 20;
```

These are two different variables.

---

# 7. Valid vs Invalid Identifiers

| Identifier     | Valid? | Reason                                       |
| -------------- | -----: | -------------------------------------------- |
| `age`          |      ✅ | Valid                                        |
| `studentName`  |      ✅ | Valid                                        |
| `student_1`    |      ✅ | Valid                                        |
| `_value`       |     ✅* | Syntactically valid, but naming rules matter |
| `1student`     |      ❌ | Starts with digit                            |
| `student name` |      ❌ | Contains space                               |
| `student-name` |      ❌ | `-` is not allowed in identifiers            |
| `class`        |      ❌ | Keyword                                      |
| `totalMarks`   |      ✅ | Valid                                        |

*Some underscore-prefixed names are reserved in particular scopes or contexts, so avoid unnecessary leading underscores in your own code.

---

# 8. Naming Conventions

C++ allows many valid names, but professional code follows consistent conventions.

### camelCase

```cpp
studentName
totalMarks
calculateAverage
```

### snake_case

```cpp
student_name
total_marks
calculate_average
```

### PascalCase

Often used for classes:

```cpp
Student
DataProcessor
NeuralNetwork
```

Example:

```cpp
class Student {
};
```

---

# 9. Meaningful Identifiers

Prefer:

```cpp
totalMarks
```

over:

```cpp
x
```

when the variable represents total marks.

Prefer:

```cpp
calculateAverage()
```

over:

```cpp
calc()
```

when clarity matters.

Meaningful names improve readability.

---

# 10. Avoid Excessively Short Names

This:

```cpp
int a;
int b;
int c;
```

may be acceptable for a small mathematical example.

For larger code:

```cpp
int studentAge;
double averageMarks;
int totalStudents;
```

is usually easier to understand.

---

# 11. Constants and Naming

Example:

```cpp
const double PI = 3.141592653589793;
```

A project may use uppercase names for constants:

```cpp
MAX_SIZE
BUFFER_SIZE
```

Naming conventions are style choices rather than universal requirements.

---

# 12. Keywords vs Identifiers

| Feature               | Keyword             | Identifier                    |
| --------------------- | ------------------- | ----------------------------- |
| Meaning               | Defined by language | Defined by programmer         |
| Can be chosen freely? | ❌                   | ✅                             |
| Example               | `int`               | `age`                         |
| Reserved?             | Yes                 | No, subject to language rules |
| Purpose               | Language syntax     | Naming program entities       |

---

# 13. Example Program

```cpp
#include <iostream>

int main() {

    int studentAge = 18;
    double averageMarks = 87.5;

    std::cout << studentAge << '\n';
    std::cout << averageMarks << '\n';

    return 0;
}
```

### Token classification

```text
int             → Keyword
studentAge      → Identifier
=               → Operator
18              → Literal
double          → Keyword
averageMarks    → Identifier
87.5            → Literal
std             → Namespace identifier
cout            → Identifier
return          → Keyword
```

---

# 14. Identifiers in AI/ML Code

Meaningful identifiers become particularly important in AI/ML programs.

Example:

```cpp
int batchSize = 32;
double learningRate = 0.001;
int inputFeatures = 784;
```

Compare this with:

```cpp
int a = 32;
double b = 0.001;
int c = 784;
```

The first version communicates the purpose of each value much more clearly.

---

# 15. Common Mistakes

### Keyword used as identifier

```cpp
int class = 5;
```

❌ Invalid.

---

### Identifier beginning with a number

```cpp
int 2value = 10;
```

❌ Invalid.

---

### Spaces

```cpp
int student age = 18;
```

❌ Invalid.

---

### Case confusion

```cpp
int age = 18;

std::cout << Age;
```

`Age` and `age` are different identifiers.

---

# 16. Interview Points

* Keywords are reserved words with predefined language meaning.
* Identifiers are programmer-defined names.
* Identifiers cannot normally be keywords.
* C++ identifiers are case-sensitive.
* An identifier cannot begin with a digit.
* Meaningful naming improves maintainability.
* Some underscore-based names are reserved by the implementation, so leading underscores should be used carefully.

---

# 17. Key Takeaways

```text
C++ Names
   │
   ├── Keywords
   │      └── Language-defined
   │
   └── Identifiers
          └── Programmer-defined
```

A strong naming convention makes C++ code easier to read, debug, maintain, and scale.
