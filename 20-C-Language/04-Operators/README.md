# 04 — Operators

Operators are symbols that tell the C compiler to **perform an operation on one or more values**.

```text
Operand   Operator   Operand
   10         +          20
    \          |          /
     \         |         /
        Expression
            │
            ▼
           30
```

Example:

```c
int result = 10 + 20;
```

Here:

* `10` → operand
* `+` → operator
* `20` → operand
* `10 + 20` → expression

---

# 1. Types of Operators in C

C provides several categories of operators:

| Category              | Operators         |
| --------------------- | ----------------- |
| Arithmetic            | `+ - * / %`       |
| Assignment            | `=`               |
| Compound Assignment   | `+= -= *= /= %=`  |
| Relational            | `== != > < >= <=` |
| Logical               | `&& \|\| !`       |
| Increment / Decrement | `++ --`           |
| Unary                 | `+ - ! ~ & *`     |
| Bitwise               | `& \| ^ ~ << >>`  |
| Conditional/Ternary           | `?:`              |
| `sizeof`              | `sizeof`          |
| Comma                 | `,`               |

---

# 2. Arithmetic Operators

Arithmetic operators perform mathematical calculations.

| Operator | Meaning        | Example |
| -------- | -------------- | ------- |
| `+`      | Addition       | `a + b` |
| `-`      | Subtraction    | `a - b` |
| `*`      | Multiplication | `a * b` |
| `/`      | Division       | `a / b` |
| `%`      | Remainder      | `a % b` |

Example:

```c
int a = 10;
int b = 3;

printf("%d\n", a + b);
printf("%d\n", a - b);
printf("%d\n", a * b);
printf("%d\n", a / b);
printf("%d\n", a % b);
```

Output:

```text
13
7
30
3
1
```

---

# 3. Addition `+`

The `+` operator adds values.

```c
int a = 10;
int b = 20;

int result = a + b;
```

```text
10 + 20 = 30
```

It can also be used with floating-point values:

```c
float a = 10.5f;
float b = 2.5f;

float result = a + b;
```

---

# 4. Subtraction `-`

The `-` operator subtracts one value from another.

```c
int a = 20;
int b = 8;

int result = a - b;
```

```text
20 - 8 = 12
```

The unary `-` can also make a value negative:

```c
int number = 10;
int negative = -number;
```

---

# 5. Multiplication `*`

The `*` operator performs multiplication.

```c
int length = 10;
int width = 5;

int area = length * width;
```

```text
10 × 5 = 50
```

---

# 6. Division `/`

The `/` operator performs division.

```c
int a = 10;
int b = 2;

int result = a / b;
```

Result:

```text
5
```

## Integer Division

When both operands are integers, C performs integer division.

```c
int result = 7 / 2;
```

Result:

```text
3
```

The decimal part is discarded.

To obtain a decimal result:

```c
double result = 7.0 / 2.0;
```

Result:

```text
3.5
```

Another method:

```c
double result = (double)7 / 2;
```

---

# 7. Modulo `%`

The `%` operator gives the **remainder** of integer division.

```c
int result = 10 % 3;
```

Result:

```text
1
```

Because:

```text
10 ÷ 3 = 3 remainder 1
```

Another example:

```c
17 % 5
```

```text
17 ÷ 5 = 3 remainder 2
```

Therefore:

```text
17 % 5 = 2
```

The modulo operator is commonly used for:

* checking even/odd numbers
* extracting digits
* cyclic calculations
* determining remainders

Example:

```c
int number = 8;

printf("%d\n", number % 2);
```

Output:

```text
0
```

---

# 8. Assignment Operator `=`

The assignment operator stores a value in a variable.

```c
int age = 18;
```

Conceptually:

```text
18
 │
 ▼
age
```

Another example:

```c
int number;

number = 50;
```

The value `50` is assigned to `number`.

---

# 9. Assignment Is Not Comparison

This is an important distinction.

Assignment:

```c
a = 10;
```

Comparison:

```c
a == 10;
```

They have completely different meanings.

```text
=   → assign
==  → compare
```

This becomes especially important when writing conditions.

---

