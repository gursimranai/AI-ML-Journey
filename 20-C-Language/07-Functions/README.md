# 07 — Functions in C

Functions are one of the most important building blocks of C programming.

A function is a reusable block of code designed to perform a specific task. Functions allow large programs to be divided into smaller, organized, reusable components.

```text
Large Program
     │
     ├── Input
     ├── Validation
     ├── Calculation
     ├── Processing
     └── Output
```

Instead of putting everything inside `main()`, functions allow each responsibility to be separated.

---

## 1. What Is a Function?

A function is a named block of statements that performs a particular operation.

### Basic Syntax

```c
return_type function_name(parameters)
{
    // function body

    return value;
}
```

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Here:

```text
int        → Return type
add        → Function name
a, b       → Parameters
return     → Returns the result
```

---

## 2. Why Functions Are Used

Functions help with:

- Code reuse
- Modularity
- Readability
- Maintainability
- Debugging
- Testing
- Reducing code duplication
- Organizing large programs

Without functions:

```c
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
```

With a function:

```c
void greet(void)
{
    printf("Hello\n");
}

greet();
greet();
greet();
```

The logic is written once and reused.

---

## 3. Function Components

A function generally consists of:

```text
┌────────────────────────────────────┐
│        Function Definition         │
├────────────────────────────────────┤
│ Return Type                        │
│ Function Name                     │
│ Parameters                        │
│ Function Body                     │
│ Return Statement                  │
└────────────────────────────────────┘
```

Example:

```c
int multiply(int a, int b)
{
    return a * b;
}
```

---

## 4. Function Declaration

A function declaration tells the compiler about a function before it is used.

```c
int add(int a, int b);
```

This is commonly called a **function prototype**.

General syntax:

```c
return_type function_name(parameter_types);
```

Examples:

```c
int add(int, int);
float average(float, float);
void display(void);
```

---

## 5. Function Definition

The definition contains the actual implementation.

```c
int add(int a, int b)
{
    return a + b;
}
```

The definition tells the compiler what the function actually does.

---

## 6. Function Call

A function call executes a function.

```c
add(10, 20);
```

Complete example:

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int result = add(10, 20);

    printf("Result = %d\n", result);

    return 0;
}
```

Output:

```text
Result = 30
```

### Execution Flow

```text
main()
  │
  ▼
add(10, 20)
  │
  ▼
a + b
  │
  ▼
30
  │
  ▼
return 30
  │
  ▼
main() receives result
```

---

## 7. Functions Without Parameters

A function can work without receiving any input.

```c
void welcome(void)
{
    printf("Welcome to C!\n");
}
```

Call:

```c
welcome();
```

Using `void` inside the parameter list explicitly means the function accepts no parameters.

---

## 8. Functions With Parameters

Parameters allow data to be passed into a function.

```c
void print_number(int number)
{
    printf("%d\n", number);
}
```

Call:

```c
print_number(25);
```

Flow:

```text
25
 │
 ▼
print_number(number)
 │
 ▼
printf()
```

---

## 9. Multiple Parameters

Functions can accept multiple parameters.

```c
int multiply(int a, int b, int c)
{
    return a * b * c;
}
```

Call:

```c
int result = multiply(2, 3, 4);
```

Result:

```text
24
```

---

## 10. Parameters vs Arguments

These two terms are related but different.

### Parameters

Variables declared in the function definition:

```c
int add(int a, int b)
```

`a` and `b` are parameters.

### Arguments

Actual values passed during the function call:

```c
add(10, 20);
```

`10` and `20` are arguments.

```text
Definition
int add(int a, int b)
           ↑    ↑
       Parameters


Call
add(10, 20)
    ↑    ↑
 Arguments
