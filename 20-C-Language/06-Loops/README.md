# Loops in C

Loops allow a C program to **repeat a block of code** while a condition is satisfied.

They are fundamental to programming because many tasks require repeated operations, such as processing arrays, generating patterns, calculating values, searching data, and implementing algorithms.

---

## 1. What Is a Loop?

A loop repeatedly executes a block of code.

Instead of writing:

```c
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
```

you can use:

```c
for (int i = 0; i < 5; i++)
{
    printf("Hello\n");
}
```

### Basic Flow

```text
              Start
                |
                v
        Initialize variable
                |
                v
         Check condition
           /        \
        TRUE        FALSE
          |            |
          v            v
     Execute body     End
          |
          v
        Update
          |
          └──────────────> Condition
```

---

# 2. Types of Loops in C

C provides three main looping statements:

| Loop       | Best suited for                       |
| ---------- | ------------------------------------- |
| `for`      | Known or count-controlled repetitions |
| `while`    | Condition-controlled repetition       |
| `do-while` | At least one execution required       |

```text
Loops
│
├── for
│
├── while
│
└── do-while
```

---

# 3. `for` Loop

The `for` loop is commonly used when the number of iterations is known or controlled by a counter.

### Syntax

```c
for (initialization; condition; update)
{
    // code
}
```

### Example

```c
for (int i = 1; i <= 5; i++)
{
    printf("%d\n", i);
}
```

### Execution

```text
i = 1
 ↓
Check i <= 5
 ↓
Print i
 ↓
i++
 ↓
Check again
```

Output:

```text
1
2
3
4
5
```

---

# 4. Parts of a `for` Loop

```c
for (int i = 1; i <= 5; i++)
```

It contains three main parts:

```text
for (
     initialization;
     condition;
     update
)
```

### Initialization

Runs once before the loop starts.

```c
int i = 1;
```

### Condition

Checked before every iteration.

```c
i <= 5
```

### Update

Changes the loop variable.

```c
i++
```

---

# 5. `while` Loop

A `while` loop repeats as long as its condition is true.

### Syntax

```c
while (condition)
{
    // code
}
```

### Example

```c
int i = 1;

while (i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

### Flow

```text
       Start
         |
         v
    Check condition
      /       \
   TRUE       FALSE
     |           |
     v           v
 Execute        End
     |
     v
   Update
     |
     └────────> Condition
```

---

# 6. `do-while` Loop

A `do-while` loop executes its body **at least once** before checking the condition.

### Syntax

```c
do
{
    // code
}
while (condition);
```

### Example

```c
int i = 1;

do
{
    printf("%d\n", i);
    i++;
}
while (i <= 5);
```

The condition is checked **after** the loop body.

---

# 7. `while` vs `do-while`

### `while`

```c
while (condition)
{
    // code
}
```

Condition is checked first.

### `do-while`

```c
do
{
    // code
}
while (condition);
```

Code executes first.

```text
while:

Condition
   |
   ├── FALSE → End
   |
   └── TRUE → Body


do-while:

Body
 |
Condition
 |
 ├── TRUE → Body
 └── FALSE → End
```

Example:

```c
int number = 10;

while (number < 5)
{
    printf("Hello\n");
}
```

This prints nothing.

But:

```c
int number = 10;

do
{
    printf("Hello\n");
}
while (number < 5);
```

prints:

```text
Hello
```

---

# 8. Counter-Controlled Loops

A counter-controlled loop uses a variable to control the number of repetitions.

Example:

```c
for (int i = 1; i <= 10; i++)
{
    printf("%d\n", i);
}
```

Here:

```text
Start = 1
End   = 10
Step  = 1
```

This pattern is extremely common in programming and DSA.

---

# 9. Incrementing Loops

### Increment by 1

```c
for (int i = 0; i < 10; i++)
{
    printf("%d\n", i);
}
```

### Increment by 2

```c
for (int i = 0; i <= 10; i += 2)
{
    printf("%d\n", i);
}
```

Output:

```text
0
2
4
6
8
10
```

### Increment by 5

```c
for (int i = 0; i <= 20; i += 5)
{
    printf("%d\n", i);
}
```

---

# 10. Decrementing Loops

A loop can also move backwards.

```c
for (int i = 10; i >= 1; i--)
{
    printf("%d\n", i);
}
```

Output:

```text
10
9
8
7
6
5
4
3
2
1
```

---

# 11. Nested Loops

A loop inside another loop is called a **nested loop**.

Example:

```c
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 3; j++)
    {
        printf("* ");
    }

    printf("\n");
}
```

Output:

```text
* * *
* * *
* * *
```

### Execution

```text
Outer Loop
   |
   +--- Inner Loop
   |       |
   |       +--- Execute
   |       +--- Execute
   |       +--- Execute
   |
   +--- Inner Loop
   |
   +--- Inner Loop