# 10. Compound Assignment Operators

Compound assignment combines an operation with assignment.

| Operator | Equivalent  |
| -------- | ----------- |
| `+=`     | `a = a + b` |
| `-=`     | `a = a - b` |
| `*=`     | `a = a * b` |
| `/=`     | `a = a / b` |
| `%=`     | `a = a % b` |

Example:

```c
int number = 10;

number += 5;
```

Equivalent to:

```c
number = number + 5;
```

Result:

```text
15
```

Example:

```c
int number = 10;

number *= 3;
```

Result:

```text
30
```

---

# 11. Relational Operators

Relational operators compare two values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

Example:

```c
int a = 10;
int b = 20;

printf("%d\n", a < b);
```

Output:

```text
1
```

In C:

```text
1 → true
0 → false
```

---

# 12. Equality `==`

The `==` operator checks whether two values are equal.

```c
int a = 10;
int b = 10;

printf("%d\n", a == b);
```

Result:

```text
1
```

If:

```c
int a = 10;
int b = 20;
```

then:

```c
a == b
```

produces:

```text
0
```

---

# 13. Not Equal `!=`

Checks whether two values are different.

```c
int a = 10;
int b = 20;

printf("%d\n", a != b);
```

Output:

```text
1
```

---

# 14. Greater Than and Less Than

```c
int a = 20;
int b = 10;

printf("%d\n", a > b);
printf("%d\n", a < b);
```

Output:

```text
1
0
```

---

# 15. Greater Than or Equal / Less Than or Equal

```c
int age = 18;

printf("%d\n", age >= 18);
printf("%d\n", age <= 18);
```

Both expressions are true.

---

# 16. Logical Operators

Logical operators combine or modify conditions.

| Operator | Meaning |
| :--- | :--- |
| `&&` | Logical AND |
| `\|\|` | Logical OR |
| `!` | Logical NOT |

---

# 17. Logical AND `&&`

`&&` is true only when **both conditions are true**.

```text
A     B     A && B
------------------
0     0       0
0     1       0
1     0       0
1     1       1
```

Example:

```c
int age = 20;
int has_id = 1;

printf("%d\n", age >= 18 && has_id == 1);
```

Output:

```text
1
```

---

# 18. Logical OR `||`

`||` is true when **at least one condition is true**.

```text
A     B     A || B
------------------
0     0       0
0     1       1
1     0       1
1     1       1
```

Example:

```c
int day = 6;

printf("%d\n", day == 6 || day == 7);
```

Output:

```text
1
```

---

# 19. Logical NOT `!`

`!` reverses a logical value.

```text
!1 → 0
!0 → 1
```

Example:

```c
int value = 1;

printf("%d\n", !value);
```

Output:

```text
0
```

Another example:

```c
int value = 0;

printf("%d\n", !value);
```

Output:

```text
1
```

---

# 20. Increment Operator `++`

`++` increases a value by 1.

```c
int number = 10;

number++;
```

Now:

```text
number = 11
```

Equivalent to:

```c
number = number + 1;
```

---

# 21. Decrement Operator `--`

`--` decreases a value by 1.

```c
int number = 10;

number--;
```

Now:

```text
number = 9
```

Equivalent to:

```c
number = number - 1;
```

---

# 22. Prefix Increment

Prefix:

```c
++number;
```

The value is increased before it is used in the expression.

Example:

```c
int number = 5;

printf("%d\n", ++number);
```

Output:

```text
6
```

---

# 23. Postfix Increment

Postfix:

```c
number++;
```

The original value is used first, then the variable is increased.

```c
int number = 5;

printf("%d\n", number++);
printf("%d\n", number);
```

Output:

```text
5
6
```

---

# 24. Prefix vs Postfix

```text
++a
 │
 └── increment first, then use


a++
 │
 └── use first, then increment
```

Example:

```c
int a = 5;
int b = ++a;
```

Result:

```text
a = 6
b = 6
```

But:

```c
int a = 5;
int b = a++;
```

Result:

```text
a = 6
b = 5
```

---

# 25. Unary Operators

A unary operator works with one operand.

Examples:

```c
-a
+a
!a
~a
```

