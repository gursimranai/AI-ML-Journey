# 03 — Input and Output

Input and output (I/O) allow a C program to **receive data from a user or another source and display information back to the user**.

```text
              C PROGRAM
                  │
        ┌─────────┴─────────┐
        │                   │
      INPUT               OUTPUT
        │                   │
        ▼                   ▼
     scanf()             printf()
     getchar()           putchar()
     fgets()
```

Most basic console I/O functionality comes from:

```c
#include <stdio.h>
```

---

# 1. Standard Input and Output

C provides three standard streams:

| Stream   | Purpose         |
| -------- | --------------- |
| `stdin`  | Standard input  |
| `stdout` | Standard output |
| `stderr` | Standard error  |

Typical console flow:

```text
Keyboard
   │
   ▼
 stdin
   │
   ▼
C Program
   │
   ├──────────────► stdout ──► Screen
   │
   └──────────────► stderr ──► Error output
```

For beginner console programs, the most commonly used functions are:

```text
printf()    → formatted output
scanf()     → formatted input
getchar()   → read one character
putchar()   → write one character
fgets()     → read a line of text
```

---

# 2. `printf()`

`printf()` is used to display formatted output.

Header:

```c
#include <stdio.h>
```

Basic syntax:

```c
printf("text");
```

Example:

```c
printf("Hello, World!\n");
```

Output:

```text
Hello, World!
```

---

# 3. Printing Variables

Variables can be printed using format specifiers.

```c
int age = 18;

printf("Age: %d\n", age);
```

Output:

```text
Age: 18
```

Another example:

```c
float percentage = 92.5f;

printf("Percentage: %.1f%%\n", percentage);
```

Output:

```text
Percentage: 92.5%
```

---

# 4. Common `printf()` Format Specifiers

| Specifier | Data                  |
| --------- | --------------------- |
| `%d`      | `int`                 |
| `%i`      | `int`                 |
| `%u`      | `unsigned int`        |
| `%f`      | floating-point output |
| `%c`      | `char`                |
| `%s`      | string                |
| `%ld`     | `long int`            |
| `%lld`    | `long long int`       |
| `%zu`     | `size_t`              |
| `%x`      | hexadecimal           |
| `%o`      | octal                 |
| `%%`      | `%` character         |

Example:

```c
int age = 18;
float height = 175.5f;
char grade = 'A';

printf("Age: %d\n", age);
printf("Height: %.1f\n", height);
printf("Grade: %c\n", grade);
```

---

# 5. Formatting Output

`printf()` allows control over how values are displayed.

## Decimal Precision

```c
double pi = 3.1415926535;

printf("%f\n", pi);
printf("%.2f\n", pi);
printf("%.4f\n", pi);
```

Output:

```text
3.141593
3.14
3.1416
```

The number after `.` specifies the precision for floating-point output.

```text
%.2f
  │
  └── 2 digits after decimal point
```

---

# 6. Field Width

You can specify a minimum field width.

```c
printf("%5d\n", 42);
```

Output:

```text
   42
```

The value occupies at least 5 character positions.

Example:

```c
printf("%10s\n", "C");
```

---

# 7. Left Alignment

Use `-` for left alignment.

```c
printf("%-10s|\n", "C");
printf("%-10s|\n", "Python");
```

Output:

```text
C         |
Python    |
```

This is useful for creating simple tables.

---

# 8. Zero Padding

A `0` can be used to pad numeric output.

```c
printf("%05d\n", 42);
```

Output:

```text
00042
```

Example:

```c
int number = 7;

printf("%03d\n", number);
```

Output:

```text
007
```

---

# 9. Escape Sequences

Escape sequences can control output formatting.

| Sequence | Meaning         |
| -------- | --------------- |
| `\n`     | New line        |
| `\t`     | Tab             |
| `\\`     | Backslash       |
| `\"`     | Double quote    |
| `\'`     | Single quote    |
| `\r`     | Carriage return |
| `\b`     | Backspace       |

Example:

```c
printf("Name:\tGursimran\n");
printf("Course:\tCSE AI/ML\n");
```

Output:

```text
Name:   Gursimran
Course: CSE AI/ML
```

---

# 10. `scanf()`

`scanf()` is used to read formatted input.

Syntax:

```c
scanf("format", &variable);
```

Example:

```c
int age;

printf("Enter your age: ");
scanf("%d", &age);

printf("Age: %d\n", age);
```

Example interaction:

```text
Enter your age: 18
Age: 18
```

---

# 11. Why `&` is Used with `scanf()`

Consider:

```c
int age;
scanf("%d", &age);
```

`&age` means:

> the memory address of `age`

