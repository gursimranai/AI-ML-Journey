# 10 — Pointers in C

A pointer is a variable that stores the memory address of another object. Pointers are one of the most important concepts in C because they allow programs to access memory indirectly, modify existing data through functions, process arrays efficiently, and allocate memory dynamically.

Unlike ordinary variables, which store values directly, pointers store addresses.

```text
Ordinary Variable                Pointer

number = 10                       pointer = address of number

+----------+                      +------------------+
|    10    |                      | Address of       |
+----------+                      | number           |
                                  +------------------+
```

---

## 1. What Is a Pointer?

Consider a normal integer variable:

```c
int number = 10;
```

The variable `number` stores the integer value `10`.

A pointer can store the address of that variable:

```c
int *pointer = &number;
```

Here:

- `int` specifies the type of object the pointer points to.
- `*` in the declaration indicates a pointer type.
- `pointer` is the pointer variable.
- `&number` obtains the address of `number`.

Conceptually:

```text
number
  |
  v
+---------+
|   10    |
+---------+
  Address: 1000

pointer
  |
  v
+---------+
|  1000   |
+---------+
```

The addresses shown are illustrative. Actual memory addresses depend on the program and execution environment.

## 2. Why Are Pointers Used?

Pointers are useful for:

- Accessing objects through their memory addresses.
- Modifying variables through functions.
- Processing arrays and strings.
- Working with structures efficiently.
- Allocating and releasing memory dynamically.
- Building linked lists, trees, graphs, and other data structures.
- Implementing low-level systems and memory-management operations.

Pointers provide flexibility, but incorrect pointer use can cause undefined behavior, memory corruption, or crashes.

---

## 3. The Address-of Operator `&`

The address-of operator obtains the address of an object.

```c
int number = 10;

printf("%p\n", (void *)&number);
```

Here, `&number` means the address of `number`.

Use `%p` to print a pointer address, with the pointer converted to `void *` for this `printf()` call.

```text
number = 10
    |
    v
Address of number
    |
    v
  &number
```

Remember:

```c
number    // Value of the variable
&number   // Address of the variable
```

The address is not generally a fixed number you should hardcode or predict.

---

## 4. Declaring Pointers

General syntax:

```c
data_type *pointer_name;
```

Examples:

```c
int *int_pointer;
char *char_pointer;
float *float_pointer;
double *double_pointer;
```

The pointed-to type matters because it determines how the object is interpreted when dereferenced and how pointer arithmetic behaves.

### Multiple declarations

Be careful with this declaration:

```c
int *first, second;
```

Only `first` is a pointer. `second` is an ordinary integer.

For clarity, prefer:

```c
int *first;
int *second;
```

---

## 5. Initializing a Pointer

A pointer should be initialized before it is used.

```c
int number = 25;
int *pointer = &number;
```

Now `pointer` points to `number`.

You can print the address and value:

```c
printf("Address: %p\n", (void *)pointer);
printf("Value: %d\n", *pointer);
```

Avoid dereferencing an uninitialized pointer:

```c
int *pointer;

/* Do not do this. */
printf("%d\n", *pointer);
```

An uninitialized pointer has an indeterminate value. Using it as though it points to a valid object can cause undefined behavior.

---

## 6. The Dereference Operator `*`

The dereference operator accesses the object pointed to by a valid pointer.

```c
int number = 25;
int *pointer = &number;

printf("%d\n", *pointer);
```

Output:

```text
25
```

Here, `*pointer` accesses the value of `number`.

```text
pointer
   |
   | stores address
   v
 number's memory
+------------+
|     25     |
+------------+
       ^
       |
   *pointer
```

The same symbol `*` has different roles depending on context:

```c
int *pointer;  // Declaration: pointer to int
*pointer = 50; // Expression: access pointed-to object
```

---

## 7. Changing a Value Through a Pointer

A pointer can modify an object through its address.

```c
int number = 10;
int *pointer = &number;

*pointer = 50;

printf("%d\n", number);
```

Output:

```text
50
```

Why?

`pointer` points to `number`, so assigning to `*pointer` changes `number` itself.

```text
Before:
number = 10

*pointer = 50

After:
number = 50
```

This behavior is central to pointer-based function arguments.

---

## 8. Pointer vs Ordinary Variable

| Feature | Ordinary variable | Pointer variable |
|---|---|---|
| Stores | A value of its type | An address or null pointer value |
| Example | `int number = 10;` | `int *pointer = &number;` |
| Access object | `number` | `*pointer` |
| Obtain its address | `&number` | `&pointer` |
| Memory size | Depends on its type and implementation | Depends on the pointer type and implementation |

Do not assume that every pointer has the same size as an `int`, or that all pointer types have identical sizes on every platform.

---

## 9. Pointer Types Must Match

A pointer type tells C how to interpret the pointed-to object.