Some unary operators become especially important when learning pointers:

```c
&a
*p
```

For now, understand that unary means:

```text
Operator + One Operand
```

Example:

```c
int number = 10;

printf("%d\n", -number);
```

Output:

```text
-10
```

---

# 26. Bitwise Operators

Bitwise operators work directly with individual bits.

| Operator | Meaning     |            |
| -------- | ----------- | ---------- |
| `&`      | Bitwise AND |            |
| `        | `           | Bitwise OR |
| `^`      | Bitwise XOR |            |
| `~`      | Bitwise NOT |            |
| `<<`     | Left shift  |            |
| `>>`     | Right shift |            |

Example:

```c
int a = 5;
int b = 3;

printf("%d\n", a & b);
```

Binary representation:

```text
5 = 0101
3 = 0011
---------
& = 0001
```

Result:

```text
1
```

Bitwise programming becomes particularly useful for:

* low-level programming
* embedded systems
* operating systems
* performance-oriented code
* flags and masks
* binary manipulation

---

# 27. Bitwise AND `&`

Performs AND on every corresponding bit.

```text
  0101
& 0011
------
  0001
```

Result:

```text
1
```

---

# 28. Bitwise OR `|`

```text
  0101
| 0011
------
  0111
```

Result:

```text
7
```

---

# 29. Bitwise XOR `^`

XOR produces `1` when the corresponding bits are different.

```text
  0101
^ 0011
------
  0110
```

Result:

```text
6
```

---

# 30. Bitwise NOT `~`

`~` flips every bit.

```text
0 → 1
1 → 0
```

Example:

```c
int number = 5;

printf("%d\n", ~number);
```

The exact decimal result depends on the integer representation, so bitwise NOT is best understood at the binary level.

---

# 31. Left Shift `<<`

Moves bits toward the left.

```c
int number = 5;

int result = number << 1;
```

Binary:

```text
5       = 0101
5 << 1  = 1010
```

Result:

```text
10
```

For suitable nonnegative values, a left shift by one position corresponds to multiplying by 2.

---

# 32. Right Shift `>>`

Moves bits toward the right.

```c
int number = 10;

int result = number >> 1;
```

Binary:

```text
10      = 1010
10 >> 1 = 0101
```

Result:

```text
5
```

The behavior of right-shifting negative signed integers is implementation-defined, so bit-shift examples are best kept with nonnegative values at this stage.

---

# 33. Conditional Operator `?:`

The conditional operator is also called the **ternary operator** because it works with three operands.

Syntax:

```c
condition ? value_if_true : value_if_false;
```

Example:

```c
int age = 18;

int result = age >= 18 ? 1 : 0;
```

Equivalent idea:

```text
condition
    │
 ┌──┴──┐
true  false
 │      │
 ▼      ▼
value  value
```

Example:

```c
int a = 10;
int b = 20;

int maximum = (a > b) ? a : b;
```

The conditional operator becomes especially useful after learning `if-else`.

---

# 34. `sizeof` Operator

`sizeof` determines the size of a type or object in bytes.

```c
int number;

printf("%zu\n", sizeof(number));
```

You can also use:

```c
printf("%zu\n", sizeof(int));
```

Example:

```c
printf("int    : %zu bytes\n", sizeof(int));
printf("float  : %zu bytes\n", sizeof(float));
printf("double : %zu bytes\n", sizeof(double));
printf("char   : %zu bytes\n", sizeof(char));
```

`sizeof` returns a value of type `size_t`, which is why `%zu` is used with `printf()`.

---

# 35. Comma Operator

The comma operator evaluates expressions from left to right.

Example:

```c
int a, b;

a = 10, b = 20;
```

Now:

```text
a = 10
b = 20
```

The comma is also commonly used simply as a separator:

```c
int a = 10, b = 20;
```

The comma operator itself is less commonly needed in beginner programs.

---

# 36. Operator Precedence

When an expression contains multiple operators, C follows rules that determine which operation is performed first.

Example:

```c
int result = 10 + 5 * 2;
```

Multiplication happens first:

```text
5 × 2 = 10

10 + 10 = 20
```