```

Nested loops are especially important for:

* patterns
* matrices
* 2D arrays
* searching
* sorting
* DSA algorithms

---

# 12. `break` Statement

`break` immediately terminates the loop.

### Example

```c
for (int i = 1; i <= 10; i++)
{
    if (i == 6)
    {
        break;
    }

    printf("%d\n", i);
}
```

Output:

```text
1
2
3
4
5
```

Flow:

```text
Loop
 |
Condition
 |
i == 6?
 /    \
Yes    No
 |      |
break  continue
 |
End
```

---

# 13. `continue` Statement

`continue` skips the current iteration and moves to the next iteration.

Example:

```c
for (int i = 1; i <= 5; i++)
{
    if (i == 3)
    {
        continue;
    }

    printf("%d\n", i);
}
```

Output:

```text
1
2
4
5
```

The iteration where `i == 3` is skipped.

---

# 14. `break` vs `continue`

| Statement  | Behavior                  |
| ---------- | ------------------------- |
| `break`    | Exits the loop completely |
| `continue` | Skips current iteration   |
| `return`   | Exits the function        |

Example:

```text
break
  ↓
LOOP ENDS


continue
  ↓
NEXT ITERATION
```

---

# 15. Infinite Loops

An infinite loop never reaches a false condition.

Example:

```c
while (1)
{
    printf("Running...\n");
}
```

Since `1` is non-zero, the condition is always true.

Another example:

```c
for (;;)
{
    printf("Running...\n");
}
```

Infinite loops can be intentional in:

* operating systems
* servers
* embedded systems
* game loops
* event-driven programs

But accidental infinite loops are a common beginner error.

---

# 16. Loop with Conditions

Loops and conditional statements are frequently combined.

Example:

```c
for (int i = 1; i <= 10; i++)
{
    if (i % 2 == 0)
    {
        printf("%d is even\n", i);
    }
}
```

Execution:

```text
Loop
 ↓
Number
 ↓
Check condition
 ↓
Even?
 /   \
Yes   No
 |     |
Print  Skip
```

This combination is extremely important for algorithms.

---

# 17. Sum Using a Loop

Loops can accumulate values.

```c
int sum = 0;

for (int i = 1; i <= 5; i++)
{
    sum += i;
}

printf("Sum = %d\n", sum);
```

Calculation:

```text
sum = 0

i = 1 → sum = 1
i = 2 → sum = 3
i = 3 → sum = 6
i = 4 → sum = 10
i = 5 → sum = 15
```

Result:

```text
15
```

This pattern is called **accumulation**.

---

# 18. Multiplication Pattern

Loops are useful for repetitive mathematical calculations.

```c
int number = 5;

for (int i = 1; i <= 10; i++)
{
    printf("%d × %d = %d\n", number, i, number * i);
}
```

Output:

```text
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
...
5 × 10 = 50
```

---

# 19. Counting

A loop can count values satisfying a condition.

```c
int count = 0;

for (int i = 1; i <= 100; i++)
{
    if (i % 2 == 0)
    {
        count++;
    }
}

printf("Even numbers: %d\n", count);
```

This pattern is widely used in algorithms and data processing.

---

# 20. Searching with Loops

Loops are commonly used to search through data.

Basic example:

```c
int target = 7;

for (int i = 1; i <= 10; i++)
{
    if (i == target)
    {
        printf("Found\n");
        break;
    }
}
```

Concept:

```text
Data
 ↓
Check item
 ↓
Match?
 ├── Yes → Found → break
 └── No  → Next item
```

This is the foundation of **linear search**.

---

# 21. Common Loop Patterns

### Print numbers

```c
for (int i = 1; i <= 10; i++)
{
    printf("%d\n", i);
}
```

### Sum

```c
int sum = 0;

for (int i = 1; i <= 10; i++)
{
    sum += i;
}
```

### Count

```c
int count = 0;

for (int i = 1; i <= 10; i++)
{
    count++;
}
```

### Filter

```c
for (int i = 1; i <= 10; i++)
{
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
}
```

### Search

```c
for (int i = 0; i < n; i++)
{
    if (array[i] == target)
    {
        break;
    }
}
```

---

# 22. Common Mistakes

## Missing Update

```c
int i = 1;

while (i <= 5)
{
    printf("%d\n", i);
}
```

`i` never changes, so the loop can become infinite.

Correct:

```c
int i = 1;

