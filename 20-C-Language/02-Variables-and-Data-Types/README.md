# 02 — Data Types

Data types tell C **what kind of data a variable stores**, how that data is represented in memory, and which operations can be performed on it.

```text
Variable
   │
   ├── Data Type
   │      ↓
   │   Determines
   │      │
   │      ├── Kind of value
   │      ├── Memory representation
   │      ├── Size
   │      └── Range
   │
   └── Value
```

---

# 1. What is a Data Type?

A data type specifies the type of value that a variable can store.

```c
int age = 18;
float temperature = 36.5f;
double pi = 3.1415926535;
char grade = 'A';
```

Here:

| Variable      | Type     |  Example Value |
| ------------- | -------- | -------------: |
| `age`         | `int`    |           `18` |
| `temperature` | `float`  |         `36.5` |
| `pi`          | `double` | `3.1415926535` |
| `grade`       | `char`   |          `'A'` |

---

# 2. Why Data Types Matter

Data types affect:

* Memory usage
* Range of values
* Precision
* How values are interpreted
* Which format specifier is used
* Which operations are appropriate

Example:

```c
int age = 18;
char grade = 'A';
```

The computer needs to know how to interpret the bits stored for each variable.

---

# 3. Basic Data Types

The main built-in C data types are:

```text
char
int
float
double
void
```

Common usage:

```text
char      → characters
int       → integers
float     → decimal values
double    → higher-precision decimal values
void      → no value / no type
```

---

# 4. `int`

`int` is used to store integer values.

```c
int age = 18;
int marks = 95;
int temperature = -5;
```

Integers do not contain a fractional part.

```text
18      → integer
95      → integer
-5      → integer

18.5    → not an integer
3.14159 → not an integer
```

Example:

```c
#include <stdio.h>

int main(void)
{
    int age = 18;

    printf("Age: %d\n", age);

    return 0;
}
```

---

# 5. `float`

`float` stores floating-point numbers.

```c
float temperature = 36.5f;
float height = 5.9f;
```

The `f` suffix indicates a `float` literal.

```c
float temperature = 36.5f;
```

Without the suffix:

```c
float temperature = 36.5;
```

`36.5` is normally a `double` floating-point constant that is converted to `float` when assigned.

---

# 6. `double`

`double` is used for floating-point values with greater precision than `float` on typical systems.

```c
double pi = 3.141592653589793;
double distance = 12345.678901;
```

Example:

```c
#include <stdio.h>

int main(void)
{
    double pi = 3.141592653589793;

    printf("PI: %.15f\n", pi);

    return 0;
}
```

Typical relationship:

```text
float
  ↓
less precision

double
  ↓
more precision
```

The exact representation and precision are implementation-defined, but modern systems commonly use IEEE 754 floating-point formats.

---

# 7. `char`

`char` is used to store a single character.

```c
char grade = 'A';
char symbol = '#';
char initial = 'G';
```

Characters use **single quotes**:

```c
char grade = 'A';
```

Strings use **double quotes**:

```c
printf("A");
```

Important distinction:

```text
'A'     → character
"A"     → string
```

Example:

```c
#include <stdio.h>

int main(void)
{
    char grade = 'A';

    printf("Grade: %c\n", grade);

    return 0;
}
```

---

# 8. `void`

`void` represents the absence of a value or type.

It is commonly used with functions.

Example:

```c
void display(void)
{
    printf("Hello\n");
}
```

Here:

```text
void before function name
        ↓
function returns no value

void inside ()
        ↓
function takes no arguments
```

`void` is also used with pointers:

```c
void *ptr;
```

Pointers are covered later in the C roadmap.

---

# 9. Type Modifiers

C provides modifiers that can change the range or representation of integer types.

Main modifiers:

```text
short
long
signed
unsigned
```

Examples:

```c
short int a;
long int b;
signed int c;
unsigned int d;
```

`int` can normally be omitted:

```c
short a;
long b;
unsigned int c;
```

---

# 10. `signed` and `unsigned`

### Signed

A signed integer can represent both negative and positive values.

```c
signed int temperature = -10;
```

### Unsigned

An unsigned integer represents non-negative values.

```c
unsigned int age = 18;
```

Conceptually:

```text
signed
   ↓
negative ← 0 → positive

unsigned
   ↓
0 → positive
```

Because an unsigned type does not need to represent negative values, its available range is shifted toward non-negative values.

---

# 11. `short` and `long`

These modifiers can be used with integer types.

