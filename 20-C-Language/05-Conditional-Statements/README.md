# Conditional Statements in C

Conditional statements allow a C program to make decisions based on whether a condition is true or false.

They are the foundation of **decision-making logic** in programming and are heavily used in algorithms, DSA, system programming, validation, and AI/ML preprocessing logic.

---

## 1. What Are Conditional Statements?

A conditional statement evaluates a condition and executes code depending on the result.

```text
             Condition
                 |
        +--------+--------+
        |                 |
      TRUE              FALSE
        |                 |
   Execute A          Execute B
```

Example:

```c
int age = 20;

if (age >= 18)
{
    printf("Adult");
}
```

Here:

```text
age >= 18
   ↓
  TRUE
   ↓
Execute printf()
```

In C:

* `0` → false
* Any non-zero value → true

---

# 2. Types of Conditional Statements

C provides several ways to implement decision-making:

| Statement                 | Purpose                               |
| ------------------------- | ------------------------------------- |
| `if`                      | Execute code when a condition is true |
| `if-else`                 | Choose between two paths              |
| `else-if`                 | Check multiple conditions             |
| Nested `if`               | Put one condition inside another      |
| `switch`                  | Select from multiple fixed cases      |
| Conditional operator `?:` | Compact two-way decision              |

---

# 3. `if` Statement

The `if` statement executes a block only when its condition is true.

### Syntax

```c
if (condition)
{
    // code
}
```

### Example

```c
int age = 20;

if (age >= 18)
{
    printf("You are an adult.\n");
}
```

### Flow

```text
       Start
         |
     Check condition
       /       \
    TRUE       FALSE
      |           |
   Execute       Skip
      \           /
          End
```

---

# 4. `if-else` Statement

Use `if-else` when there are two possible paths.

### Syntax

```c
if (condition)
{
    // true block
}
else
{
    // false block
}
```

### Example

```c
int number = 10;

if (number > 0)
{
    printf("Positive\n");
}
else
{
    printf("Not positive\n");
}
```

### Flow

```text
          Condition
          /       \
       TRUE       FALSE
        |           |
     Block A      Block B
        \           /
             End
```

---

# 5. `else-if` Ladder

Use `else-if` when multiple conditions need to be checked.

### Syntax

```c
if (condition1)
{
    // code
}
else if (condition2)
{
    // code
}
else if (condition3)
{
    // code
}
else
{
    // default code
}
```

### Example

```c
int marks = 85;

if (marks >= 90)
{
    printf("Grade A+\n");
}
else if (marks >= 80)
{
    printf("Grade A\n");
}
else if (marks >= 70)
{
    printf("Grade B\n");
}
else
{
    printf("Grade C or below\n");
}
```

Conditions are checked from **top to bottom**.

Once a condition is true, the remaining conditions are skipped.

---

# 6. Nested `if`

An `if` statement can be placed inside another `if`.

### Example

```c
int age = 20;
int has_id = 1;

if (age >= 18)
{
    if (has_id)
    {
        printf("Entry allowed.\n");
    }
}
```

### Structure

```text
if (age >= 18)
        |
       TRUE
        |
   if (has_id)
        |
       TRUE
        |
 Entry allowed
```

Nested conditions are useful when the second condition only matters after the first condition has been satisfied.

---

# 7. Multiple Conditions

Logical operators can combine multiple conditions.

## AND `&&`

Both conditions must be true.

```c
if (age >= 18 && has_id == 1)
{
    printf("Allowed\n");
}
```

```text
Condition A ── TRUE ──┐
                      ├──> TRUE
Condition B ── TRUE ──┘
```

If either condition is false, the complete `&&` expression is false.

---

## OR `||`

At least one condition must be true.

```c
if (age >= 18 || has_permission == 1)
{
    printf("Allowed\n");
}
```

---

## NOT `!`

Reverses a logical result.

```c
if (!is_logged_in)
{
    printf("Please login.\n");
}
```

| Expression | Result |
| ---------- | -----: |
| `!0`       |    `1` |
| `!1`       |    `0` |
| `!5`       |    `0` |

---

# 8. Truth Values in C

C does not require conditions to literally contain `true` or `false`.

The basic rule is:

```text
0       → FALSE
non-zero → TRUE
```

Example:

```c
if (10)
{
    printf("True\n");
}
```

This executes because `10` is non-zero.

Example:

```c
if (0)
{
    printf("This will not execute.\n");
}
```

This does not execute because `0` represents false.

---

# 9. Relational Operators in Conditions

Conditional statements frequently use relational operators.

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

if (a < b)
{
    printf("a is smaller.\n");
}
```

---

# 10. `==` vs `=`

One of the most common beginner mistakes is confusing assignment and comparison.

### Assignment

```c
x = 10;
```

Stores `10` in `x`.

### Comparison

```c
x == 10
```

Checks whether `x` is equal to `10`.

Correct:

```c
if (x == 10)
{
    printf("x is 10\n");
}
```

Incorrect:

```c
if (x = 10)
{
    printf("x is 10\n");
}
```

The second statement performs an assignment rather than an equality comparison.

---

# 11. `if-else` with Logical Operators

Conditions can be combined to create more complex decisions.

```c
int age = 20;
int marks = 85;

