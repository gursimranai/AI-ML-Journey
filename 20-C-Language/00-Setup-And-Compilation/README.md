# ⚙️ C Setup & Toolchain

C programming requires a compiler, development environment, and basic build/debugging tools.

---

## 1. C Compiler

A **compiler** translates C source code into a form that the computer can execute.

Common C compilers:

| Compiler      | Description                          |
| ------------- | ------------------------------------ |
| **GCC**       | GNU Compiler Collection; widely used |
| **Clang**     | Compiler based on LLVM               |
| **MSVC**      | Microsoft's C/C++ compiler           |
| **MinGW-w64** | GCC-based toolchain for Windows      |

For this repository, GCC/Clang can be used for most examples.

---

## 2. Development Environment

A basic C development environment consists of:

```text
┌─────────────────┐
│  Code Editor    │
│   VS Code etc.  │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│    Compiler     │
│   GCC / Clang   │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│    Debugger     │
│      GDB        │
└────────┬────────┘
         │
         ▼
┌─────────────────┐
│     Terminal    │
└─────────────────┘
```

---

# 3. Checking the Compiler

### GCC

```bash
gcc --version
```

### Clang

```bash
clang --version
```

If the command returns the compiler version, the compiler is available in the terminal.

---

# 4. First C Program

Create a file named:

```text
hello.c
```

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, C!\n");

    return 0;
}
```

### Explanation

```c
#include <stdio.h>
```

Includes the standard input/output library.

```c
int main(void)
```

Defines the program's entry point.

```c
printf("Hello, C!\n");
```

Prints text to the terminal.

```c
return 0;
```

Indicates successful program termination.

---

# 5. Compiling a C Program

Using GCC:

```bash
gcc hello.c -o hello
```

Structure:

```text
gcc hello.c -o hello
│   │        │  │
│   │        │  └── Output executable name
│   │        └───── Output option
│   └────────────── Source file
└────────────────── Compiler
```

The command converts:

```text
hello.c
   ↓
hello.exe / hello
```

depending on the operating system.

---

# 6. Running the Program

### Windows

```bash
hello.exe
```

or:

```bash
.\hello.exe
```

### Linux / macOS

```bash
./hello
```

Output:

```text
Hello, C!
```

---

# 7. Compilation Process

A C program generally passes through several stages before becoming an executable.

```text
        source.c
           │
           ▼
   ┌───────────────┐
   │ Preprocessor  │
   └───────┬───────┘
           │
           ▼
   ┌───────────────┐
   │    Compiler   │
   └───────┬───────┘
           │
           ▼
      Assembly Code
           │
           ▼
   ┌───────────────┐
   │   Assembler   │
   └───────┬───────┘
           │
           ▼
      Object File
           │
           ▼
   ┌───────────────┐
   │     Linker    │
   └───────┬───────┘
           │
           ▼
       Executable
```

---

# 8. Preprocessor

The **preprocessor** processes directives beginning with `#` before actual compilation.

Example:

```c
#include <stdio.h>
#define PI 3.14159
```

Common preprocessing directives:

```c
#include
#define
#ifdef
#ifndef
#if
#else
#elif
#endif
#undef
```

The preprocessor performs tasks such as:

* Including header files
* Expanding macros
* Conditional compilation

---

# 9. Compiler

The compiler analyzes C source code and translates it into lower-level code.

For example:

```c
int x = 10;
```

is translated into instructions that can eventually be executed by the processor.

The compiler also detects many programming errors.

Example:

```c
int main()
{
    printf("Hello")
    return 0;
}
```

The missing `;` can cause a compilation error.

---

# 10. Assembler

The assembler converts assembly language into machine-level **object code**.

```text
Assembly Code
      ↓
Assembler
      ↓
Object File
```

Object files commonly contain machine code that is not yet a complete executable.

---

# 11. Linker

The linker combines object files and required libraries into the final executable.

For example:

```c
printf("Hello");
```

uses functionality provided by the C standard library.

Conceptually:

```text
main.o
   │
   ├──── Standard Library
   │
   └──── Other Object Files
            │
            ▼
         Linker
            │
            ▼
       Executable
```

---

# 12. Compiler vs Linker

### Compiler Error

Occurs during compilation.

Example:

```c
int main()
{
    int x = ;
    return 0;
}
```

The compiler cannot translate invalid syntax.

### Linker Error

Occurs when required symbols or definitions cannot be resolved during linking.

```text
Source Code
    ↓
Compiler
    ↓
Object File
    ↓
Linker ❌
```

---

# 13. Compiler Warnings

A compiler can provide warnings about potentially problematic code.

Recommended GCC command:

```bash
gcc -Wall -Wextra -Wpedantic hello.c -o hello
```

### Important flags

