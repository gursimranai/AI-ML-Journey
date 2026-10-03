# 08 — Arrays in C

Arrays are one of the most important data structures in C.

They allow multiple values of the **same data type** to be stored under a single variable name and accessed using an **index**.

Arrays are fundamental for:

- Data organization
- Searching and sorting
- DSA
- Strings
- Matrix operations
- Memory management
- Pointers
- Machine learning and numerical computing

---

## 1. What Is an Array?

An array is a fixed-size collection of elements of the same data type stored in **contiguous memory locations**.

Instead of creating separate variables:

```c
int mark1 = 85;
int mark2 = 90;
int mark3 = 78;
int mark4 = 92;
```

We can use:

```c
int marks[4] = {85, 90, 78, 92};
```

### Concept

```text
marks
┌────┬────┬────┬────┐
│ 85 │ 90 │ 78 │ 92 │
└────┴────┴────┴────┘
   0    1    2    3
   ↑              ↑
 first           last
 index           index
```

Array indexing starts from **0**.

---

# 2. Why Use Arrays?

Without arrays:

```c
int score1;
int score2;
int score3;
int score4;
int score5;
```

With arrays:

```c
int scores[5];
```

Advantages:

- Store many values using one variable
- Easy iteration with loops
- Easier searching
- Easier sorting
- Efficient memory organization
- Works naturally with functions
- Forms the foundation of many DSA structures

---

# 3. Array Syntax

### Declaration

```c
data_type array_name[size];
```

Example:

```c
int numbers[5];
```

This creates space for five integers.

### Initialization

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

---

# 4. Array Indexing

For:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

The indexes are:

```text
Value:    10   20   30   40   50
Index:     0    1    2    3    4
```

Access elements using:

```c
numbers[0]
numbers[1]
numbers[2]
numbers[3]
numbers[4]
```

Example:

```c
printf("%d\n", numbers[2]);
```

Output:

```text
30
```

---

# 5. Array Index Rule

For an array of size `n`:

```text
First index = 0
Last index  = n - 1
```

Example:

```c
int numbers[10];
```

Valid indexes:

```text
0 1 2 3 4 5 6 7 8 9
```

Invalid:

```text
numbers[10]
numbers[-1]
```

Accessing outside the valid range causes **undefined behavior**.

---

# 6. Declaring Arrays

Different data types can be stored in arrays.

### Integer array

```c
int numbers[5];
```

### Floating-point array

```c
float temperatures[5];
```

### Double array

```c
double prices[5];
```

### Character array

```c
char grades[5];
```

Character arrays become especially important when learning **strings**.

---

# 7. Array Initialization

### Full initialization

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

### Size inferred from initializer

```c
int numbers[] = {10, 20, 30, 40, 50};
```

The compiler determines the size automatically.

### Partial initialization

```c
int numbers[5] = {10, 20};
```

The remaining elements are initialized to zero.

Conceptually:

```text
10   20   0   0   0
```

### All zeros

```c
int numbers[5] = {0};
```

Result:

```text
0   0   0   0   0
```

---

# 8. Accessing Array Elements

Use the index operator:

```c
array_name[index]
```

Example:

```c
int marks[5] = {85, 90, 78, 92, 88};

printf("%d\n", marks[0]);
printf("%d\n", marks[3]);
```

Output:

```text
85
92
```

---

# 9. Updating Array Elements

Array elements can be modified using their index.

```c
int numbers[3] = {10, 20, 30};

numbers[1] = 100;
```

Array becomes:

```text
10   100   30
```

Example:

```c
numbers[0] = 50;
numbers[2] = 75;
```

---

# 10. Arrays and Loops

Arrays become much more useful when combined with loops.

Example:

```c
#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
```

Flow:

```text
i = 0
 ↓
numbers[0]
 ↓
print
 ↓
i++
 ↓
numbers[1]
 ↓
print
 ↓
...
 ↓
numbers[4]
```

This pattern is extremely important in DSA.

---

# 11. Taking Array Input

A loop can be used to input multiple elements.

```c
#include <stdio.h>

int main(void)
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    return 0;
}
```

Notice:

```c
&numbers[i]
```

The `&` provides the address where `scanf()` should store the value.

---

# 12. Printing an Array

```c
for (int i = 0; i < 5; i++)
{
    printf("%d ", numbers[i]);
}
```

Example output:

```text
10 20 30 40 50
```

---

# 13. Finding the Array Length

