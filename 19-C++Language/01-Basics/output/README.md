# 📤 C++ Program Output

> Reference folder for observing and documenting the expected output of C++ programs from the `01-Basics` section.

---

## 📁 Purpose

The `output/` folder is used to store or document the results produced by programs in this section.

It helps connect:

```text
Source Code
    ↓
Compilation
    ↓
Execution
    ↓
Program Output
```

---

## 📂 Folder Structure

```text
01-Basics/
├── examples/
├── practice/
├── notes/
├── cheat-sheet/
└── output/
    └── README.md
```

---

## 🖥️ Example

Source program:

```cpp
#include <iostream>

int main() {

    std::cout << "Hello, World!\n";

    return 0;
}
```

Expected output:

```text
Hello, World!
```

---

## 🔍 Output vs Source Code

| Folder         | Purpose                         |
| -------------- | ------------------------------- |
| `examples/`    | Demonstrates a specific concept |
| `practice/`    | Programs written for practice   |
| `notes/`       | Conceptual explanations         |
| `cheat-sheet/` | Quick revision                  |
| `output/`      | Program output/reference        |

---

## 📝 Output Documentation

For programs where output is important, it can be documented using a simple format:

```text
Program:
01_hello_world.cpp

Expected Output:
Hello, World!
```

For programs with multiple outputs:

```text
Program:
05_use_multiple_statements.cpp

Expected Output:
A = 10
B = 20
Sum = 30
Difference = 10
Product = 200
```

---

## ⚠️ Important

The `output/` folder should **not** be used to store large numbers of automatically generated build files.

Avoid committing files such as:

```text
*.exe
*.obj
*.o
*.out
```

unless there is a specific reason to keep them.

Compiled files should normally be excluded through `.gitignore`.

---

## 💡 Why Keep an Output Reference?

Comparing expected and actual output helps identify:

* Syntax problems
* Incorrect calculations
* Unexpected program behavior
* Formatting mistakes
* Logic errors

A useful workflow is:

```text
Write Code
    ↓
Compile
    ↓
Run
    ↓
Observe Output
    ↓
Compare with Expected Output
    ↓
Fix Errors
```

---

## 🎯 Learning Principle

Do not only read the expected output.

**Run the program yourself and compare the result.**

Understanding the relationship between:

```text
Code → Execution → Output
```

is one of the most important foundations of programming.