```c
short int small_number;
long int large_number;
```

Common forms:

```c
short
long
long long
```

Example:

```c
short int a = 100;
long int b = 100000L;
long long int c = 9000000000LL;
```

The exact sizes are implementation-dependent.

---

# 12. Typical Integer Sizes

A common modern system looks like this:

| Type        | Typical Size |
| ----------- | -----------: |
| `char`      |       1 byte |
| `short`     |      2 bytes |
| `int`       |      4 bytes |
| `long`      | 4 or 8 bytes |
| `long long` |      8 bytes |

**Important:** C does not guarantee these exact sizes on every platform.

The language guarantees minimum ranges and ordering relationships, while the actual size depends on the implementation.

---

# 13. `sizeof()`

`sizeof` determines the size of a type or object in bytes.

Example:

```c
#include <stdio.h>

int main(void)
{
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(char));

    return 0;
}
```

Typical output:

```text
4
4
8
1
```

The output can vary depending on the system/compiler.

---

# 14. Why `sizeof(char)` is Always 1

In C:

```c
sizeof(char)
```

is always:

```text
1
```

However, one C "byte" is defined as one `char` unit and is not required to contain exactly 8 bits.

The number of bits in a byte can be checked using:

```c
#include <limits.h>

printf("%d\n", CHAR_BIT);
```

On most modern computers:

```text
CHAR_BIT = 8
```

---

# 15. Format Specifiers

Format specifiers tell `printf()` how a value should be displayed.

| Data Type            | Common `printf()` Specifier |
| -------------------- | --------------------------- |
| `int`                | `%d`                        |
| `unsigned int`       | `%u`                        |
| `char`               | `%c`                        |
| `float`              | `%f`                        |
| `double`             | `%f`                        |
| `long int`           | `%ld`                       |
| `long long int`      | `%lld`                      |
| `unsigned long`      | `%lu`                       |
| `unsigned long long` | `%llu`                      |
| `size_t`             | `%zu`                       |

Example:

```c
int age = 18;
float height = 5.9f;
double pi = 3.14159;
char grade = 'A';

printf("%d\n", age);
printf("%f\n", height);
printf("%f\n", pi);
printf("%c\n", grade);
```

---

# 16. `float` Precision in `printf()`

You can control the number of digits displayed after the decimal point.

```c
float value = 12.345678f;

printf("%f\n", value);
printf("%.2f\n", value);
printf("%.4f\n", value);
```

Possible output:

```text
12.345678
12.35
12.3457
```

The format:

```text
%.2f
```

means approximately:

```text
2 digits after the decimal point
```

---

# 17. Integer Literals

Examples:

```c
int a = 10;
int b = -20;
int c = 0;
```

Different integer bases can also be written in C:

```c
int decimal = 10;
int octal = 012;
int hexadecimal = 0xA;
```

Here:

```text
10      → decimal
012     → octal
0xA     → hexadecimal
```

Integer bases are covered in more detail in the computer-fundamentals/bitwise sections.

---

# 18. Floating-Point Literals

Examples:

```c
float a = 3.14f;
double b = 3.1415926535;
```

Scientific notation is also supported:

```c
double speed = 3.0e8;
```

Meaning:

```text
3.0 × 10⁸
```

---

# 19. Character Values

A character can be represented using a character constant:

```c
char letter = 'A';
```

Characters are represented numerically according to the execution character set.

On systems using ASCII-compatible character encoding:

```text
'A' → 65
'B' → 66
'a' → 97
'0' → 48
```

Example:

```c
#include <stdio.h>

int main(void)
{
    char letter = 'A';

    printf("Character: %c\n", letter);
    printf("Numeric value: %d\n", letter);

    return 0;
}
```

---

# 20. Character vs String

This distinction is important.

### Character

```c
char grade = 'A';
```

Uses:

```text
'A'
```

### String

```c
printf("AI/ML");
```

Uses:

```text
"AI/ML"
```

Conceptually:

```text
'A'
 ↓
one character

"AI/ML"
 ↓
sequence of characters
```

Strings are covered in detail later in `09-Strings/`.

---

# 21. Type Conversion

Type conversion occurs when a value changes from one type to another.

Example:

```c
int number = 10;
double value = number;
```

Conceptually:

```text
int
10
 ↓
conversion
 ↓
double
10.0
```

This is an example of implicit conversion.

---

# 22. Implicit Conversion

C can automatically convert one type to another when required.

```c
int a = 10;
double b = a;
```

Here:

```text
int → double
```