```

---

## 11. Return Values

A function can return a value to the caller.

```c
int square(int number)
{
    return number * number;
}
```

Usage:

```c
int result = square(5);
```

Result:

```text
25
```

The `return` statement:

1. Ends the current function execution.
2. Sends a value back to the caller when the function has a non-void return type.

---

## 12. `void` Return Type

A function that does not return a value can use `void`.

```c
void display(void)
{
    printf("Hello\n");
}
```

Comparison:

```c
void display(void)
{
    printf("Hello\n");
}
```

versus:

```c
int get_number(void)
{
    return 10;
}
```

```text
void → no returned value
int  → integer returned
```

---

## 13. Different Return Types

Functions can return different data types.

```c
int get_number(void)
{
    return 10;
}
```

```c
float get_temperature(void)
{
    return 36.5f;
}
```

```c
double get_pi(void)
{
    return 3.141592653589793;
}
```

```c
char get_grade(void)
{
    return 'A';
}
```

---

## 14. Function Prototype

A prototype is particularly useful when the function definition appears after `main()`.

```c
#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int result = add(10, 20);

    printf("%d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

The compiler sees:

```c
int add(int a, int b);
```

before encountering:

```c
add(10, 20);
```

---

## 15. Local Variables

A variable declared inside a function or block generally has local scope.

```c
void calculate(void)
{
    int number = 10;

    printf("%d\n", number);
}
```

`number` belongs to that local scope.

```text
main()
 └── local variables

calculate()
 └── local variables
```

One function cannot normally access another function's local variable directly.

---

## 16. Global Variables

A global variable is declared outside functions.

```c
#include <stdio.h>

int number = 10;

void display(void)
{
    printf("%d\n", number);
}

int main(void)
{
    display();

    return 0;
}
```

Global variables have broader visibility than local variables, depending on scope and linkage.

For most beginner programs, prefer local variables and function parameters when practical.

---

## 17. Local vs Global Variables

| Feature | Local Variable | Global Variable |
|---|---|---|
| Declaration | Inside function/block | Outside functions |
| Scope | Limited | Wider |
| Lifetime | Usually automatic | Typically entire program |
| Access | Restricted | Broader |
| Recommended use | Common | Use carefully |

---

## 18. Pass by Value

C uses **pass by value** for function arguments.

When a normal variable is passed to a function, the function receives a copy of its value.

```c
#include <stdio.h>

void change_value(int number)
{
    number = 100;
}

int main(void)
{
    int value = 10;

    printf("Before function call: %d\n", value);

    change_value(value);

    printf("After function call: %d\n", value);

    return 0;
}
```

Output:

```text
Before function call: 10
After function call: 10
```

Concept:

```text
value = 10
   │
   │ copy of value
   ▼
number = 10
   │
   ▼
number = 100
```

The original `value` remains unchanged.

---

## 19. Pass by Reference in C

### Important C Concept

C does **not** have true pass-by-reference as a built-in language mechanism.

Instead, C can achieve **reference-like behavior by passing a pointer to an object**.

Example:

```c
#include <stdio.h>

void change_value(int *number)
{
    *number = 100;
}

int main(void)
{
    int value = 10;

    printf("Before function call: %d\n", value);

    change_value(&value);

    printf("After function call: %d\n", value);

    return 0;
}
```

Output:

```text
Before function call: 10
After function call: 100
```

### How It Works

```text
value
  │
  │ &value
  ▼
change_value(&value)
  │
  ▼
int *number
  │
  │ points to value
  ▼
*number = 100
  │
  ▼
Original value = 100
```

The function receives a **copy of the address**.

Because that address points to the original variable, dereferencing the pointer allows the function to modify the original object.

### Important Terminology

Technically:

```text
C
│
├── Arguments are passed by value
│
└── Pointer itself is passed by value
       │
       └── Pointer contains address of original object
```

So instead of saying that C has built-in pass-by-reference, it is more accurate to say:

> **C uses pointers to provide reference-like behavior.**

---

## 20. Pass by Value vs Pointer-Based Reference-Like Behavior

| Feature | Pass by Value | Pointer-Based |
|---|---|---|
| Function receives | Copy of value | Copy of address |
| Uses pointer | No | Yes |
| Can modify original object | No | Yes |
| Example call | `change(value)` | `change(&value)` |
| Example parameter | `int number` | `int *number` |
| Related concept | Basic functions | Pointers |

### Visual Comparison

```text
PASS BY VALUE

value = 10
   │
   ▼
copy = 10
   │
   ▼
change copy
   │
   ▼
original remains 10
```

```text
POINTER-BASED

value = 10
   │
   │ address
   ▼
pointer → value
   │
   ▼
*pointer = 100
   │
   ▼
original becomes 100
```

This concept is the bridge between **Functions** and **Pointers**.

---

## 21. Functions Calling Other Functions

A function can call another function.

```c
int square(int number)
{
    return number * number;
}

int calculate(int number)
{
    return square(number) + 10;
}
```

Flow:

```text
main()
  │
  ▼
calculate(5)
  │
  ▼
square(5)
  │
  ▼
25
  │
  ▼
25 + 10
  │
  ▼
35
```

---

## 22. Recursion

Recursion occurs when a function calls itself.

```c
void count_down(int number)
{
    if (number == 0)
    {
        return;
    }

    printf("%d\n", number);

    count_down(number - 1);
}
```

Call:

```c
count_down(5);
```

Output:

```text
5
4
3
2
1
```

A recursive function normally requires:

```text
Base Case
    +
Recursive Case
```

---

## 23. Base Case

The base case stops recursion.

```c
if (number == 0)
{
    return;
}
```

Without a suitable stopping condition, recursive calls can continue until the program exhausts available stack space.

---

## 24. Recursive Factorial

Factorial:

```text
5! = 5 × 4 × 3 × 2 × 1
```

Recursive implementation:

```c
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

Execution:

```text
factorial(5)
      │
      ▼
5 × factorial(4)
      │
      ▼
4 × factorial(3)
      │
      ▼
3 × factorial(2)
      │
      ▼
2 × factorial(1)
      │
      ▼
1
```

Result:

```text
120
```

---

## 25. Scope and Lifetime

### Scope

Scope describes **where** a variable can be accessed.

### Lifetime

Lifetime describes **how long** the variable exists during execution.

Example:

```c
void example(void)
{
    int value = 10;

    printf("%d\n", value);
}
```

`value` has local scope.

Understanding scope and lifetime becomes especially important when working with pointers, arrays, structures, and dynamic memory.

---

## 26. Functions With Loops

Functions can contain loops.

```c
void print_numbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}
```

This combines:

```text
Function
   +