```c
int number = 100;
int *pointer = &number;
```

This is appropriate because `pointer` points to an `int`.

Avoid incompatible assignments such as:

```c
int number = 100;

/* Incorrect without an appropriate conversion and valid use. */
char *pointer = &number;
```

Pointer conversions require care. Dereferencing an incorrectly typed pointer may violate alignment or type-access rules.

Use matching pointer types for ordinary object access.

---

## 10. NULL Pointers

A null pointer does not point to an object or function.

```c
int *pointer = NULL;
```

Before dereferencing a pointer that may be null, check it:

```c
if (pointer != NULL)
{
    printf("%d\n", *pointer);
}
```

A null pointer must not be dereferenced.

```text
pointer = NULL
      |
      v
Does not point to an object

Do not access *pointer.
```

`NULL` is useful for initializing pointers that do not yet refer to an object and for indicating the absence of a result.

---

## 11. Pointer Assignment

Two compatible pointers can point to the same object.

```c
int number = 10;

int *first = &number;
int *second = first;
```

Both pointers refer to `number`.

```text
first  ──────┐
             v
          +------+
number -> |  10  |
          +------+
             ^
second ──────┘
```

Changing the object through either pointer changes the same underlying object.

```c
*second = 99;
```

Now `number` is `99`.

Copying a pointer copies its address; it does not copy the pointed-to object.

---

## 12. Pointers and Functions

C passes function arguments by value. A pointer argument is also passed by value, but the copied pointer can refer to the same object as the caller's pointer.

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

    change_value(&value);

    printf("%d\n", value);

    return 0;
}
```

Output:

```text
100
```

Execution:

```text
main()
  |
  | passes &value
  v
change_value(int *number)
  |
  | *number = 100
  v
Original value becomes 100
```

This technique is often described as passing by reference, but technically C passes the pointer argument by value.

---

## 13. Swapping Values With Pointers

A common pointer application is swapping two variables.

```c
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int first = 10;
    int second = 20;

    swap(&first, &second);

    printf("First: %d\n", first);
    printf("Second: %d\n", second);

    return 0;
}
```

Output:

```text
First: 20
Second: 10
```

This works because the function receives addresses of the original variables.

---

## 14. Pointers and Arrays

Arrays and pointers are closely related, but they are not the same thing.

```c
int numbers[] = {10, 20, 30, 40};
int *pointer = numbers;
```

In most expressions, the array name converts to a pointer to its first element.

```text
numbers
   |
   v
+----+----+----+----+
| 10 | 20 | 30 | 40 |
+----+----+----+----+
  ^
  |
pointer
```

These expressions access the first element:

```c
numbers[0]
*pointer
```

The second element can be accessed using:

```c
numbers[1]
*(pointer + 1)
```

The array name itself is not an assignable pointer variable, and `sizeof(numbers)` gives the size of the whole array when `numbers` is still an array object in that scope.

---

## 15. Pointer Arithmetic

Pointer arithmetic allows movement between elements of an array.

```c
int numbers[] = {10, 20, 30};
int *pointer = numbers;

printf("%d\n", *pointer);
printf("%d\n", *(pointer + 1));
printf("%d\n", *(pointer + 2));
```

Output:

```text
10
20
30
```

When a pointer points to an array element, adding `1` advances it to the next element, not necessarily to the next byte.

```text
pointer
   |
   v
+----+----+----+
| 10 | 20 | 30 |
+----+----+----+
   +1    +2
```

Pointer arithmetic is only defined within an array object and its one-past-the-end position, subject to the language rules. The one-past pointer may be used for comparison or iteration boundaries, but must not be dereferenced.

---

## 16. Traversing Arrays With Pointers

```c
#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    for (size_t i = 0; i < length; i++)
    {
        printf("%d\n", *(numbers + i));
    }

    return 0;
}
```

The expression:

```c
*(numbers + i)
```

is equivalent to:

```c
numbers[i]
```

for valid array indexes.

Pointer-based traversal is common in C, but it is not automatically faster than array indexing. Compilers can optimize both forms.

---

## 17. Pointers and Strings

C strings are null-terminated character arrays.

```c
char text[] = "Hello";
char *pointer = text;
```

You can traverse the string using a pointer:

```c
while (*pointer != '\0')
{
    printf("%c\n", *pointer);
    pointer++;
}
```

The pointer advances one character at a time until it reaches the null terminator.

### String literal caution

```c
const char *text = "Hello";
```

Treat string literals as non-modifiable. Use a character array when you need to change the characters:

```c
char text[] = "Hello";
text[0] = 'Y';
```

---

## 18. Pointer to Pointer

A pointer to pointer stores the address of another pointer.

```c
int number = 10;
int *pointer = &number;
int **double_pointer = &pointer;
```

Conceptually:

```text
double_pointer
       |
       v
   +---------+
   | pointer |
   +---------+
       |
       v
   +---------+
   |   10    |
   +---------+
     number