For an actual array in the same scope where it exists:

```c
int numbers[] = {10, 20, 30, 40, 50};

int length = sizeof(numbers) / sizeof(numbers[0]);
```

Calculation:

```text
sizeof(numbers)
        ÷
sizeof(numbers[0])
        =
number of elements
```

For example:

```text
20 bytes ÷ 4 bytes = 5 elements
```

The exact byte size of `int` is implementation-dependent, so the formula is preferred over assuming a fixed size.

---

# 14. Important `sizeof()` Concept

```c
sizeof(numbers)
```

returns the total size of the array in bytes.

```c
sizeof(numbers[0])
```

returns the size of one element.

Therefore:

```c
sizeof(numbers) / sizeof(numbers[0])
```

returns the number of elements.

### Important

This technique works directly for an array, not for a pointer that merely points to its first element.

This distinction becomes very important when learning **pointers**.

---

# 15. Sum of Array Elements

Example:

```c
int numbers[5] = {10, 20, 30, 40, 50};
int sum = 0;

for (int i = 0; i < 5; i++)
{
    sum += numbers[i];
}
```

Calculation:

```text
10 + 20 + 30 + 40 + 50
          ↓
         150
```

---

# 16. Average of an Array

```c
double average;

average = (double)sum / length;
```

The cast:

```c
(double)sum
```

prevents integer division.

Example:

```text
Sum    = 150
Length = 5

Average = 150 / 5
        = 30.0
```

---

# 17. Finding the Largest Element

Basic approach:

```c
int largest = numbers[0];

for (int i = 1; i < length; i++)
{
    if (numbers[i] > largest)
    {
        largest = numbers[i];
    }
}
```

Flow:

```text
Start with first element
        ↓
Compare with next element
        ↓
Is next element larger?
      /     \
    Yes      No
     ↓        ↓
 Update    Continue
     \        /
      ↓      ↓
     Next element
```

---

# 18. Finding the Smallest Element

```c
int smallest = numbers[0];

for (int i = 1; i < length; i++)
{
    if (numbers[i] < smallest)
    {
        smallest = numbers[i];
    }
}
```

---

# 19. Searching an Array

A simple linear search checks elements one by one.

```c
int target = 30;
int found = 0;

for (int i = 0; i < length; i++)
{
    if (numbers[i] == target)
    {
        found = 1;
        break;
    }
}
```

Concept:

```text
Array:
10  20  30  40  50
         ↑
       target
```

### Linear Search Complexity

```text
Best case  : O(1)
Worst case : O(n)
```

---

# 20. Reversing an Array

Original:

```text
10 20 30 40 50
```

Reversed:

```text
50 40 30 20 10
```

One common approach uses two indexes:

```text
left                    right
 ↓                         ↓
10  20  30  40  50
```

Swap:

```text
50  20  30  40  10
```

Move inward:

```text
   left              right
    ↓                  ↓
50  20  30  40  10
```

Continue until:

```text
left >= right
```

---

# 21. Copying an Array

```c
for (int i = 0; i < length; i++)
{
    copy[i] = original[i];
}
```

Example:

```text
Original:
10 20 30 40 50

Copy:
10 20 30 40 50
```

---

# 22. Arrays and Functions

Arrays can be passed to functions.

Example:

```c
void display_array(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
}
```

Call:

```c
display_array(numbers, 5);
```

A size parameter is normally passed separately.

```text
main()
  │
  │ numbers
  │ size
  ↓
display_array()
  │
  ├── numbers[0]
  ├── numbers[1]
  ├── numbers[2]
  ├── ...
  └── numbers[size-1]
```

---

# 23. Arrays and Functions: Important Concept

When an array is passed to a function, the parameter behaves like a pointer to its first element.

For example:

```c
void display(int numbers[], int size)
```

is closely related to:

```c
void display(int *numbers, int size)
```

This is one of the important bridges between:

```text
Arrays
   ↓
Pointers
   ↓
Dynamic Memory
   ↓
Data Structures
```

---

# 24. Modifying an Array Inside a Function

Example:

```c
void change_first_element(int numbers[])
{
    numbers[0] = 100;
}
```

Calling:

```c
int numbers[3] = {10, 20, 30};

change_first_element(numbers);
```

After the function:

```text
100 20 30
```

The original array is modified.

This behavior is important when working with arrays and pointers.

---

# 25. Two-Dimensional Arrays

