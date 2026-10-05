# 09 — Strings in C

Strings in C are sequences of characters stored inside character arrays and terminated by a special null character `'\0'`.

Unlike languages such as Python or Java, C does not have a built-in `string` data type. Strings are represented using arrays of `char` and are commonly manipulated using functions from `<string.h>`.

```text
Character
    ↓
Character Array
    ↓
'\0' Null Terminator
    ↓
C String
    ↓
String Input / Output
    ↓
String Library Functions
    ↓
String Manipulation
    ↓
String + Functions
    ↓
String + Pointers
```

---

## 1. What Is a String?

A C string is a sequence of characters ending with the null character:

```c
'\0'
```

Example:

```c
char name[] = "Gursimran";
```

Internally, the characters are stored approximately as:

```text
+---+---+---+---+---+---+---+---+---+
| G | u | r | s | i | m | r | a | n |
+---+---+---+---+---+---+---+---+---+
                                        |
                                      '\0'
```

The null character tells C where the string ends.

---

## 2. Character vs String

A character contains a single character:

```c
char grade = 'A';
```

A string contains multiple characters:

```c
char name[] = "Gursimran";
```

### Character

```c
'A'
```

### String

```c
"Gursimran"
```

Notice the syntax:

```text
Character → 'A'
String    → "A"
```

---

## 3. Character Arrays

Strings are stored using character arrays.

```c
char name[20];
```

This creates space for 20 characters.

Example:

```c
char name[10] = "Gursimran";
```

The array needs space for the characters plus the null terminator.

```text
G u r s i m r a n \0
```

---

## 4. Null Character `'\0'`

The null character marks the end of a C string.

```c
char word[] = "Hello";
```

Conceptually:

```text
H   e   l   l   o   \0
↓   ↓   ↓   ↓   ↓    ↓
0   1   2   3   4    5
```

The string contains 5 visible characters, but the array requires 6 elements including `'\0'`.

```c
printf("%s", word);
```

`printf()` continues reading characters until it encounters `'\0'`.

---

## 5. String Initialization

### Using a String Literal

```c
char name[] = "Gursimran";
```

The compiler automatically adds `'\0'`.

### Explicit Character Initialization

```c
char name[] = {'G', 'u', 'r', 's', 'i', 'm', 'r', 'a', 'n', '\0'};
```

Both represent the same string.

---

## 6. Fixed-Size String Array

```c
char name[20] = "Gursimran";
```

The array has space for 20 characters.

```text
Used:
G u r s i m r a n \0

Unused:
_ _ _ _ _ _ _ _ _ _
```

The extra capacity can be useful when the string may change.

---

## 7. String Length

The standard library function:

```c
strlen()
```

returns the number of characters before `'\0'`.

Include:

```c
#include <string.h>
```

Example:

```c
char name[] = "Gursimran";

printf("Length: %zu\n", strlen(name));
```

Output:

```text
Length: 9
```

Important:

```text
strlen() → does NOT count '\0'
```

---

## 8. `strlen()` vs `sizeof()`

These two operations are different.

```c
char name[] = "Hello";
```

Then:

```c
strlen(name)
```

returns:

```text
5
```

while:

```c
sizeof(name)
```

returns:

```text
6
```

because the array contains:

```text
H e l l o \0
```

### Comparison

| Operation | Meaning |
|---|---|
| `strlen()` | Number of characters before `'\0'` |
| `sizeof()` | Size of the array/object in bytes |

`sizeof()` should not be confused with string length.

---

# 9. String Input

## Using `fgets()`

For general text input, `fgets()` is preferred because it can limit how many characters are stored.

```c
char name[50];

fgets(name, sizeof(name), stdin);
```

Example:

```c
#include <stdio.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Name: %s", name);

    return 0;
}
```

`fgets()` may store the newline character if there is enough space.

For example:

```text
Input:
Gursimran\n

Stored:
G u r s i m r a n \n \0
```

---

# 10. Removing the Newline From `fgets()`

A common technique is:

```c
name[strcspn(name, "\n")] = '\0';
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Name: %s\n", name);

    return 0;
}
```