```

Access the original value using:

```c
printf("%d\n", **double_pointer);
```

Output:

```text
10
```

A pointer to pointer is useful when a function needs to change a caller's pointer variable or when working with certain multidimensional data structures.

---

## 19. Constant Pointers and Pointers to Constants

The placement of `const` changes what can be modified.

### Pointer to constant data

```c
const int *pointer;
```

You cannot modify the pointed-to integer through this pointer, but you can make the pointer point somewhere else.

### Constant pointer

```c
int *const pointer = &number;
```

The pointer itself cannot be reassigned, but the integer can be modified through it.

### Constant pointer to constant data

```c
const int *const pointer = &number;
```

Neither the pointer nor the pointed-to value can be changed through this pointer.

| Declaration | Reassign pointer? | Modify object through pointer? |
|---|---|---|
| `int *p` | Yes | Yes |
| `const int *p` | Yes | No |
| `int *const p` | No | Yes |
| `const int *const p` | No | No |

These restrictions apply through the declared pointer; other valid aliases may still modify the object.

---

## 20. `void *` Pointers

A `void *` is a generic object pointer.

```c
int number = 10;
void *pointer = &number;
```

A `void *` can hold a converted pointer to an object of a different type. It cannot be dereferenced directly because it has no pointed-to object type.

Convert it to an appropriate pointer type before accessing the object:

```c
printf("%d\n", *(int *)pointer);
```

Function pointers are a separate topic; do not assume `void *` is a portable universal container for function pointers.

---

## 21. `sizeof` and Pointers

The `sizeof` operator reports the size in bytes of a type or object.

```c
int number = 10;
int *pointer = &number;

printf("Integer size: %zu\n", sizeof(number));
printf("Pointer size: %zu\n", sizeof(pointer));
```

The actual values depend on the implementation.

Important:

```c
sizeof(pointer)
```

reports the size of the pointer itself, not the size of the object it points to.

Similarly:

```c
sizeof(numbers)
```

reports the complete array size only when `numbers` is an actual array in that scope, not a pointer parameter.

---

## 22. Invalid and Dangling Pointers

A pointer must refer to a valid object before it is dereferenced.

### Uninitialized pointer

```c
int *pointer;

/* Invalid: pointer is uninitialized. */
```

### Null pointer

```c
int *pointer = NULL;

/* Invalid: do not dereference NULL. */
```

### Dangling pointer

A dangling pointer refers to an object whose lifetime has ended or whose storage is no longer valid.

```c
int *pointer = NULL;

{
    int local = 10;
    pointer = &local;
}

/* local's lifetime has ended. */
/* Do not dereference pointer here. */
```

Initialize pointers, track object lifetimes, and avoid returning addresses of local automatic variables.

---

## 23. Pointers and Dynamic Memory

Pointers are used to access dynamically allocated memory.

The standard library provides:

```c
malloc()
calloc()
realloc()
free()
```

These functions are declared in:

```c
#include <stdlib.h>
```

Example:

```c
int *numbers = malloc(5 * sizeof(*numbers));

if (numbers != NULL)
{
    /* Use the allocated array. */

    free(numbers);
}
```

Dynamic allocation allows memory to be requested at runtime. It introduces additional responsibilities, including checking allocation results and ensuring allocated memory is released correctly.

Dynamic memory is covered in the dedicated `12-Dynamic-Memory/` folder.

---

## 24. Pointers and Data Structures

Pointers are essential for many dynamic data structures.

### Linked list

```text
[data | next] -> [data | next] -> [data | NULL]
```

### Binary tree

```text
          [root]
          /    \
      [left]  [right]
```

### Graph

Nodes can store pointers or indexes representing connections, depending on the implementation.

Pointers enable structures whose elements are connected through references rather than requiring all elements to be stored in one fixed-size array.

---

## 25. Common Pointer Mistakes

### Mistake 1 — Using an uninitialized pointer

```c
int *pointer;
/* Do not dereference pointer. */
```

### Mistake 2 — Dereferencing `NULL`

```c
int *pointer = NULL;
/* Do not evaluate *pointer. */
```

### Mistake 3 — Confusing address and value

```c
&number   // Address
number    // Value
*pointer  // Value of pointed-to object
```

### Mistake 4 — Incorrect pointer type

Use a pointer type compatible with the object being accessed.

### Mistake 5 — Out-of-bounds pointer arithmetic

Do not dereference pointers outside the valid array range.

### Mistake 6 — Returning the address of a local variable

The local variable's lifetime ends when its function returns. A pointer to it must not be used to access that former object.

### Mistake 7 — Losing dynamically allocated memory

Keep track of allocated memory so it can be released with `free()` when no longer needed.

### Mistake 8 — Use-after-free

After releasing dynamically allocated storage, do not dereference pointers to that storage.

---

## 26. Pointers and DSA

Pointers form a foundation for implementing:

- Linked lists
- Stacks and queues
- Trees and binary search trees
- Graphs
- Dynamic data structures
- Efficient array and string algorithms

Understanding pointers makes it easier to reason about references between objects, memory ownership, and how data structures are connected.

---

## 27. Pointers and AI/ML

Pointers are relevant to low-level programming used in data-intensive and AI/ML software.

Examples include:

- Memory buffers containing numerical data.
- Array and matrix processing in C libraries.
- Efficient data access in native extensions.
- Memory management in performance-sensitive software.
- Understanding how Python extensions interact with native code.

Conceptually:

```text
Numerical Data
      ↓