`scanf()` needs an address so that it can store the input value in that variable.

Conceptually:

```text
User enters:
     18
      │
      ▼
   scanf()
      │
      ▼
  &age
      │
      ▼
┌─────────────┐
│ age = 18    │
└─────────────┘
```

The address-of operator `&` and pointers will be explained in much more detail in `10-Pointers/`.

---

# 12. Reading an Integer

```c
#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}
```

---

# 13. Reading a Float

```c
#include <stdio.h>

int main(void)
{
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Temperature: %.2f\n", temperature);

    return 0;
}
```

For `scanf()`:

```text
float  → %f
```

---

# 14. Reading a Double

For `scanf()`, `double` uses `%lf`.

```c
#include <stdio.h>

int main(void)
{
    double value;

    printf("Enter a value: ");
    scanf("%lf", &value);

    printf("Value: %.4f\n", value);

    return 0;
}
```

Important distinction:

```text
printf():
double → %f

scanf():
double → %lf
```

---

# 15. Reading a Character

Use `%c`.

```c
#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Grade: %c\n", grade);

    return 0;
}
```

Notice the space:

```c
scanf(" %c", &grade);
       ^
```

The leading whitespace tells `scanf()` to skip whitespace characters such as spaces and newlines before reading the character.

---

# 16. Reading Multiple Values

Multiple variables can be read using one `scanf()` call.

```c
#include <stdio.h>

int main(void)
{
    int age;
    float percentage;

    printf("Enter age and percentage: ");
    scanf("%d %f", &age, &percentage);

    printf("Age: %d\n", age);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}
```

Example:

```text
Enter age and percentage: 18 92.5
Age: 18
Percentage: 92.50
```

---

# 17. Multiple Input Variables

Each variable needs its own address.

Correct:

```c
scanf("%d %d", &a, &b);
```

Incorrect:

```c
scanf("%d %d", a, b);
```

For ordinary variables, `scanf()` generally needs addresses because it must modify the variables.

---

# 18. `getchar()`

`getchar()` reads one character from standard input.

```c
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    printf("You entered: %c\n", ch);

    return 0;
}
```

Conceptually:

```text
Keyboard
   ↓
getchar()
   ↓
one character
```

---

# 19. `putchar()`

`putchar()` writes one character to standard output.

```c
#include <stdio.h>

int main(void)
{
    char ch = 'A';

    putchar(ch);
    putchar('\n');

    return 0;
}
```

Output:

```text
A
```

Equivalent idea:

```c
putchar('A');
```

is similar to:

```c
printf("%c", 'A');
```

---

# 20. `fgets()`

`fgets()` is used to read a line of text.

Basic form:

```c
fgets(buffer, size, stdin);
```

Example:

```c
#include <stdio.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);

    return 0;
}
```

Here:

```text
name
 ↓
character array
 ↓
stores input text
```

Arrays and strings are covered in more detail later.

---

# 21. Why `fgets()` Instead of `gets()`

You may encounter old C programs containing:

```c
gets(name);
```

Do not use it.

`gets()` was removed from the C standard because it cannot limit how much input is read, making it unsafe.

Use:

```c
fgets(name, sizeof(name), stdin);
```

instead.

---

# 22. Input Buffer

Input entered through the terminal is processed through the standard input stream.

A simplified model:

```text
Keyboard
   │
   ▼
Input Stream
   │
   ▼
Input Buffer
   │
   ▼
scanf() / getchar() / fgets()
   │
   ▼
Program
```

This becomes important when mixing different input functions.

For example:

```c
int age;
char name[50];

scanf("%d", &age);
fgets(name, sizeof(name), stdin);
```

After `scanf()` reads the integer, the newline from pressing Enter may remain in the input stream. `fgets()` can then encounter that newline immediately.

Understanding input buffering helps explain this behavior.

---

# 23. Common `scanf()` Problem

Consider:

```c
int age;
char grade;

scanf("%d", &age);
scanf("%c", &grade);
```

If the user enters:

```text
18↵
```

the newline may remain waiting in the input stream.

Then `%c` can read that newline instead of the intended character.

A common simple solution is:

```c
scanf("%d", &age);
scanf(" %c", &grade);
```

The leading whitespace before `%c` tells the format parser to skip whitespace.

---

# 25. `printf()` vs `scanf()`

| Function    | Purpose             |
| ----------- | ------------------- |
| `printf()`  | Output              |
| `scanf()`   | Formatted input     |
| `getchar()` | Read one character  |
| `putchar()` | Write one character |
| `fgets()`   | Read a line         |

Simple relationship:

```text
             C Program
             /       \
            /         \
        INPUT        OUTPUT
          │             │
     ┌────┴────┐     ┌──┴─────┐
     │         │     │        │
  scanf()  fgets() printf() putchar()
     │
  getchar()
```

---

# 26. Example — User Details

```c
#include <stdio.h>

int main(void)
{
    int age;
    float percentage;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Information\n");
    printf("----------------------\n");
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}
```

---

# 27. Example — Multiple Values

```c
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("First number : %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}
```

Input:

```text
10 20
```

Output:

```text
First number : 10
Second number: 20
```

---

# 28. Formatted Output Table

A combination of width and precision can create readable output.

```c
#include <stdio.h>

int main(void)
{
    printf("%-15s %10s\n", "Language", "Year");
    printf("%-15s %10d\n", "C", 1972);
    printf("%-15s %10d\n", "Python", 1991);
    printf("%-15s %10d\n", "C++", 1985);

    return 0;
}
```

Possible output:

```text
Language               Year
C                      1972
Python                 1991
C++                    1985
```

---

# 29. Common Mistakes

### Forgetting `&`

Incorrect:

```c
int age;

scanf("%d", age);
```

Correct:

```c
scanf("%d", &age);
```

---

### Wrong `scanf()` Format

Incorrect:

```c
double value;

scanf("%f", &value);
```

Correct:

```c
scanf("%lf", &value);
```

---

### Character Input

Instead of:

```c
scanf("%c", &grade);
```

when whitespace may be pending, commonly use:

```c
scanf(" %c", &grade);
```

---

### Mixing `scanf()` and `fgets()`

Be careful with:

```c
scanf("%d", &age);
fgets(name, sizeof(name), stdin);
```

The newline left by the previous input operation can affect `fgets()`.

---

### Using `gets()`

Avoid:

```c
gets(name);
```

Use:

```c
fgets(name, sizeof(name), stdin);
```

---

# 30. Input/Output Quick Reference

### Output

```c
printf("Hello\n");
```

### Integer

```c
printf("%d", number);
```

### Float

```c
printf("%f", value);
```

### Double

```c
printf("%f", value);
```

### Character

```c
printf("%c", ch);
```

### String

```c
printf("%s", name);
```

---

### Input

### Integer

```c
scanf("%d", &number);
```

### Float

```c
scanf("%f", &value);
```

### Double

```c
scanf("%lf", &value);
```

### Character

```c
scanf(" %c", &ch);
```

### Line of Text

```c
fgets(name, sizeof(name), stdin);
```

---

# 31. Input/Output Flow

```text
                  USER
                   │
                   ▼
                Keyboard
                   │
                   ▼
              Standard Input
                 stdin
                   │
        ┌──────────┼──────────┐
        ▼          ▼          ▼
     scanf()   getchar()    fgets()
        │          │          │
        └──────────┼──────────┘
                   ▼
               C PROGRAM
                   │
        ┌──────────┼──────────┐
        ▼                     ▼
     stdout                 stderr
        │                     │
        ▼                     ▼
     printf()             Error Output
        │
        ▼
      Screen
```

---

# 32. Important Format Differences

One of the most important things to remember:

```text
                printf()       scanf()
------------------------------------------------
int               %d             %d
float             %f             %f
double            %f             %lf
char              %c             %c
```

For `scanf()`, the format specifier tells the function what type of input it should convert and store.

---

# 33. Mini Reference

```c
#include <stdio.h>

int main(void)
{
    int number;
    float decimal;
    double precise;
    char character;
    char text[50];

    printf("Integer: ");
    scanf("%d", &number);

    printf("Float: ");
    scanf("%f", &decimal);

    printf("Double: ");
    scanf("%lf", &precise);

    printf("Character: ");
    scanf(" %c", &character);

    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    printf("\nResults\n");
    printf("%d\n", number);
    printf("%.2f\n", decimal);
    printf("%.4f\n", precise);
    printf("%c\n", character);
    printf("%s", text);

    return 0;
}
```

When combining `scanf()` and `fgets()` like this, remember that input-buffer behavior can require additional handling depending on what was entered. Don't treat this combined example as a universal input pattern.

---

# 34. Summary

```text
Input / Output
│
├── Output
│   ├── printf()
│   └── putchar()
│
├── Input
│   ├── scanf()
│   ├── getchar()
│   └── fgets()
│
├── Formatting
│   ├── Format specifiers
│   ├── Width
│   ├── Precision
│   └── Alignment
│
└── Important Concepts
    ├── stdin
    ├── stdout
    ├── stderr
    ├── Input buffer
    └── scanf() return value
```

Input and output are the bridge between a **static C program** and an **interactive program**. Once these concepts are combined with operators and expressions, programs can start performing calculations on user-provided data.