`strcspn()` finds the position of the first newline character.

---

# 11. Why `gets()` Should Not Be Used

Never use:

```c
gets(name);
```

`gets()` cannot limit the amount of input and was removed from the C standard because it can cause buffer overflows.

Prefer:

```c
fgets(name, sizeof(name), stdin);
```

---

# 12. Printing Strings

Use:

```c
%s
```

with `printf()`.

Example:

```c
char name[] = "Gursimran";

printf("%s\n", name);
```

You can also access individual characters:

```c
printf("%c\n", name[0]);
```

Output:

```text
G
```

---

# 13. Accessing Individual Characters

Because a string is a character array, individual characters can be accessed using indexes.

```c
char name[] = "Gursimran";
```

```text
Index:
0 1 2 3 4 5 6 7 8
↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓
G u r s i m r a n
```

Example:

```c
printf("%c\n", name[0]);
printf("%c\n", name[4]);
printf("%c\n", name[8]);
```

Output:

```text
G
i
n
```

---

# 14. Modifying a String

Character arrays can be modified.

```c
char name[] = "Hello";

name[0] = 'Y';

printf("%s\n", name);
```

Output:

```text
Yello
```

However, a string literal should not be modified:

```c
char *name = "Hello";
```

Do not attempt:

```c
name[0] = 'Y';
```

String literals should be treated as non-modifiable.

---

# 15. Copying Strings

The standard library provides:

```c
strcpy()
```

Include:

```c
#include <string.h>
```

Example:

```c
char source[] = "Hello";
char destination[20];

strcpy(destination, source);
```

Now:

```text
source      → Hello
destination → Hello
```

### Important

The destination must have enough space for the copied string and its terminating `'\0'`.

---

# 16. Safer Bounded Copy Considerations

A common function is:

```c
strncpy()
```

However, `strncpy()` has behavior that can be surprising: if the source is too long, it may not append a terminating `'\0'`.

Therefore, when using bounded copying, make sure the destination is explicitly terminated when necessary.

Example:

```c
char destination[10];

strncpy(destination, source, sizeof(destination) - 1);
destination[sizeof(destination) - 1] = '\0';
```

For beginner code, always think about:

```text
Destination capacity
        ↓
Maximum characters copied
        ↓
Space for '\0'
```

---

# 17. Concatenating Strings

Concatenation means joining strings.

The standard function is:

```c
strcat()
```

Example:

```c
char first[30] = "Hello ";
char second[] = "World";

strcat(first, second);

printf("%s\n", first);
```

Output:

```text
Hello World
```

The destination array must have enough capacity for the final string.

---

# 18. Comparing Strings

Do not compare strings using:

```c
if (name1 == name2)
```

That compares pointer values in common string-pointer expressions, not the contents of the strings.

Use:

```c
strcmp()
```

Example:

```c
if (strcmp(name1, name2) == 0)
{
    printf("Strings are equal.\n");
}
```

### `strcmp()` Result

```text
strcmp(a, b)

< 0  → a comes before b
  0  → a and b are equal
> 0  → a comes after b
```

The exact non-zero value is not guaranteed to be `-1` or `1`.

---

# 19. Searching Inside a String

The standard library provides:

```c
strchr()
```

It searches for the first occurrence of a character.

Example:

```c
char text[] = "Artificial Intelligence";

char *result = strchr(text, 'I');

if (result != NULL)
{
    printf("Character found.\n");
}
```

`strchr()` returns:

```text
Pointer to the first matching character
```

or:

```text
NULL
```

if the character is not found.

---

# 20. String Reversal

C does not provide a standard portable function called:

```c
strrev()
```

Therefore, strings can be reversed manually.

Basic idea:

```text
Original:
H E L L O

Swap:
H ↔ O
E ↔ L

Result:
O L L E H
```

Example logic:

```c
size_t left = 0;
size_t right = strlen(text) - 1;

while (left < right)
{
    char temp = text[left];
    text[left] = text[right];
    text[right] = temp;

    left++;
    right--;
}
```

Be careful with empty strings before calculating `strlen(text) - 1`, because `size_t` is unsigned.