| Flag         | Meaning                             |
| ------------ | ----------------------------------- |
| `-Wall`      | Enables many common warnings        |
| `-Wextra`    | Enables additional warnings         |
| `-Wpedantic` | Warns about non-standard extensions |

Warnings should generally be investigated rather than blindly ignored.

---

# 14. Debug Builds

The `-g` option adds debugging information.

```bash
gcc -g hello.c -o hello
```

It can be combined with warnings:

```bash
gcc -Wall -Wextra -Wpedantic -g hello.c -o hello
```

This allows debuggers such as **GDB** to provide useful source-level debugging information.

---

# 15. Debugger

A debugger allows a program to be inspected while it is executing.

Common debugger:

```text
GDB — GNU Debugger
```

Important debugger concepts:

```text
Breakpoint
    ↓
Run
    ↓
Pause
    ↓
Inspect Variables
    ↓
Step Through Code
    ↓
Continue
```

Common operations include:

* Breakpoints
* Step over
* Step into
* Step out
* Variable inspection
* Call stack inspection

---

# 16. Important GCC Commands

| Command                    | Purpose                    |
| -------------------------- | -------------------------- |
| `gcc --version`            | Check GCC version          |
| `gcc file.c`               | Compile source file        |
| `gcc file.c -o app`        | Specify executable name    |
| `gcc -Wall file.c`         | Enable common warnings     |
| `gcc -Wall -Wextra file.c` | Enable additional warnings |
| `gcc -Wpedantic file.c`    | Check standard compliance  |
| `gcc -g file.c`            | Add debugging information  |

Example:

```bash
gcc -Wall -Wextra -Wpedantic -g main.c -o main
```

---

# 17. Source, Object & Executable Files

```text
main.c
  │
  │ compilation
  ▼
main.o
  │
  │ linking
  ▼
main.exe
```

### Source File

```text
.c
```

Contains human-readable C source code.

### Object File

Commonly:

```text
.o
.obj
```

Contains compiled machine code that may still require linking.

### Executable

Windows:

```text
.exe
```

Linux/macOS:

```text
Executable file
```

---

# 18. Header Files

Header files contain declarations and other information shared between source files.

Example:

```c
#include <stdio.h>
```

Common standard headers:

```text
stdio.h
stdlib.h
string.h
math.h
ctype.h
stdbool.h
time.h
```

Example:

```c
#include <math.h>

double result = sqrt(25.0);
```

---

# 19. PATH

`PATH` is an environment variable containing directories where the operating system searches for executable programs.

When you run:

```bash
gcc --version
```

the operating system searches directories in `PATH` to locate `gcc`.

Conceptually:

```text
Terminal
   │
   ▼
Search PATH
   │
   ▼
Find gcc
   │
   ▼
Execute gcc
```

If the compiler is installed but its directory is not available through `PATH`, the terminal may not recognize `gcc`.

---

# 20. IDE vs Compiler

An **IDE/editor** and a **compiler** are different things.

```text
VS Code
   │
   ├── Editor
   ├── Extensions
   ├── Terminal
   └── Debugging Interface
          │
          ▼
       GCC / Clang
          │
          ▼
       Executable
```

VS Code itself does not replace the C compiler.

---

# 21. Basic Project Structure

For simple C learning:

```text
topic/
│
├── README.md
│
├── examples/
│   ├── example1.c
│   └── example2.c
│
└── practice/
    ├── problem1.c
    └── problem2.c
```

For larger projects:

```text
project/
│
├── README.md
├── src/
├── include/
├── tests/
├── build/
└── docs/
```

---

# 22. Common Errors

### `gcc is not recognized`

Possible causes:

* GCC is not installed.
* GCC is not available through `PATH`.

Check:

```bash
gcc --version
```

---

### Missing semicolon

```c
printf("Hello")
```

Correct:

```c
printf("Hello");
```

---

### Wrong executable command

On Linux/macOS:

```bash
./program
```

On Windows:

```bash
program.exe
```

---

# 23. Complete Workflow

```text
Write C Code
     │
     ▼
Save .c File
     │
     ▼
Compile
     │
     ├── Error ──► Fix Code
     │
     └── Success
            │
            ▼
         Warnings?
            │
            ▼
       Investigate
            │
            ▼
       Run Program
            │
            ▼
        Test Output
            │
            ▼
          Debug
```

---

# 🔑 Quick Reference

```bash
# Check GCC
gcc --version

# Compile
gcc main.c

# Compile with custom output
gcc main.c -o main

# Compile with warnings
gcc -Wall -Wextra main.c -o main

# Compile with warnings + debugging
gcc -Wall -Wextra -Wpedantic -g main.c -o main
```

### Core Toolchain

```text
Source Code
     ↓
Preprocessor
     ↓
Compiler
     ↓
Assembler
     ↓
Object File
     ↓
Linker
     ↓
Executable
```