Arrays and Buffers
      ↓
Pointers and Memory
      ↓
Native C/C++ Libraries
      ↓
Data Processing and ML Infrastructure
```

Python and high-level ML frameworks often hide pointer operations from users, but understanding them helps when investigating performance, memory layout, and native extensions.

---

## 28. Quick Reference

| Syntax | Meaning |
|---|---|
| `int *p;` | Declare a pointer to `int` |
| `p = &number;` | Store the address of `number` |
| `*p` | Access the pointed-to object |
| `&number` | Obtain the address of `number` |
| `p == NULL` | Check whether `p` is null |
| `p + 1` | Advance to the next element when valid for an array |
| `int **p;` | Declare a pointer to a pointer to `int` |
| `const int *p;` | Pointer to constant integer data |
| `int *const p = &x;` | Constant pointer to integer |
| `sizeof(p)` | Size of the pointer object |
| `free(p)` | Release compatible dynamically allocated storage |

---

## 29. Compilation

Compile a pointer example:

```bash
gcc 01-address-of-operator.c -o 01-address-of-operator
```

Recommended warning flags:

```bash
gcc -Wall -Wextra -Wpedantic 01-address-of-operator.c -o 01-address-of-operator
```

Run on Windows:

```bash
01-address-of-operator.exe
```

Run on Linux/macOS:

```bash
./01-address-of-operator
```

---

## 30. Folder Structure

```text
10-Pointers/
│
├── README.md
│
├── examples/
│   ├── 01-address-of-operator.c
│   ├── 02-pointer-basics.c
│   ├── 03-declaration-and-initialization.c
│   ├── 04-dereferencing-pointers.c
│   ├── 05-pointer-and-variable.c
│   ├── 06-changing-values-with-pointers.c
│   ├── 07-pointers-and-functions.c
│   ├── 08-pointers-and-arrays.c
│   ├── 09-pointer-arithmetic.c
│   ├── 10-null-pointers.c
│   ├── 11-constant-pointers.c
│   ├── 12-pointers-and-strings.c
│   ├── 13-pointer-to-pointer.c
│   ├── 14-sizeof-pointer.c
│   └── 15-void-pointers.c
│
├── practice/
│   ├── 01-print-variable-address.c
│   ├── 02-access-value-with-pointer.c
│   ├── 03-swap-two-numbers.c
│   ├── 04-modify-value-with-function.c
│   ├── 05-sum-array-with-pointers.c
│   ├── 06-reverse-array-with-pointers.c
│   ├── 07-string-length-with-pointers.c
│   └── 08-pointer-based-array-search.c
│
└── mini-project/
    ├── 01-pointer-based-calculator.c
    └── 02-array-statistics-with-pointers.c
```

---

## 31. Learning Flow

```text
Variables
   ↓
Memory Addresses
   ↓
Address-of Operator (&)
   ↓
Pointer Declaration
   ↓
Dereferencing (*)
   ↓
Changing Values Through Pointers
   ↓
Pointers and Functions
   ↓
Pointers and Arrays
   ↓
Pointer Arithmetic
   ↓
Pointers and Strings
   ↓
Pointer to Pointer
   ↓
Pointer Safety
   ↓
Dynamic Memory
   ↓
Data Structures
```

---

## 32. Key Concepts

Remember these core ideas:

- A pointer stores an address or a null pointer value.
- `&` obtains the address of an object.
- `*` declares a pointer type or dereferences a pointer, depending on context.
- A valid pointer can provide indirect access to an object.
- C passes all function arguments by value, including pointers.
- Arrays and pointers are related, but they are not interchangeable in every context.
- Pointer arithmetic must respect object and array boundaries.
- A pointer must not be dereferenced when it is null, uninitialized, dangling, or otherwise invalid.
- Dynamic memory management requires careful allocation and deallocation.

> **The central idea:** Pointers connect C variables to memory addresses and allow programs to access objects indirectly. Mastering pointers prepares you for dynamic memory, advanced C, and data structures.
