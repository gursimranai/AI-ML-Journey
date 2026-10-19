# 🐍 Python Cheatsheet

A quick reference for Python fundamentals, common syntax, and frequently used operations.

## 1. Variables and Basic Data Types

```python
name = "Alex"       # str
age = 20            # int
height = 5.9        # float
is_student = True   # bool
nothing = None      # NoneType
```

Check a variable's type:

```python
print(type(name))
print(type(age))
```

## 2. Type Conversion

```python
int("25")       # 25
float("3.14")   # 3.14
str(100)        # "100"
bool(1)         # True
list("cat")     # ['c', 'a', 't']
```

Note: conversion can fail when a value is incompatible with the target type. For example, `int("hello")` raises `ValueError`.

## 3. Input and Output

```python
name = input("Enter your name: ")
age = int(input("Enter your age: "))

print("Hello,", name)
print(f"You are {age} years old.")
```

Formatted output:

```python
price = 49.9876
print(f"Price: {price:.2f}")  # Price: 49.99
```

`input()` returns a string.

## 4. Operators

| Category | Operators |
|---|---|
| Arithmetic | `+`, `-`, `*`, `/`, `//`, `%`, `**` |
| Comparison | `==`, `!=`, `<`, `>`, `<=`, `>=` |
| Logical | `and`, `or`, `not` |
| Assignment | `=`, `+=`, `-=`, `*=`, `/=` |
| Membership | `in`, `not in` |
| Identity | `is`, `is not` |
| Bitwise | `&`, `|`, `^`, `~`, `<<`, `>>` |

```python
print(10 / 3)    # 3.333...
print(10 // 3)   # 3
print(10 % 3)    # 1
print(2 ** 3)    # 8
```

**Remember:** `==` compares values; `is` checks object identity.

## 5. Conditional Statements

```python
score = 75

if score >= 90:
    print("Grade A")
elif score >= 70:
    print("Grade B")
else:
    print("Keep practicing")
```

Conditional expression:

```python
status = "Adult" if age >= 18 else "Minor"
```

## 6. Loops

### `for` loop

```python
for number in range(1, 6):
    print(number)
```

### `while` loop

```python
count = 1

while count <= 5:
    print(count)
    count += 1
```

Loop control:

- `break` — exits the loop.
- `continue` — skips to the next iteration.
- `pass` — placeholder that performs no operation.

## 7. Strings

```python
text = "Python Programming"

print(text[0])          # P
print(text[-1])         # g
print(text[0:6])        # Python
print(text.lower())
print(text.upper())
print(text.strip())
print(text.replace("Python", "AI"))
print(text.split())
```

Useful string operations:

```python
"python".startswith("py")  # True
"hello".find("e")          # 1
"-".join(["a", "b", "c"])  # a-b-c
```

Strings are immutable: methods return new strings rather than modifying the original.

## 8. Lists

```python
numbers = [10, 20, 30]

numbers.append(40)
numbers.extend([50, 60])
numbers.insert(0, 5)
numbers.remove(20)
last = numbers.pop()

print(numbers)
print(len(numbers))
print(sorted(numbers))
```

List slicing:

```python
items = [10, 20, 30, 40, 50]

print(items[0])
print(items[-1])
print(items[1:4])
print(items[::-1])
```

List comprehension:

```python
squares = [number ** 2 for number in range(1, 6)]
```

## 9. Tuples

```python
coordinates = (10, 20)
single_item = (5,)

x, y = coordinates
print(x, y)
```

Tuples are immutable. A single-element tuple requires a trailing comma.

## 10. Sets

```python
numbers = {1, 2, 3, 3}
print(numbers)  # {1, 2, 3} (display order may vary)

numbers.add(4)
numbers.discard(2)

a = {1, 2, 3}
b = {3, 4, 5}

print(a | b)  # Union
print(a & b)  # Intersection
print(a - b)  # Difference
```

Sets store unique, hashable elements and do not support positional indexing.

