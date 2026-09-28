# 🧩 Tokens in C++

> Tokens are the smallest meaningful units of a C++ program recognized during translation.

---

# 1. What Is a Token?

A **token** is a basic building block of a C++ program.

Consider:

```cpp
int age = 18;
```

This contains several tokens:

```text
int     age     =     18     ;
│       │       │     │      │
Keyword Identifier Operator Literal Punctuation
```

The compiler analyzes source code in terms of tokens and their relationships.

---

# 2. Main Types of C++ Tokens

C++ tokens can broadly be classified into:

1. Keywords
2. Identifiers
3. Literals
4. Operators
5. Punctuators
6. Other preprocessing-related tokens

A beginner-friendly representation is:

```text
                 C++ TOKENS
                     │
     ┌───────────────┼────────────────┐
     │               │                │
 Keywords       Identifiers       Literals
     │               │                │
 int             age              18
 return          total            "Hello"
 class           calculate        'A'
```

Operators and punctuators are also tokens.

---

# 3. Keywords

Keywords are reserved words with predefined meaning in C++.

Examples:

```cpp
int
return
if
else
for
while
class
public
private
const
```

You cannot normally use a keyword as an identifier.

Invalid:

```cpp
int class = 10;
```

---

# 4. Identifiers

Identifiers are names assigned to program entities.

Examples:

```cpp
age
studentName
totalMarks
calculateAverage
```

Example:

```cpp
int age = 18;
```

Here:

* `int` → keyword
* `age` → identifier
* `=` → operator
* `18` → literal
* `;` → punctuator

---

# 5. Literals

A literal represents a fixed value written directly in the source code.

Examples:

```cpp
10
3.14
'A'
"Hello"
true
```

Example:

```cpp
int age = 18;
```

`18` is an integer literal.

---

# 6. Integer Literals

Examples:

```cpp
10
100
-25
0
```

Different bases can also be represented.

### Decimal

```cpp
int x = 25;
```

### Binary

```cpp
int x = 0b11001;
```

### Octal

```cpp
int x = 031;
```

### Hexadecimal

```cpp
int x = 0x19;
```

---

# 7. Floating-Point Literals

Examples:

```cpp
3.14
0.5
10.0
6.02e23
```

Example:

```cpp
double pi = 3.14159;
```

---

# 8. Character Literals

Character literals use single quotes.

```cpp
'A'
'B'
'7'
'\n'
```

Example:

```cpp
char grade = 'A';
```

---

# 9. String Literals

String literals use double quotes.

```cpp
"Hello"
"AI and ML"
"Chitkara University"
```

Example:

```cpp
std::cout << "Hello";
```

---

# 10. Boolean Literals

C++ provides:

```cpp
true
false
```

Example:

```cpp
bool isStudent = true;
```

---

# 11. Operators as Tokens

Operators perform operations.

Examples:

```cpp
+
-
*
/
%
=
==
!=
<
>
&&
||
!
```

Example:

```cpp
int result = a + b;
```

Tokens include:

```text
int
result
=
a
+
b
;
```

---

# 12. Punctuators

Punctuators help structure C++ programs.

Examples include:

```text
;
,
( )
{ }
[ ]
:
::
.
->
```

Example:

```cpp
int main() {
    return 0;
}
```

Here:

* `(` and `)` → function syntax
* `{` and `}` → block
* `;` → statement terminator

---

# 13. Tokenization Example

Consider:

```cpp
int total = price + tax;
```

Token breakdown:

| Token   | Category   |
| ------- | ---------- |
| `int`   | Keyword    |
| `total` | Identifier |
| `=`     | Operator   |
| `price` | Identifier |
| `+`     | Operator   |
| `tax`   | Identifier |
| `;`     | Punctuator |

---

# 14. Another Example

```cpp
std::cout << "Hello";
```

Tokens include:

```text
std
::
cout
<<
"Hello"
;
```

Conceptually:

| Token     | Role                      |
| --------- | ------------------------- |
| `std`     | Identifier/namespace name |
| `::`      | Scope-resolution operator |
| `cout`    | Identifier                |
| `<<`      | Stream insertion operator |
| `"Hello"` | String literal            |
| `;`       | Punctuator                |

---

# 15. Whitespace and Tokens

Whitespace usually separates tokens.

```cpp
int age = 18;
```

can be formatted as:

```cpp
int     age     =     18;
```

The meaning remains the same.

However, whitespace can matter when it determines how characters are grouped into tokens.

---

# 16. Comments and Tokens

Comments are removed/ignored during the relevant translation processing and are not treated as ordinary executable tokens.

```cpp
int age = 18; // User age
```

The meaningful source elements are:

```text
int
age
=
18
;
```

---

# 17. Tokenization Diagram

```text
Source Code
     │
     ▼
Character Sequence
     │
     ▼
   Tokens
     │
     ├── Keywords
     ├── Identifiers
     ├── Literals
     ├── Operators
     └── Punctuators
     │
     ▼
Translation / Compilation
```

---

# 18. Why Tokens Matter

Understanding tokens helps you understand:

* Syntax errors
* Compiler parsing
* Operators
* Identifiers
* Keywords
* Expressions
* Statements
* Lexical analysis
* Compiler design

Tokenization is one of the early stages involved in processing source code.

---

# 19. Common Mistakes

### Mistake 1: Using a keyword as an identifier

```cpp
int return = 10;
```

Invalid.

---

### Mistake 2: Confusing character and string literals

```cpp
char grade = "A";
```

Incorrect.

Correct:

```cpp
char grade = 'A';
```

A string uses:

```cpp
"A"
```

---

### Mistake 3: Forgetting the semicolon

```cpp
int age = 18
```

Correct:

```cpp
int age = 18;
```

---

# 20. Interview Points

* Tokens are meaningful lexical units of a C++ program.
* Keywords are reserved words.
* Identifiers are programmer-defined names.
* Literals represent fixed values.
* Operators perform operations.
* Punctuators structure the program.
* Tokenization is part of source-code processing before deeper syntax analysis.

---

# 21. Key Takeaways

```text
C++ Source Code
      │
      ▼
    Tokens
      │
      ├── Keywords
      ├── Identifiers
      ├── Literals
      ├── Operators
      └── Punctuators
```

Understanding tokens makes the rest of C++ syntax much easier to understand.