if (age >= 18 && marks >= 60)
{
    printf("Eligible\n");
}
else
{
    printf("Not eligible\n");
}
```

The program requires both conditions to be true.

---

# 12. `switch` Statement

`switch` is useful when one expression needs to be compared against several fixed values.

### Syntax

```c
switch (expression)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // default code
}
```

### Example

```c
int choice = 2;

switch (choice)
{
    case 1:
        printf("Option 1\n");
        break;

    case 2:
        printf("Option 2\n");
        break;

    case 3:
        printf("Option 3\n");
        break;

    default:
        printf("Invalid option\n");
}
```

---

# 13. `case`

Each `case` represents a possible value.

```c
switch (choice)
{
    case 1:
        printf("Start\n");
        break;

    case 2:
        printf("Settings\n");
        break;
}
```

The matching case is executed.

---

# 14. `break`

`break` exits the `switch`.

```c
case 1:
    printf("Option 1\n");
    break;
```

Without `break`, execution can continue into the following cases.

This behavior is called **fall-through**.

---

# 15. `default`

`default` executes when no case matches.

```c
switch (choice)
{
    case 1:
        printf("One\n");
        break;

    case 2:
        printf("Two\n");
        break;

    default:
        printf("Invalid choice\n");
}
```

`default` is optional, but it is often useful for handling unexpected input.

---

# 16. `switch` vs `if-else`

| Feature                            | `if-else`       | `switch`        |
| ---------------------------------- | --------------- | --------------- |
| Range conditions                   | Yes             | No              |
| Relational operators               | Yes             | No              |
| Complex logical conditions         | Yes             | No              |
| Fixed values                       | Yes             | Excellent       |
| Menu systems                       | Possible        | Very suitable   |
| Multiple ranges                    | Suitable        | Not suitable    |
| Readability for many fixed choices | Can become long | Usually cleaner |

Example:

### `if-else`

```c
if (choice == 1)
{
    printf("Start");
}
else if (choice == 2)
{
    printf("Settings");
}
```

### `switch`

```c
switch (choice)
{
    case 1:
        printf("Start");
        break;

    case 2:
        printf("Settings");
        break;
}
```

---

# 17. Conditional Operator `?:`

The conditional operator provides a compact way to choose between two values.

### Syntax

```c
condition ? value_if_true : value_if_false;
```

Example:

```c
int a = 10;
int b = 20;

int maximum = (a > b) ? a : b;
```

Equivalent concept:

```c
if (a > b)
{
    maximum = a;
}
else
{
    maximum = b;
}
```

Use `?:` for short expressions. For complex logic, normal `if-else` is generally easier to read.

---

# 18. Combining Operators in Conditions

A condition can contain several operators.

```c
int age = 20;
int marks = 85;

if (age >= 18 && marks >= 60)
{
    printf("Eligible\n");
}
```

Evaluation:

```text
age >= 18
    ↓
   TRUE

marks >= 60
    ↓
   TRUE

TRUE && TRUE
    ↓
   TRUE
```

---

# 19. Short-Circuit Evaluation

C uses short-circuit evaluation with `&&` and `||`.

## `&&`

If the first condition is false, the second condition may not be evaluated.

```c
if (age < 18 && expensive_check())
{
    ...
}
```

If `age < 18` is false, C does not need to evaluate the second condition.

## `||`

If the first condition is true, the second condition may not be evaluated.

```c
if (is_admin || has_permission)
{
    ...
}
```

If `is_admin` is true, the second condition does not need to be checked.

This can be useful for both **performance and safety**.

---

# 20. Operator Precedence in Conditions

When multiple operators appear in an expression, precedence determines evaluation order.

Example:

```c
int result = 10 + 5 * 2;
```

Multiplication happens first:

```text
10 + (5 * 2)
     ↓
10 + 10
     ↓
20
```

Use parentheses when you want to make the intended logic explicit.

```c
if ((age >= 18) && (marks >= 60))
{
    printf("Eligible\n");
}
```

---

# 21. Common Mistakes

### Mistake 1: Using `=` instead of `==`

```c
if (age = 18)
```

Use:

```c
if (age == 18)
```

---

### Mistake 2: Missing braces

```c
if (age >= 18)
    printf("Adult\n");
    printf("Allowed\n");
```

Only the first statement belongs to the `if`.

Prefer:

```c
if (age >= 18)
{
    printf("Adult\n");
    printf("Allowed\n");
}
```

---

### Mistake 3: Forgetting `break`

```c
switch (choice)
{
    case 1:
        printf("One\n");

    case 2:
        printf("Two\n");
}
```

This can cause unintended fall-through.

---

### Mistake 4: Incorrect condition ranges

For grading:

```c
if (marks >= 90)
```

should generally be checked before:

```c
if (marks >= 80)
```

because `95` also satisfies `marks >= 80`.

Correct ordering:

```text
90+ → A+
80+ → A
70+ → B
60+ → C
otherwise → F
```

---

# 22. Real-World Decision Logic

Conditional statements appear everywhere in software.

```text
User Input
    |
    v