Therefore:

```text
result = 20
```

Not:

```text
30
```

---

# 37. Parentheses

Use parentheses when you want to make the intended order explicit.

```c
int result = (10 + 5) * 2;
```

Now:

```text
10 + 5 = 15
15 × 2 = 30
```

Parentheses improve readability and reduce mistakes.

---

# 38. Simplified Precedence

A simplified beginner-friendly order is:

```text
Highest
   │
   ▼
()
++
--
!
~ 
*
/
%
+
-
< > <= >=
== !=
&&
||
?:
= += -= *= /= %=
   │
   ▼
Lowest
```

This is a simplified view. C's complete precedence table contains additional operators and details.

---

# 39. Operator Associativity

When operators have the same precedence, associativity determines how they are grouped.

For example:

```c
int result = 20 - 5 - 3;
```

Subtraction is left-associative:

```text
(20 - 5) - 3
```

Therefore:

```text
12
```

Assignment operators are generally right-associative:

```c
a = b = 10;
```

This is interpreted as:

```text
a = (b = 10)
```

---

# 40. Integer Division and Modulo

These two operators are especially important.

```c
int a = 17;
int b = 5;

printf("Division : %d\n", a / b);
printf("Remainder: %d\n", a % b);
```

Output:

```text
Division : 3
Remainder: 2
```

Because:

```text
17 = (5 × 3) + 2
```

This concept becomes extremely useful in:

* digit extraction
* even/odd checking
* number manipulation
* DSA
* competitive programming

---

# 41. Type Conversion in Expressions

Operators interact with different data types.

Example:

```c
int a = 5;
double b = 2.0;

double result = a + b;
```

C converts the integer to a compatible floating-point type for the operation.

```text
int
 │
 ▼
converted
 │
 ▼
double
 │
 ▼
operation
```

---

# 42. Explicit Casting

You can explicitly convert a value using a cast.

```c
int a = 5;
int b = 2;

double result = (double)a / b;
```

Without the cast:

```c
double result = a / b;
```

The integer division happens first.

```text
5 / 2 = 2
```

With the cast:

```text
(double)5 / 2 = 2.5
```

---

# 43. Short-Circuit Evaluation

Logical operators can stop evaluating as soon as the result is known.

For `&&`:

```text
false && anything
      ↓
     false
```

For `||`:

```text
true || anything
     ↓
    true
```

Example:

```c
int age = 15;

if (age >= 18 && age < 60)
{
    ...
}
```

If the first condition is false, the second condition may not need to be evaluated.

This becomes important when you start using conditional statements.

---

# 44. Common Operator Mistakes

### Mistake 1 — Assignment instead of comparison

Wrong for comparison:

```c
if (age = 18)
```

Comparison:

```c
if (age == 18)
```

---

### Mistake 2 — Integer division

```c
int result = 5 / 2;
```

Result:

```text
2
```

For decimal division:

```c
double result = 5.0 / 2.0;
```

Result:

```text
2.5
```

---

### Mistake 3 — Confusing `%`

In C:

```c
10 % 3
```

means remainder, not percentage.

Result:

```text
1
```

---

### Mistake 4 — Forgetting precedence

Instead of relying on memory:

```c
result = a + b * c;
```

make complex expressions clearer:

```c
result = a + (b * c);
```

---

### Mistake 5 — Confusing `&` and `&&`

```text
&   → bitwise AND / address-of depending on context

&&  → logical AND
```

They are different operators.

---

### Mistake 6 — Confusing `|` and `||`

```text
|   → bitwise OR

||  → logical OR
```

---

# 45. Arithmetic vs Logical vs Bitwise

These operators may look similar but perform different jobs.

| Operation       | Operator | Works with      |
| --------------- | -------- | --------------- |
| Arithmetic AND? | —        | —               |
| Logical AND     | `&&`     | Conditions      |
| Bitwise AND     | `&`      | Individual bits |

Similarly:

```text
|| → logical OR
|  → bitwise OR
```

Example:

```text
Logical:
5 > 2 && 10 > 3

Bitwise:
5 & 3
```

---

# 46. Operators and Expressions