while (i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

---

## Incorrect Condition

```c
for (int i = 1; i >= 10; i++)
```

This condition is false immediately.

Correct:

```c
for (int i = 1; i <= 10; i++)
```

---

## Off-by-One Error

These two loops are different:

```c
for (int i = 0; i < 5; i++)
```

Iterations:

```text
0 1 2 3 4
```

But:

```c
for (int i = 0; i <= 5; i++)
```

Iterations:

```text
0 1 2 3 4 5
```

The second executes one additional iteration.

---

# 23. `for` vs `while` vs `do-while`

| Feature              | `for`     | `while`   | `do-while`                  |
| -------------------- | --------- | --------- | --------------------------- |
| Condition checked    | Before    | Before    | After                       |
| Guaranteed execution | No        | No        | Yes                         |
| Counter loops        | Excellent | Good      | Less common                 |
| Unknown repetitions  | Good      | Excellent | Good                        |
| Minimum executions   | 0         | 0         | 1                           |
| Syntax               | Compact   | Simple    | Requires `while` after body |

---

# 24. Loop Selection Guide

```text
Do you know the loop structure?
          |
          v
        Yes
          |
          v
      Use for
          |
          No
          |
          v
Must execute at least once?
       /        \
     Yes         No
      |           |
 do-while       while
```

---

# 25. Loops and DSA

Loops are fundamental to Data Structures and Algorithms.

Examples:

### Array traversal

```c
for (int i = 0; i < n; i++)
{
    printf("%d\n", array[i]);
}
```

### Linear search

```c
for (int i = 0; i < n; i++)
{
    if (array[i] == target)
    {
        break;
    }
}
```

### Nested loops

Used in:

* matrix operations
* bubble sort
* selection sort
* pattern problems
* pair comparisons

Understanding loops well is essential before moving into DSA.

---

# 26. Loops and AI/ML

Loops are used throughout the underlying implementation of many AI/ML operations.

Simplified example:

```c
for (int i = 0; i < samples; i++)
{
    prediction = model(input[i]);

    if (prediction > threshold)
    {
        result[i] = 1;
    }
    else
    {
        result[i] = 0;
    }
}
```

Conceptually:

```text
Dataset
   |
   v
Loop through samples
   |
   v
Process sample
   |
   v
Prediction
   |
   v
Conditional decision
   |
   v
Store result
```

Loops are important for understanding:

* dataset processing
* numerical computation
* feature processing
* simulations
* training algorithms
* inference pipelines
* matrix operations

In real ML systems, optimized libraries often perform these repetitive operations using compiled code, vectorization, parallelism, or hardware acceleration rather than simple C loops alone.

---

# 27. Basic Loop Complexity

A loop that runs `n` times is commonly described as:

```text
O(n)
```

Example:

```c
for (int i = 0; i < n; i++)
{
    printf("%d\n", i);
}
```

Approximate structure:

```text
n iterations
     ↓
O(n)
```

A nested loop where both loops run `n` times is commonly:

```text
n × n
 ↓
O(n²)
```

Example:

```c
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
}
```

This concept becomes very important when you start DSA.

---

# 28. Compilation

Compile a loop program:

```bash
gcc 01_for_loop.c -o 01_for_loop
```

Recommended warning flags:

```bash
gcc -Wall -Wextra -Wpedantic 01_for_loop.c -o 01_for_loop
```

Run on Windows:

```bash
01_for_loop.exe
```

Run on Linux/macOS:

```bash
./01_for_loop
```

---

# 29. Folder Structure

```text
06-Loops/
│
├── README.md
│
├── examples/
│   ├── 01_for_loop.c
│   ├── 02_while_loop.c
│   ├── 03_do_while_loop.c
│   ├── 04_increment_in_loop.c
│   ├── 05_decrement_in_loop.c
│   ├── 06_nested_for_loop.c
│   ├── 07_break_statement.c
│   ├── 08_continue_statement.c
│   ├── 09_loop_with_condition.c
│   └── 10_infinite_loop.c
│
├── practice/
│   ├── 01_print_numbers.c
│   ├── 02_sum_numbers.c
│   ├── 03_multiplication_table.c
│   ├── 04_factorial.c
│   ├── 05_count_digits.c
│   ├── 06_reverse_number.c
│   ├── 07_prime_number.c
│   └── 08_fibonacci.c
│
└── mini-project/
    ├── number_guessing_game.c
    └── multiplication_table_generator.c
```

---

# 30. Quick Reference

### `for`

```c
for (initialization; condition; update)
{
    // code
}
```

### `while`

```c
while (condition)
{
    // code
}
```

### `do-while`

```c
do
{
    // code
}
while (condition);
```

### `break`

```c
break;
```

Exits the loop.

### `continue`

```c
continue;
```

Skips the current iteration.

---

## Loop Mental Model

```text
              LOOP
                |
       +--------+--------+
       |                 |
 Initialization       Condition
                         |
                    +----+----+
                    |         |
                  TRUE       FALSE
                    |         |
                    v         v
                 Execute     END
                    |
                    v
                  Update
                    |
                    +----------> Condition
```

---

## Key Takeaways

* Loops repeat code efficiently.
* C provides `for`, `while`, and `do-while`.
* `for` is ideal for counter-controlled repetition.
* `while` is useful when repetition depends primarily on a condition.
* `do-while` guarantees at least one execution.
* `break` terminates a loop.
* `continue` skips the current iteration.
* Nested loops are important for matrices, patterns, and many algorithms.
* Loop + condition combinations are fundamental to problem solving.
* Off-by-one errors are common and important to understand.
* A single loop over `n` items is commonly `O(n)`.
* Nested `n × n` loops are commonly `O(n²)`.
* Loops form a major foundation for arrays, DSA, algorithms, and data processing.