C also supports arrays with multiple dimensions.

Syntax:

```c
data_type array_name[rows][columns];
```

Example:

```c
int matrix[2][3];
```

Conceptually:

```text
        Column
       0   1   2
     ┌───┬───┬───┐
Row 0│   │   │   │
     ├───┼───┼───┤
Row 1│   │   │   │
     └───┴───┴───┘
```

Initialization:

```c
int matrix[2][3] =
{
    {1, 2, 3},
    {4, 5, 6}
};
```

Access:

```c
matrix[0][1]
```

Result:

```text
2
```

---

# 26. Nested Loops With 2D Arrays

```c
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d ", matrix[i][j]);
    }

    printf("\n");
}
```

Output:

```text
1 2 3
4 5 6
```

Concept:

```text
Outer loop → rows
Inner loop → columns
```

---

# 27. Character Arrays

A character array can store characters:

```c
char name[6] = {'G', 'u', 'r', 'u', 'p', '\0'};
```

The special character:

```text
'\0'
```

marks the end of a C string.

This leads directly into the next topic:

```text
08 Arrays
   ↓
09 Strings
   ↓
10 Pointers
```

---

# 28. Array Memory Layout

Suppose:

```c
int numbers[4] = {10, 20, 30, 40};
```

Arrays store elements contiguously:

```text
Lower memory address
        ↓

┌────────┬────────┬────────┬────────┐
│   10   │   20   │   30   │   40   │
└────────┴────────┴────────┴────────┘
    ↑
 contiguous memory

        ↓
Higher memory address
```

Each element occupies the size required by its data type.

---

# 29. Array vs Individual Variables

| Feature | Individual Variables | Array |
|---|---|---|
| Multiple values | Difficult | Easy |
| Same type | Not required | Required |
| Indexing | No | Yes |
| Loop processing | Less convenient | Very convenient |
| Memory organization | Separate objects | Contiguous elements |
| DSA usefulness | Limited | Extremely important |

---

# 30. Array vs Pointer

| Array | Pointer |
|---|---|
| Stores a collection of elements | Stores an address |
| Fixed-size array object | Can point to different objects |
| `sizeof(array)` gives total array size in its array scope | `sizeof(pointer)` gives pointer size |
| Cannot be assigned as a whole | Can be assigned another address |
| Closely connected to pointers | Used heavily with arrays |

Example:

```c
int numbers[5];
int *ptr = numbers;
```

Here:

```text
numbers
   ↓
┌────┬────┬────┬────┬────┐
│    │    │    │    │    │
└────┴────┴────┴────┴────┘
 ↑
 ptr
```

---

# 31. Common Array Mistakes

### Mistake 1 — Starting at index 1

Incorrect:

```c
for (int i = 1; i <= 5; i++)
```

Correct for an array of 5 elements:

```c
for (int i = 0; i < 5; i++)
```

---

### Mistake 2 — Accessing outside the array

```c
int numbers[5];

numbers[5] = 100;
```

Invalid because the last valid index is:

```text
4
```

---

### Mistake 3 — Forgetting the size

```c
int numbers[];
```

A declaration needs either a size or an initializer.

Valid:

```c
int numbers[5];
```

or:

```c
int numbers[] = {10, 20, 30};
```

---

### Mistake 4 — Using the wrong loop condition

Incorrect:

```c
i <= size
```

Usually correct:

```c
i < size
```

---

### Mistake 5 — Assuming `sizeof()` works after array-to-pointer conversion

Inside a function:

```c
void display(int numbers[])
{
    sizeof(numbers);
}
```

Here `numbers` behaves as a pointer parameter, so `sizeof(numbers)` does **not** give the original array's element count.

Pass the size separately:

```c
void display(int numbers[], int size)
```

---

# 32. Common Array Patterns

### Traversal

```c
for (int i = 0; i < size; i++)
{
    printf("%d ", array[i]);
}
```

### Sum

```c
int sum = 0;

for (int i = 0; i < size; i++)
{
    sum += array[i];
}
```

### Maximum

```c
int max = array[0];

for (int i = 1; i < size; i++)
{
    if (array[i] > max)
    {
        max = array[i];
    }
}
```

### Minimum

```c
int min = array[0];

for (int i = 1; i < size; i++)
{
    if (array[i] < min)
    {
        min = array[i];
    }
}
```

### Search

```c
for (int i = 0; i < size; i++)
{
    if (array[i] == target)
    {
        printf("Found at index %d\n", i);
        break;
    }
}
```