Another example:

```c
int a = 5;
double b = 2.0;

double result = a / b;
```

The integer participates in the expression after conversion to a compatible floating-point type.

---

# 23. Explicit Type Casting

You can explicitly request a conversion using a cast.

Syntax:

```c
(type) value
```

Example:

```c
int a = 5;
int b = 2;

double result = (double)a / b;
```

Without casting:

```c
double result = a / b;
```

The division occurs as integer division first.

With casting:

```c
double result = (double)a / b;
```

The calculation uses floating-point division.

---

# 24. Integer Division

This is an important beginner concept.

```c
int result = 5 / 2;
```

Result:

```text
2
```

Not:

```text
2.5
```

because both operands are integers.

To obtain floating-point division:

```c
double result = (double)5 / 2;
```

Result:

```text
2.5
```

---

# 25. Data Type Hierarchy

A simplified view of common arithmetic types:

```text
                 Arithmetic Types
                       │
             ┌─────────┴─────────┐
             │                   │
         Integer            Floating Point
             │                   │
     ┌───────┼───────┐       ┌───┴────┐
     │       │       │       │        │
    char    int    long    float    double
```

The actual C type system contains additional variations and rules.

---

# 26. Data Types and Memory

A variable occupies memory according to its type.

Conceptually:

```text
int
┌──────────────┐
│     value    │
└──────────────┘

double
┌────────────────────────────┐
│           value            │
└────────────────────────────┘
```

The actual representation is binary.

For example:

```text
Decimal value
     ↓
Binary representation
     ↓
Stored in memory
```

Understanding this becomes important when learning:

* Arrays
* Pointers
* Dynamic memory
* Structures
* Bitwise operations

---

# 27. Example — Multiple Data Types

```c
#include <stdio.h>

int main(void)
{
    int age = 18;
    float height = 5.9f;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("PI: %.10f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
```

Output:

```text
Age: 18
Height: 5.9
PI: 3.1415926535
Grade: A
```

---

# 28. Common Mistakes

### Using `%d` for a `double`

```c
double value = 3.14;

printf("%d", value);    // ❌
```

Use:

```c
printf("%f", value);    // ✅
```

---

### Using double quotes for a character

```c
char grade = "A";       // ❌
```

Correct:

```c
char grade = 'A';       // ✅
```

---

### Forgetting the `f` suffix

```c
float temperature = 36.5f;
```

This is the usual form for a `float` literal.

---

### Expecting decimal output from integer division

```c
int result = 5 / 2;
```

Result:

```text
2
```

Use:

```c
double result = (double)5 / 2;
```

Result:

```text
2.5
```

---

# 29. Quick Reference

| Type        | Purpose                     | Example           |
| ----------- | --------------------------- | ----------------- |
| `char`      | Character                   | `'A'`             |
| `int`       | Integer                     | `100`             |
| `float`     | Decimal                     | `3.14f`           |
| `double`    | Higher-precision decimal    | `3.141592`        |
| `short`     | Smaller integer type        | `short x`         |
| `long`      | Larger integer type         | `long x`          |
| `long long` | Very large integer range    | `long long x`     |
| `signed`    | Allows negative values      | `signed int x`    |
| `unsigned`  | Non-negative integer values | `unsigned int x`  |
| `void`      | No value/type               | `void function()` |

---

# 30. Format Specifier Cheat Sheet

```text
%d       → int
%u       → unsigned int
%c       → char
%f       → floating-point output
%ld      → long
%lld     → long long
%lu      → unsigned long
%llu     → unsigned long long
%zu      → size_t
```

---

# 31. Type Conversion Cheat Sheet

```text
Implicit:

int
 ↓
double

Explicit:

int
 ↓
(double)
 ↓
double
```

Example:

```c
int a = 5;
double b = (double)a;
```

---

# 32. Data Type Summary

```text
C Data Types
│
├── Basic
│   ├── char
│   ├── int
│   ├── float
│   ├── double
│   └── void
│
├── Modifiers
│   ├── signed
│   ├── unsigned
│   ├── short
│   └── long
│
├── Size
│   └── sizeof()
│
└── Conversion
    ├── Implicit
    └── Explicit Casting
```

---

## Connection to the Next Topics

```text
Data Types
    ↓
Input / Output
    ↓
Operators
    ↓
Expressions
    ↓
Conditions
    ↓
Loops
    ↓
Functions
```

Data types become especially important when working with **arrays, pointers, structures, memory management, and data structures** later in the C track.