---

# 21. Uppercase and Lowercase

The `<ctype.h>` header provides functions such as:

```c
toupper()
tolower()
```

Example:

```c
#include <ctype.h>

char letter = 'a';

letter = (char)toupper((unsigned char)letter);
```

For an entire string:

```c
for (size_t i = 0; text[i] != '\0'; i++)
{
    text[i] = (char)toupper((unsigned char)text[i]);
}
```

Similarly:

```c
text[i] = (char)tolower((unsigned char)text[i]);
```

There are no standard portable C functions named:

```text
strupr()
strlwr()
```

---

# 22. Character Classification

The `<ctype.h>` library also provides useful functions:

| Function | Purpose |
|---|---|
| `isalpha()` | Alphabetic character |
| `isdigit()` | Decimal digit |
| `isalnum()` | Letter or digit |
| `isspace()` | Whitespace |
| `islower()` | Lowercase |
| `isupper()` | Uppercase |
| `ispunct()` | Punctuation |

Example:

```c
if (isdigit((unsigned char)text[i]))
{
    printf("Digit found.\n");
}
```

Using an `unsigned char` conversion is important when passing ordinary `char` values to `<ctype.h>` functions.

---

# 23. Counting Characters

A string can be processed character by character.

```c
size_t count = 0;

while (text[count] != '\0')
{
    count++;
}
```

This is essentially what a basic string-length traversal does.

---

# 24. Counting Vowels

Example logic:

```text
Read character
      ↓
Is it a vowel?
      ↓
   Yes → count++
      ↓
Next character
      ↓
'\0' reached?
      ↓
    Stop
```

Possible vowels:

```text
a e i o u
A E I O U
```

This type of character-by-character processing is fundamental to many string problems.

---

# 25. Palindrome Strings

A palindrome reads the same forward and backward.

Examples:

```text
madam
level
radar
```

Conceptually:

```text
madam
 ↓↓↓↓↓
madam
```

A common algorithm:

```text
left → first character
right → last character

while left < right

compare text[left] and text[right]

if different
    not palindrome

left++
right--
```

---

# 26. Strings With Functions

Strings can be passed to functions.

Example:

```c
void display_name(const char name[])
{
    printf("Name: %s\n", name);
}
```

Call:

```c
char name[] = "Gursimran";

display_name(name);
```

You can also write:

```c
void display_name(const char *name)
{
    printf("Name: %s\n", name);
}
```

For function parameters, these forms are closely related because an array parameter is adjusted to a pointer parameter.

---

# 27. `const` With Strings

When a function only needs to read a string:

```c
void print_text(const char *text)
{
    printf("%s\n", text);
}
```

`const` communicates that the function should not modify the characters through that pointer.

This is useful for safer function interfaces.

---

# 28. Strings and Pointers

Strings provide an important connection between arrays and pointers.

```c
char text[] = "Hello";
```

The array contains the characters.

When passed to a function:

```c
print_text(text);
```

the array expression is converted to a pointer to its first element in most expression contexts.

Conceptually:

```text
text
 ↓
+---+---+---+---+---+----+
| H | e | l | l | o | \0 |
+---+---+---+---+---+----+
  ↑
  |
  pointer to first character
```

This becomes especially important when learning pointers.

---

# 29. Common String Library Functions

Include:

```c
#include <string.h>
```

| Function | Purpose |
|---|---|
| `strlen()` | Find string length |
| `strcpy()` | Copy a string |
| `strncpy()` | Copy up to a specified number of characters |
| `strcat()` | Append one string to another |
| `strncat()` | Append up to a specified number of characters |
| `strcmp()` | Compare strings |
| `strncmp()` | Compare up to a specified number of characters |
| `strchr()` | Find first occurrence of a character |
| `strrchr()` | Find last occurrence of a character |
| `strstr()` | Find a substring |
| `strcspn()` | Find length before characters from a set |
| `strspn()` | Find length of initial segment containing only specified characters |

---

# 30. `strstr()` — Searching for a Substring

`strstr()` searches for one string inside another.

Example:

```c
char text[] = "Machine Learning";
char *result = strstr(text, "Learning");

if (result != NULL)
{
    printf("Substring found.\n");
}
```

It returns a pointer to the first occurrence of the substring or `NULL`.

---

# 31. String Memory Layout

Consider:

```c
char word[] = "CAT";
```

Memory conceptually looks like:

```text
Address       Value
-------       -----
1000          'C'
1001          'A'
1002          'T'
1003          '\0'
```

The characters are stored contiguously.

This connects strings directly to:

```text
Arrays
  ↓
Memory
  ↓
Pointers
  ↓
Dynamic Memory
```

---

# 32. Buffer Size and Overflow

Consider:

```c
char name[5];
```

The array can store at most:

```text
4 visible characters + '\0'
```

For example:

```text
A B C D \0
```

Trying to store a longer string without adequate space can cause undefined behavior.

Always consider:

```text
Required space
      +
Null terminator
      ↓
Available capacity
```

---

# 33. Common String Mistakes

### Mistake 1 — Forgetting `'\0'`

Incorrect manual string construction:

```c
char word[3] = {'C', 'A', 'T'};
```

This is a character array, but it is not a valid null-terminated C string.

Correct:

```c
char word[4] = {'C', 'A', 'T', '\0'};
```

---

### Mistake 2 — Comparing Strings With `==`

Incorrect:

```c
if (first == second)
```

Use:

```c
if (strcmp(first, second) == 0)
```

---

### Mistake 3 — Insufficient Destination Space

Incorrect assumption:

```c
char first[10] = "Hello";
char second[] = "World";

strcat(first, second);
```

The final string requires more space than `first` provides.

Always allocate enough capacity.

---

### Mistake 4 — Unsafe Input

Avoid:

```c
gets(name);
```

Prefer:

```c
fgets(name, sizeof(name), stdin);
```

---

### Mistake 5 — Forgetting the Newline From `fgets()`

Input may contain:

```text
"Hello\n"
```

when you expected:

```text
"Hello"
```

Handle it when necessary:

```c
name[strcspn(name, "\n")] = '\0';
```

---

### Mistake 6 — Modifying a String Literal

Avoid:

```c
char *text = "Hello";
text[0] = 'Y';
```

Use a character array when modification is required:

```c
char text[] = "Hello";
text[0] = 'Y';
```

---

# 34. String Processing Pattern

Many string problems follow this general pattern:

```text
        Input String
             ↓
      Remove/Handle '\n'
             ↓
      Traverse Characters
             ↓
     ┌───────┴────────┐
     ↓                ↓
   Analyze          Modify
     ↓                ↓
 Count/Search      Convert/Reverse
     ↓                ↓
     └───────┬────────┘
             ↓
           Output
```

This pattern appears frequently in DSA.

---

# 35. Strings and DSA

Strings are one of the most important structures for DSA.

Common problems include:

```text
String Traversal
       ↓
Counting Characters
       ↓
Frequency Counting
       ↓
Searching
       ↓
Comparison
       ↓
Reversal
       ↓
Palindrome
       ↓
Anagrams
       ↓
Substring Problems
       ↓
Pattern Matching
```

Later topics such as:

```text
Hashing
Two Pointers
Sliding Window
Pattern Matching
Stacks
Queues
```

frequently use strings.

---

# 36. Strings and AI/ML

Strings are fundamental to many AI and ML systems.

Examples:

```text
Text
 ↓
String Processing
 ↓
Cleaning
 ↓
Tokenization
 ↓
Feature Extraction
 ↓
Vector Representation
 ↓
Machine Learning / NLP Model
```

Examples of real-world text data:

```text
User reviews
Tweets/posts
Documents
Search queries
Chat messages
Product descriptions
Emails
```

Basic C string manipulation builds an understanding of:

```text
Characters
 ↓
Arrays
 ↓
Memory
 ↓
Pointers
 ↓
Text Processing
```

These concepts become useful when understanding lower-level implementations behind AI/ML software.

---

# 37. String Time Complexity

For a string of length `n`:

| Operation | Typical Complexity |
|---|---:|
| Access character | `O(1)` |
| Traverse string | `O(n)` |
| `strlen()` | `O(n)` |
| Copy string | `O(n)` |
| Compare strings | `O(n)` |
| Search for a character | `O(n)` |
| Reverse string | `O(n)` |
| Concatenate | `O(n + m)` approximately |

Actual complexity can depend on the operation and implementation.

---

# 38. Quick Reference

### Declaration

```c
char name[50];
```

### Initialization

```c
char name[] = "Gursimran";
```

### Input

```c
fgets(name, sizeof(name), stdin);
```

### Output

```c
printf("%s", name);
```

### Length

```c
strlen(name);
```

### Copy

```c
strcpy(destination, source);
```

### Concatenate

```c
strcat(destination, source);
```

### Compare

```c
strcmp(first, second);
```

### Search Character

```c
strchr(text, 'a');
```

### Search Substring

```c
strstr(text, "AI");
```

### Remove Newline

```c
name[strcspn(name, "\n")] = '\0';
```

---

# 39. Essential Headers

### Standard I/O

```c
#include <stdio.h>
```

Used for:

```text
printf()
fgets()
getchar()
putchar()
```

### String Functions

```c
#include <string.h>
```

Used for:

```text
strlen()
strcpy()
strncpy()
strcat()
strcmp()
strchr()
strstr()
strcspn()
```

### Character Functions

```c
#include <ctype.h>
```

Used for:

```text
toupper()
tolower()
isalpha()
isdigit()
isalnum()
isspace()
```

---

# 40. Compilation

Compile a string program:

```bash
gcc 01-character-array.c -o 01-character-array
```

Recommended warnings:

```bash
gcc -Wall -Wextra -Wpedantic 01-character-array.c -o 01-character-array
```

Run on Windows:

```bash
01-character-array.exe
```

Run on Linux/macOS:

```bash
./01-character-array
```

---

# 41. Folder Structure

```text
09-Strings/
│
├── README.md
│
├── examples/
│   ├── 01-character-array.c
│   ├── 02-string-initialization.c
│   ├── 03-string-input.c
│   ├── 04-string-output.c
│   ├── 05-string-length.c
│   ├── 06-string-copy.c
│   ├── 07-string-concatenation.c
│   ├── 08-string-comparison.c
│   ├── 09-string-search.c
│   ├── 10-string-reverse.c
│   ├── 11-string-uppercase.c
│   ├── 12-string-lowercase.c
│   ├── 13-string-with-functions.c
│   └── 14-string-library-functions.c
│
├── practice/
│   ├── 01-count-characters.c
│   ├── 02-count-vowels.c
│   ├── 03-count-consonants.c
│   ├── 04-reverse-string.c
│   ├── 05-palindrome-string.c
│   ├── 06-compare-strings.c
│   ├── 07-count-words.c
│   └── 08-remove-spaces.c
│
└── mini-project/
    ├── 01-text-analyzer.c
    └── 02-password-validator.c
```

---

# 42. Learning Flow

```text
Character
    ↓
Character Array
    ↓
Null Terminator '\0'
    ↓
String Initialization
    ↓
String Input / Output
    ↓
strlen()
    ↓
strcpy()
    ↓
strcat()
    ↓
strcmp()
    ↓
String Searching
    ↓
String Reversal
    ↓
Character Processing
    ↓
String + Functions
    ↓
String + Pointers
    ↓
DSA String Problems
```

---

# 43. Key Concepts

```text
C String
    ↓
char array
    ↓
'\0'
```

Remember:

```text
strlen() → string length
sizeof() → object/array size in bytes

strcpy() → copy
strcat() → concatenate
strcmp() → compare
strchr() → find character
strstr() → find substring

fgets() → safer line input
```

The most important idea is:

> **A C string is not a separate built-in data type. It is a sequence of characters stored in memory and terminated by `'\0'`.**

Understanding strings properly creates the bridge between:

```text
Arrays
   ↓
Strings
   ↓
Pointers
   ↓
Memory
   ↓
Dynamic Memory
   ↓
Data Structures
   ↓
DSA
```