An expression combines values, variables, and operators.

Example:

```c
int result = (a + b) * 2;
```

Breakdown:

```text
(a + b) * 2
│   │   │
│   │   └── operand
│   └────── operator
└────────── expression
```

Expressions produce values that can be:

* assigned to variables
* printed
* compared
* passed to functions
* used in conditions

---

# 47. Example — Basic Calculation

```c
#include <stdio.h>

int main(void)
{
    int a = 20;
    int b = 6;

    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %d\n", a / b);
    printf("Remainder      : %d\n", a % b);

    return 0;
}
```

---

# 48. Example — Comparison

```c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);

    return 0;
}
```

---

# 49. Operator Reference

## Arithmetic

```text
+    Addition
-    Subtraction
*    Multiplication
/    Division
%    Remainder
```

## Assignment

```text
=    Assignment
+=   Add and assign
-=   Subtract and assign
*=   Multiply and assign
/=   Divide and assign
%=   Remainder and assign
```

## Relational

```text
==   Equal
!=   Not equal
>    Greater than
<    Less than
>=   Greater than or equal
<=   Less than or equal
```

## Logical

```text
&&   AND
||   OR
!    NOT
```

## Increment / Decrement

```text
++   Increase by 1
--   Decrease by 1
```

## Bitwise

```text
&    AND
|    OR
^    XOR
~    NOT
<<   Left shift
>>   Right shift
```

## Other

```text
?:   Conditional
sizeof
,    Comma
```

---

# 50. Operator Cheat Sheet

```text
┌─────────────────────────────────────────┐
│              C OPERATORS                 │
├─────────────────────────────────────────┤
│ Arithmetic      +  -  *  /  %            │
│ Assignment      =  += -= *= /= %=        │
│ Relational      == != > < >= <=          │
│ Logical         && || !                  │
│ Increment       ++                       │
│ Decrement       --                       │
│ Bitwise         & | ^ ~ << >>            │
│ Conditional     ?:                       │
│ Size            sizeof                   │
│ Comma           ,                        │
└─────────────────────────────────────────┘
```

---

# 51. Operators in Programming

Operators form the foundation of program logic.

```text
Input
  │
  ▼
Variables
  │
  ▼
Operators
  │
  ├── Calculate
  ├── Compare
  ├── Combine conditions
  ├── Modify values
  └── Manipulate bits
  │
  ▼
Result
```

Once operators are combined with:

```text
Input + Operators + Conditions
```

you can build much more interactive programs.

---

# 52. Connection to DSA and AI/ML

Operators are fundamental to almost every programming task.

### DSA

Operators are used for:

* array indexing
* comparisons
* loop conditions
* mathematical calculations
* bit manipulation
* sorting
* searching
* complexity-related calculations

### AI/ML

Operators appear in:

```text
Data
 │
 ▼
Mathematical Operations
 │
 ▼
Vectors / Matrices
 │
 ▼
Model Calculations
 │
 ▼
Predictions
```

For example, mathematical expressions inside machine-learning algorithms ultimately depend on operations such as:

```text
+   -   *   /
```

while logical and comparison operators are heavily used in preprocessing, validation, filtering, and program control.

---

# 53. Summary

```text
Operators
│
├── Arithmetic
│   ├── +
│   ├── -
│   ├── *
│   ├── /
│   └── %
│
├── Assignment
│   ├── =
│   ├── +=
│   ├── -=
│   ├── *=
│   ├── /=
│   └── %=
│
├── Relational
│   ├── ==
│   ├── !=
│   ├── >
│   ├── <
│   ├── >=
│   └── <=
│
├── Logical
│   ├── &&
│   ├── ||
│   └── !
│
├── Increment / Decrement
│   ├── ++
│   └── --
│
├── Bitwise
│   ├── &
│   ├── |
│   ├── ^
│   ├── ~
│   ├── <<
│   └── >>
│
└── Other
    ├── ?:
    ├── sizeof
    └── ,
```

Operators are the **core building blocks of expressions in C**. Understanding how they work, how they interact with data types, and how precedence affects expressions is essential before moving into conditional statements and loops.