Validate Data
    |
    v
Condition
   / \
Yes   No
 |     |
Action  Error
```

Examples:

* Login validation
* ATM menus
* Grade systems
* Age verification
* Menu selection
* File validation
* Sensor thresholds
* Game logic
* System configuration
* Data preprocessing

---

# 23. Conditional Statements in AI/ML

Even though machine learning models perform mathematical prediction, traditional conditional logic is still important around the model.

Example:

```c
if (confidence >= 0.90)
{
    printf("High confidence prediction\n");
}
else if (confidence >= 0.60)
{
    printf("Moderate confidence prediction\n");
}
else
{
    printf("Low confidence prediction\n");
}
```

A simplified AI pipeline can look like:

```text
Input
  |
  v
Preprocessing
  |
  v
ML Model
  |
  v
Prediction + Confidence
  |
  v
Conditional Logic
  |
  +------> High confidence
  |
  +------> Medium confidence
  |
  +------> Low confidence
```

Conditional logic is also important in:

* data validation
* preprocessing
* thresholding
* model deployment
* embedded AI
* robotics
* computer vision systems
* inference pipelines

---

# 24. Example: Eligibility System

```c
#include <stdio.h>

int main(void)
{
    int age;
    float marks;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (age >= 18 && marks >= 60)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not eligible\n");
    }

    return 0;
}
```

Here the program combines:

```text
Input
 ↓
Relational operators
 ↓
Logical AND
 ↓
if-else
 ↓
Decision
```

---

# 25. Conditional Statement Cheat Sheet

| Construct   | Syntax                              |
| ----------- | ----------------------------------- |
| `if`        | `if (condition) { }`                |
| `if-else`   | `if (condition) { } else { }`       |
| `else-if`   | `if (...) { } else if (...) { }`    |
| Nested `if` | `if (...) { if (...) { } }`         |
| `switch`    | `switch (expression) { case: ... }` |
| `break`     | `break;`                            |
| `default`   | `default:`                          |
| Ternary     | `condition ? a : b`                 |

---

# 26. Common Condition Patterns

### Positive number

```c
if (number > 0)
{
    printf("Positive");
}
```

### Negative number

```c
if (number < 0)
{
    printf("Negative");
}
```

### Zero

```c
if (number == 0)
{
    printf("Zero");
}
```

### Even number

```c
if (number % 2 == 0)
{
    printf("Even");
}
```

### Odd number

```c
if (number % 2 != 0)
{
    printf("Odd");
}
```

### Range

```c
if (marks >= 80 && marks <= 100)
{
    printf("Grade A");
}
```

---

# 27. Compilation

Compile an individual program:

```bash
gcc 01_if_statement.c -o 01_if_statement
```

Run:

### Windows

```bash
01_if_statement.exe
```

### Linux/macOS

```bash
./01_if_statement
```

Recommended compilation:

```bash
gcc -Wall -Wextra -Wpedantic 01_if_statement.c -o 01_if_statement
```

---

# 28. Folder Structure

```text
05-Conditional-Statements/
│
├── README.md
│
├── examples/
│   ├── 01_if_statement.c
│   ├── 02_if_else.c
│   ├── 03_else_if.c
│   ├── 04_nested_if.c
│   ├── 05_multiple_conditions.c
│   ├── 06_logical_conditions.c
│   ├── 07_ternary_operator.c
│   ├── 08_switch_statement.c
│   ├── 09_switch_with_char.c
│   └── 10_nested_switch.c
│
├── practice/
│   ├── 01_positive_negative.c
│   ├── 02_even_odd.c
│   ├── 03_largest_of_two.c
│   ├── 04_largest_of_three.c
│   ├── 05_grade_calculator.c
│   ├── 06_leap_year.c
│   └── 07_simple_menu.c
│
└── mini-project/
    ├── student_grade_system.c
    └── atm_menu.c
```

---

# 29. Quick Reference

```text
if
│
├── One condition
│
└── if-else
    │
    ├── Two possible paths
    │
    └── else-if
        │
        └── Multiple conditions


switch
│
├── Fixed values
├── case
├── break
└── default


Logical Operators
│
├── &&  → AND
├── ||  → OR
└── !   → NOT


Conditional Operator
│
└── condition ? true_value : false_value
```

---

# 30. Key Takeaways

* `if` performs a decision based on a condition.
* `if-else` provides two possible execution paths.
* `else-if` handles multiple conditions.
* Nested `if` allows decisions inside decisions.
* `&&`, `||`, and `!` combine or reverse conditions.
* `switch` is useful for fixed-value choices.
* `break` prevents unintended `switch` fall-through.
* `default` handles unmatched cases.
* `?:` is useful for simple conditional expressions.
* `0` represents false and non-zero values represent true.
* `==` compares values; `=` assigns values.
* Conditional logic is fundamental to algorithms and real-world software.

---

## Practice → Mini Projects

After studying the examples, move through:

```text
examples/
    ↓
practice/
    ↓
mini-project/
```

Then continue to:

```text
05-Conditional-Statements
          ↓
06-Loops
          ↓
07-Functions
```