## 11. Dictionaries

```python
student = {
    "name": "Alex",
    "age": 20,
    "score": 85
}

print(student["name"])
print(student.get("grade", "Not available"))

student["city"] = "Delhi"
student.update({"score": 90})
student.pop("age")

for key, value in student.items():
    print(key, value)
```

Use `get()` when a missing key should return a default instead of raising `KeyError`.

## 12. Functions

```python
def add(a, b):
    return a + b

print(add(3, 5))
```

Default arguments:

```python
def greet(name, message="Hello"):
    return f"{message}, {name}!"

print(greet("Alex"))
```

Variable-length arguments:

```python
def total(*numbers):
    return sum(numbers)

def show_details(**details):
    print(details)
```

A function without an explicit `return` statement returns `None`.

## 13. Useful Built-in Functions

| Function | Purpose |
|---|---|
| `print()` | Display output |
| `input()` | Read text input |
| `type()` | Inspect an object's type |
| `len()` | Get the number of items |
| `range()` | Generate a sequence of integers |
| `sum()` | Add numeric items |
| `min()` / `max()` | Find minimum or maximum |
| `sorted()` | Return a sorted list |
| `enumerate()` | Iterate with an index |
| `zip()` | Iterate over multiple iterables together |
| `any()` / `all()` | Test truth values |
| `isinstance()` | Check an object's type relationship |

## 14. Modules and Imports

```python
import math
print(math.sqrt(25))

from random import randint
print(randint(1, 10))

import datetime
print(datetime.date.today())
```

Prefer explicit imports and avoid `from module import *` in most application code.

## 15. File Handling

Read a text file:

```python
with open("notes.txt", "r", encoding="utf-8") as file:
    content = file.read()
```

Write a text file:

```python
with open("notes.txt", "w", encoding="utf-8") as file:
    file.write("Learning Python!")
```

Common modes:

- `"r"` — read
- `"w"` — write, replacing existing content
- `"a"` — append
- `"x"` — create a new file, failing if it already exists

The `with` statement automatically closes the file.

## 16. Exception Handling

```python
try:
    number = int(input("Enter an integer: "))
    print(100 / number)
except ValueError:
    print("Please enter a valid integer.")
except ZeroDivisionError:
    print("Cannot divide by zero.")
else:
    print("Calculation completed.")
finally:
    print("Program finished.")
```

Catch specific exceptions whenever possible.

## 17. Common String Formatting

```python
name = "Alex"
score = 92.456

print(f"{name} scored {score:.2f}")
print("Name: {}, Score: {}".format(name, score))
```

For most modern Python code, f-strings are a convenient default.

## 18. Useful Debugging Techniques

```python
print(variable)
print(type(variable))
print(repr(variable))
```

- Read the complete traceback.
- Check variable values and types.
- Reduce the problem to a small reproducible example.
- Test boundary cases.
- Use a debugger when print statements are insufficient.

## 19. Common Beginner Mistakes

- Using `=` instead of `==` in a comparison.
- Forgetting indentation after `if`, `for`, `while`, or `def`.
- Assuming `input()` returns an integer.
- Confusing `append()` with `extend()`.
- Expecting string methods to modify the original string.
- Using `is` instead of `==` for ordinary value comparisons.
- Modifying a list while iterating over it without considering the consequences.
- Catching every exception with a bare `except` unnecessarily.

## 20. Quick Revision Checklist

- [ ] Variables and data types
- [ ] Type conversion
- [ ] Input and output
- [ ] Operators
- [ ] Conditional statements
- [ ] Loops
- [ ] Strings and slicing
- [ ] Lists, tuples, sets, and dictionaries
- [ ] Functions and arguments
- [ ] Built-in functions
- [ ] Modules and imports
- [ ] File handling
- [ ] Exception handling

---

**Tip:** Use this cheatsheet for quick revision, not as a substitute for understanding. Practice each concept in a Python interpreter or Jupyter notebook.