Loop
   =
Reusable Repeated Processing
```

---

## 27. Functions With Conditions

Functions can contain conditional logic.

```c
int is_even(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }

    return 0;
}
```

Usage:

```c
if (is_even(10))
{
    printf("Even\n");
}
```

This turns a piece of decision logic into a reusable function.

---

## 28. Modular Programming

Functions form the foundation of modular programming.

Instead of:

```text
One Huge main()
```

Use:

```text
Program
 │
 ├── Input
 ├── Validation
 ├── Processing
 ├── Calculation
 └── Output
```

Example:

```c
int calculate_total(int a, int b)
{
    return a + b;
}

void display_result(int result)
{
    printf("Total = %d\n", result);
}
```

Each function has a focused responsibility.

---

## 29. Functions and DSA

Functions become extremely important when learning Data Structures and Algorithms.

Common DSA functions include:

```text
search()
sort()
swap()
insert()
delete()
reverse()
traverse()
```

Example:

```c
int linear_search(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }

    return -1;
}
```

The search logic is isolated inside a reusable function.

---

## 30. Functions and AI/ML

Functions provide the basic programming structure used in larger AI/ML systems.

A simplified pipeline:

```text
Raw Data
   │
   ▼
load_data()
   │
   ▼
preprocess()
   │
   ▼
extract_features()
   │
   ▼
predict()
   │
   ▼
evaluate()
   │
   ▼
Result
```

Real AI/ML systems use larger libraries, modules, classes, and frameworks, but the principle of separating responsibilities remains important.

---

## 31. Function Naming

Use descriptive names.

### Good

```c
calculate_average();
find_maximum();
print_report();
is_prime();
calculate_factorial();
```

### Poor

```c
do_it();
process();
abc();
function1();
```

A good function name should communicate its purpose.

---

## 32. Function Design

When designing a function, consider:

```text
What does it do?
       │
       ▼
What input does it need?
       │
       ▼
What should it return?
       │
       ▼
Can it be reused?
       │
       ▼
Does it have one clear responsibility?
```

Example:

```c
int add(int a, int b)
```

```text
Task           → Addition
Input          → Two integers
Return         → Integer
Reusable       → Yes
Responsibility → One operation
```

---

## 33. Common Mistakes

### Forgetting the Prototype

If a function is used before its definition, provide a declaration.

```c
int add(int a, int b);
```

### Forgetting `return`

Incorrect:

```c
int add(int a, int b)
{
    a + b;
}
```

Correct:

```c
int add(int a, int b)
{
    return a + b;
}
```

### Incorrect Return Type

Incorrect:

```c
int get_temperature(void)
{
    return 36.5f;
}
```

Better:

```c
float get_temperature(void)
{
    return 36.5f;
}
```

### Wrong Number of Arguments

Function:

```c
int add(int a, int b)
{
    return a + b;
}
```

Incorrect:

```c
add(10);
```

Correct:

```c
add(10, 20);
```

### Confusing `&` and `*`

For pointer-based modification:

```c
change_value(&value);
```

Inside the function:

```c
void change_value(int *number)
{
    *number = 100;
}
```

Remember:

```text
& → address of
* → dereference / value at address
```

---

## 34. Function Organization

A clean C program can follow this structure:

```c
#include <stdio.h>