---

# 33. Arrays and DSA

Arrays are one of the first major data structures used in DSA.

They provide the foundation for:

```text
Arrays
  │
  ├── Searching
  │     ├── Linear Search
  │     └── Binary Search
  │
  ├── Sorting
  │     ├── Bubble Sort
  │     ├── Selection Sort
  │     ├── Insertion Sort
  │     └── Advanced Sorting
  │
  ├── Matrices
  │
  ├── Strings
  │
  └── Other Data Structures
```

---

# 34. Arrays and AI/ML

Arrays are extremely important in AI/ML because numerical data is represented using array-like structures.

Conceptually:

```text
C Array
   ↓
Numerical Data
   ↓
Vectors
   ↓
Matrices
   ↓
Tensors
   ↓
Machine Learning
```

Example dataset:

```text
Student   Math   Physics   Programming
   1       90       85          95
   2       80       88          91
   3       92       90          96
```

This can be represented conceptually as a matrix:

```text
[
  [90, 85, 95],
  [80, 88, 91],
  [92, 90, 96]
]
```

Libraries such as NumPy provide much more powerful array operations, but understanding C arrays helps build a strong foundation for memory and data representation.

---

# 35. Time Complexity of Common Array Operations

For an array of `n` elements:

| Operation | Typical Complexity |
|---|---:|
| Access by index | O(1) |
| Update by index | O(1) |
| Linear search | O(n) |
| Traversal | O(n) |
| Find maximum | O(n) |
| Find minimum | O(n) |
| Reverse | O(n) |
| Copy | O(n) |

The exact cost of inserting/deleting elements depends on where the operation occurs and how the array is represented.

---

# 36. Array Quick Reference

### Declaration

```c
int numbers[5];
```

### Initialization

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

### Access

```c
numbers[0]
```

### Update

```c
numbers[2] = 100;
```

### Length

```c
sizeof(numbers) / sizeof(numbers[0])
```

### Traversal

```c
for (int i = 0; i < size; i++)
{
    printf("%d ", numbers[i]);
}
```

### Input

```c
for (int i = 0; i < size; i++)
{
    scanf("%d", &numbers[i]);
}
```

### Function

```c
void display(int numbers[], int size)
{
    ...
}
```

---

# 37. Folder Structure

```text
08-Arrays/
│
├── README.md
│
├── examples/
│   ├── 01-array-basics.c
│   ├── 02-array-initialization.c
│   ├── 03-array-input.c
│   ├── 04-array-output.c
│   ├── 05-accessing-array-elements.c
│   ├── 06-updating-array-elements.c
│   ├── 07-array-length.c
│   ├── 08-sum-of-array.c
│   ├── 09-average-of-array.c
│   ├── 10-largest-element.c
│   ├── 11-smallest-element.c
│   ├── 12-reverse-array.c
│   ├── 13-copy-array.c
│   └── 14-array-with-functions.c
│
├── practice/
│   ├── 01-print-array.c
│   ├── 02-sum-array.c
│   ├── 03-average-array.c
│   ├── 04-find-largest.c
│   ├── 05-find-smallest.c
│   ├── 06-count-even-odd.c
│   ├── 07-search-element.c
│   └── 08-reverse-array.c
│
└── mini-project/
    ├── 01-student-marks-analyzer.c
    └── 02-array-statistics.c
```

---

# 38. Compilation

Compile an example:

```bash
gcc 01-array-basics.c -o 01-array-basics
```

Recommended warning flags:

```bash
gcc -Wall -Wextra -Wpedantic 01-array-basics.c -o 01-array-basics
```

Run on Windows:

```bash
01-array-basics.exe
```

Run on Linux/macOS:

```bash
./01-array-basics
```

---

# 39. Key Concepts

```text
Array
 │
 ├── Same data type
 │
 ├── Fixed size
 │
 ├── Index starts at 0
 │
 ├── Contiguous memory
 │
 ├── Access → array[index]
 │
 ├── Traversal → loops
 │
 ├── Search → compare elements
 │
 ├── Functions → pass array + size
 │
 ├── 2D arrays → rows + columns
 │
 └── Pointer connection
          ↓
       Strings
          ↓
       Pointers
          ↓
    Dynamic Memory
```

Arrays are a major transition point in C: after learning functions, they introduce **collections of data, indexed memory, traversal patterns, and the foundation for DSA**.