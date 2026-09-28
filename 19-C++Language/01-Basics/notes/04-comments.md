# 💬 Comments in C++

> Comments are non-executable text used to explain, document, and organize C++ source code.

---

## 1. What Are Comments?

Comments are parts of a C++ program that are **ignored by the compiler**.

They are written for humans, not for the computer.

```cpp
#include <iostream>

int main() {
    // Print a message
    std::cout << "Hello, World!";

    return 0;
}
```

Output:

```text
Hello, World!
```

The compiler does not execute:

```cpp
// Print a message
```

---

## 2. Why Use Comments?

Comments are useful for:

* Explaining difficult code
* Documenting program logic
* Describing functions or sections
* Temporarily disabling code
* Making code easier to maintain
* Helping other developers understand the program
* Recording assumptions or important details

### Example

```cpp
// Calculate the average of two numbers
double average = (a + b) / 2.0;
```

---

# 3. Types of Comments in C++

C++ supports two primary comment styles:

1. Single-line comments
2. Multi-line comments

---

# 4. Single-Line Comments

A single-line comment starts with:

```cpp
//
```

Everything after `//` on that line is treated as a comment.

### Example

```cpp
// This is a comment

int age = 18;
```

The compiler processes:

```cpp
int age = 18;
```

but ignores:

```cpp
// This is a comment
```

---

## 5. Inline Comments

Comments can also appear after code.

```cpp
int age = 18; // Student age
```

Another example:

```cpp
std::cout << "Hello"; // Display greeting
```

### Good Practice

Keep inline comments short.

```cpp
int max = 100; // Maximum allowed value
```

Avoid unnecessarily long inline comments.

---

# 6. Multi-Line Comments

Multi-line comments begin with:

```cpp
/*
```

and end with:

```cpp
*/
```

### Syntax

```cpp
/*
   Comment line 1
   Comment line 2
   Comment line 3
*/
```

### Example

```cpp
/*
    This program demonstrates
    a multi-line comment.
*/

#include <iostream>

int main() {
    std::cout << "Hello";

    return 0;
}
```

---

# 7. Single-Line vs Multi-Line Comments

| Feature  | Single-Line        | Multi-Line                |
| -------- | ------------------ | ------------------------- |
| Syntax   | `//`               | `/* ... */`               |
| Lines    | Usually one        | Multiple                  |
| Ends     | End of line        | `*/`                      |
| Best for | Short explanations | Larger documentation      |
| Nesting  | Not applicable     | Cannot be nested normally |

---

# 8. Commenting Out Code

Comments can temporarily disable code.

```cpp
#include <iostream>

int main() {

    std::cout << "Hello";

    // std::cout << "This will not execute";

    return 0;
}
```

The commented statement is ignored.

---

## 9. Multi-Line Code Commenting

Multiple lines can be disabled using a block comment.

```cpp
/*
std::cout << "Line 1";
std::cout << "Line 2";
std::cout << "Line 3";
*/
```

This can be useful while experimenting.

However, permanently leaving large blocks of unused code commented out can make a project harder to maintain.

---

# 10. Comments Do Not Affect Program Output

Consider:

```cpp
#include <iostream>

int main() {

    // First message
    std::cout << "Hello";

    /*
       Second message
       is currently disabled.
    */

    return 0;
}
```

Output:

```text
Hello
```

Comments have no direct effect on the program's runtime behavior.

---

# 11. Comments and Whitespace

Comments behave differently from ordinary executable statements.

```cpp
int x = 10;

// Comment

int y = 20;
```

The comment does not create a variable or perform an operation.

Conceptually:

```text
Source Code
     │
     ├── Comments ──────→ Ignored
     │
     └── Actual Code ───→ Processed
```

---

# 12. Comments Inside Expressions

A comment can appear between parts of source code when the resulting tokens remain valid.

```cpp
int result = 10 /* first value */ + 20;
```

This is valid and equivalent to:

```cpp
int result = 10 + 20;
```

However, inserting comments in the middle of expressions too frequently can reduce readability.

---

# 13. Documentation Comments

Large C++ projects often use structured comments to document APIs, classes, and functions.

For example:

```cpp
/**
 * Calculates the square of a number.
 */
int square(int x) {
    return x * x;
}
```

Tools such as documentation generators can use specially formatted comments.

---

# 14. Good Comments vs Bad Comments

### Bad

```cpp
int age = 18; // Create an integer variable called age and assign 18
```

The code already makes this obvious.

### Better

```cpp
int age = 18; // User's age
```

### Even Better When Appropriate

Explain **why**, not merely **what**.

```cpp
// Use 64-bit storage because the dataset can exceed 2 billion records.
long long recordCount;
```

---

# 15. Comments Should Explain Why

One of the most useful commenting principles is:

> Code should explain what it does; comments should explain why it does it.

Example:

```cpp
// Keep one extra slot because the input format may contain a trailing delimiter.
std::vector<int> values;
```

The comment provides information that may not be obvious from the code itself.

---

# 16. Common Mistakes

### Mistake 1: Forgetting the closing `*/`

```cpp
/*
This comment never ends

int x = 10;
```

This can cause compilation problems because the compiler treats subsequent text as part of the comment.

Correct:

```cpp
/*
This comment ends here.
*/
```

---

### Mistake 2: Incorrect nesting

C++ block comments cannot normally be nested.

```cpp
/*
    Outer comment
    /*
        Inner comment
    */
*/
```

Avoid nested block comments.

---

### Mistake 3: Over-commenting

Avoid:

```cpp
int x = 10; // Assign 10 to x
x++;        // Increase x by 1
```

when the code is already obvious.

---

### Mistake 4: Outdated comments

Bad:

```cpp
// Maximum size is 100
int maxSize = 500;
```

Comments should remain consistent with the code.

---

# 17. Comments and Preprocessor Directives

Comments are removed during preprocessing and do not become executable instructions.

For example:

```cpp
#include <iostream>

// This is a comment

int main() {
    std::cout << "Hello";
}
```

The compiler ultimately works with a processed form of the source rather than executing the comments.

---

# 18. Comments in Large Projects

A professional project commonly uses comments for:

* File descriptions
* Function documentation
* Complex algorithms
* Important assumptions
* Non-obvious implementation decisions
* TODO notes
* FIXME notes

Example:

```cpp
// TODO: Replace linear search with a hash-based lookup.
```

Another example:

```cpp
// FIXME: Handle empty input before calculating the average.
```

---

# 19. Comments in AI/ML Code

Comments are especially useful in AI/ML projects for explaining:

* Feature transformations
* Dataset assumptions
* Mathematical operations
* Model configuration
* Performance optimizations
* Tensor dimensions
* Preprocessing decisions

Example:

```cpp
// Normalize pixel values from [0, 255] to [0, 1].
pixel /= 255.0;
```

Another example:

```cpp
// Input tensor shape: batch × channels × height × width.
```

---

# 20. Interview Points

* `//` creates a single-line comment.
* `/* ... */` creates a block comment.
* Comments are not executable code.
* Block comments cannot normally be nested.
* Comments improve readability and maintainability.
* Good comments explain non-obvious decisions and **why** something is done.

---

# 21. Key Takeaways

```text
Comments
   │
   ├── //              → Single-line
   │
   ├── /* ... */       → Multi-line
   │
   ├── Documentation   → Explain APIs/code
   │
   └── TODO/FIXME      → Development notes
```

Good comments make code easier to understand without repeating what the code already clearly says.