/* Function prototypes */
int add(int a, int b);
void display_result(int result);

int main(void)
{
    int result;

    result = add(10, 20);

    display_result(result);

    return 0;
}

/* Function definitions */

int add(int a, int b)
{
    return a + b;
}

void display_result(int result)
{
    printf("Result = %d\n", result);
}
```

General structure:

```text
Header Files
     ↓
Function Prototypes
     ↓
main()
     ↓
Function Definitions
```

---

## 35. Function Anatomy

Consider:

```c
int add(int a, int b)
{
    return a + b;
}
```

```text
int
│
└── Return Type

add
│
└── Function Name

(int a, int b)
│
└── Parameter List

{
    return a + b;
}
│
└── Function Body
```

---

## 36. Compilation

Compile a function example using GCC:

```bash
gcc 01-function-basics.c -o 01-function-basics
```

Recommended warning flags:

```bash
gcc -Wall -Wextra -Wpedantic 01-function-basics.c -o 01-function-basics
```

Run on Linux/macOS:

```bash
./01-function-basics
```

On Windows:

```bash
01-function-basics.exe
```

---

## 37. Folder Structure

```text
07-Functions/
│
├── README.md
│
├── examples/
│   ├── 01-function-basics.c
│   ├── 02-function-declaration.c
│   ├── 03-function-definition.c
│   ├── 04-function-call.c
│   ├── 05-function-with-parameters.c
│   ├── 06-function-with-return-value.c
│   ├── 07-multiple-parameters.c
│   ├── 08-void-function.c
│   ├── 09-local-variables.c
│   ├── 10-global-variables.c
│   ├── 11-pass-by-value.c
│   ├── 12-pass-by-reference.c
│   ├── 13-recursion.c
│   ├── 14-function-prototype.c
│   └── 15-scope-and-lifetime.c
│
├── practice/
│   ├── 01-add-two-numbers.c
│   ├── 02-largest-of-two.c
│   ├── 03-even-odd-function.c
│   ├── 04-factorial-function.c
│   ├── 05-prime-function.c
│   ├── 06-power-function.c
│   ├── 07-reverse-number-function.c
│   └── 08-calculator-functions.c
│
└── mini-project/
    ├── 01-calculator.c
    └── 02-student-management.c
```

---

## 38. Quick Reference

### Function Declaration

```c
int add(int a, int b);
```

### Function Definition

```c
int add(int a, int b)
{
    return a + b;
}
```

### Function Call

```c
int result = add(10, 20);
```

### No Parameters

```c
void display(void)
{
    printf("Hello\n");
}
```

### Parameters

```c
void display_number(int number)
{
    printf("%d\n", number);
}
```

### Return Value

```c
int square(int number)
{
    return number * number;
}
```

### Pass by Value

```c
void change(int number)
{
    number = 100;
}

change(value);
```

### Pointer-Based Reference-Like Behavior

```c
void change(int *number)
{
    *number = 100;
}

change(&value);
```

### Recursion

```c
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
```

---

## 39. Functions → Pointers Connection

The most important transition from this folder is:

```text
Functions
    │
    ├── Parameters
    │
    ├── Return Values
    │
    ├── Pass by Value
    │
    └── Pointer-Based Reference-Like Behavior
                    │
                    ▼
                Pointers
                    │
                    ├── Addresses
                    ├── Dereferencing
                    ├── Arrays
                    ├── Strings
                    ├── Dynamic Memory
                    └── Data Structures
```

Understanding pointer-based function arguments makes the upcoming **Pointers** section much easier to understand.

---

## 40. Key Concepts

```text
Function
   │
   ├── Declaration
   ├── Definition
   ├── Function Call
   ├── Parameters
   ├── Arguments
   ├── Return Values
   ├── void
   ├── Local Variables
   ├── Global Variables
   ├── Scope
   ├── Lifetime
   ├── Pass by Value
   ├── Pointer-Based Reference-Like Behavior
   ├── Function Composition
   └── Recursion
```

Functions are the foundation for writing modular C programs and become essential when moving into arrays, pointers, data structures, algorithms, and larger software projects.