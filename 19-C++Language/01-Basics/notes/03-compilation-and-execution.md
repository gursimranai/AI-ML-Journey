# ⚙️ Compilation and Execution in C++

> Understanding how C++ source code is transformed into an executable program and how that program is executed.

---

# 1. Why Does C++ Need Compilation?

C++ source code is written in a human-readable form:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

The processor cannot directly execute this source code as written.

It must be translated into machine-level instructions that the target system can execute.

```text
C++ Source Code
      │
      ▼
Translation Process
      │
      ▼
Machine Code
      │
      ▼
Executable Program
      │
      ▼
Execution
```

---

# 2. Source File

A C++ source file normally uses extensions such as:

```text
.cpp
```

Example:

```text
main.cpp
```

The source file contains C++ code written by the programmer.

Example:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello";
    return 0;
}
```

---

# 3. The C++ Translation Process

A simplified compilation pipeline is:

```text
Source Code
    │
    ▼
Preprocessing
    │
    ▼
Compilation
    │
    ▼
Assembly
    │
    ▼
Object File
    │
    ▼
Linking
    │
    ▼
Executable
    │
    ▼
Execution
```

The exact implementation details vary by compiler and platform, but this model is useful for understanding the process.

---

# 4. Step 1 — Preprocessing

The preprocessor handles directives beginning with `#`.

Example:

```cpp
#include <iostream>
```

Other preprocessor directives include:

```cpp
#define
#ifdef
#ifndef
#if
#else
#endif
```

Conceptually:

```text
main.cpp
   │
   ▼
Preprocessor
   │
   ▼
Expanded Translation Unit
```

The preprocessor operates before the compiler performs the main compilation work.

---

# 5. `#include`

Consider:

```cpp
#include <iostream>
```

The `#include` directive causes the contents/declarations provided by the specified header to be made available to the translation unit according to the language's preprocessing rules.

This allows code such as:

```cpp
std::cout << "Hello";
```

to use facilities declared by the standard library.

---

# 6. Step 2 — Compilation

The compiler analyzes the resulting translation unit.

It performs tasks such as:

* Syntax analysis
* Semantic analysis
* Type checking
* Optimization
* Code generation

Conceptually:

```text
C++ Translation Unit
        │
        ▼
     Compiler
        │
        ├── Syntax Analysis
        ├── Semantic Analysis
        ├── Type Checking
        ├── Optimization
        └── Code Generation
        │
        ▼
    Object Code
```

If the program contains a compilation error, the compiler reports it.

Example:

```cpp
int main() {
    int x = ;
}
```

This contains invalid syntax.

The compiler will report an error rather than producing a valid executable from that source.

---

# 7. Step 3 — Assembly

Depending on the compiler toolchain and target, generated code may pass through assembly.

Conceptually:

```text
Compiler Output
      │
      ▼
Assembly Code
      │
      ▼
Assembler
      │
      ▼
Object File
```

Object files commonly contain machine code and related information needed by the linker.

---

# 8. Step 4 — Object File

The compiler/toolchain may produce an object file.

Common extensions include:

```text
Linux:
.o

Windows/MSVC:
.obj
```

Object files are not necessarily complete executable programs.

They can contain:

* Machine code
* Symbol information
* Relocation information
* References to external symbols

Example:

```text
main.cpp
   │
   ▼
main.o
```

---

# 9. Step 5 — Linking

The linker combines object files and libraries to create the final executable.

Example:

```text
main.o
   │
   ├──────────────┐
   │              │
   ▼              ▼
Other Object    Libraries
   │              │
   └──────┬───────┘
          ▼
       Linker
          │
          ▼
      Executable
```

This becomes particularly important when a program contains multiple source files.

---

# 10. Multiple Source Files

Consider:

```text
project/
│
├── main.cpp
├── math.cpp
└── math.hpp
```

The source files may be compiled separately:

```text
main.cpp ──► main.o
math.cpp ──► math.o
```

Then:

```text
main.o
   +
math.o
   +
required libraries
   │
   ▼
 Linker
   │
   ▼
Executable
```

This allows large projects to be divided into manageable components.

---

# 11. Step 6 — Executable

The linker produces an executable appropriate for the target platform.

Examples:

```text
Windows → program.exe
Linux   → executable
macOS   → executable/application formats
```

The operating system can then load and execute the program.

---

# 12. Complete Pipeline

A simplified complete pipeline:

```text
                 C++ Source Code
                       │
                       ▼
                 Preprocessor
                       │
                       ▼
              Translation Unit
                       │
                       ▼
                    Compiler
                       │
                       ▼
                 Assembly Code
                       │
                       ▼
                   Assembler
                       │
                       ▼
                  Object File
                       │
                       ▼
                    Linker
                       │
                       ▼
                  Executable
                       │
                       ▼
                  Operating System
                       │
                       ▼
                    Execution
```

---

# 13. Using `g++`

A common command for compiling a C++ program with GCC's C++ compiler driver is:

```bash
g++ main.cpp -o main
```

Breakdown:

```text
g++
 │
 └── C++ compiler driver

main.cpp
 │
 └── Source file

-o
 │
 └── Specify output file

main
 │
 └── Output executable name
```

---

# 14. Running the Program

On Linux/macOS:

```bash
./main
```

On Windows:

```bash
main.exe
```

If the program contains:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!";
    return 0;
}
```

The output is:

```text
Hello, World!
```

---

# 15. Compilation and Execution Are Different

These are two separate stages.

### Compilation

```bash
g++ main.cpp -o main
```

Produces the executable.

### Execution

```bash
./main
```

Runs the executable.

```text
Source Code
     │
     ▼
  Compile
     │
     ▼
Executable
     │
     ▼
   Run
     │
     ▼
   Output
```

---

# 16. Compilation Errors

Compilation errors occur when the source code violates language rules or otherwise cannot be translated successfully.

Example:

```cpp
int main() {
    int number = ;
    return 0;
}
```

Possible compiler output will identify an error near the invalid initialization.

Common causes:

* Syntax errors
* Missing semicolons
* Invalid expressions
* Type errors
* Undeclared names
* Invalid function calls

---

# 17. Linking Errors

A linking error occurs when the linker cannot resolve required symbols.

For example, a program may successfully compile one source file but fail during linking if a function is declared but its required definition is missing.

Conceptually:

```text
Compilation
     │
     ▼
Successful
     │
     ▼
Linking
     │
     ▼
Missing Symbol
     │
     ▼
Linker Error
```

This distinction is important:

```text
Compilation Error
→ Problem translating source code

Linker Error
→ Problem combining program components
```

---

# 18. Runtime Errors

A program can compile and link successfully but still fail during execution.

Example categories include:

* Invalid memory access
* Division by zero in applicable contexts
* Logic errors
* Resource failures
* Unexpected input

```text
Source Code
     │
     ▼
Compile ✓
     │
     ▼
Link ✓
     │
     ▼
Run
     │
     ▼
Runtime Problem
```

---

# 19. Compile-Time vs Runtime

| Stage         | Example Problem                   |
| ------------- | --------------------------------- |
| Preprocessing | Invalid preprocessing directive   |
| Compilation   | Syntax/type error                 |
| Linking       | Missing symbol                    |
| Runtime       | Invalid memory access             |
| Logic         | Program produces incorrect result |

Understanding these stages makes debugging much easier.

---

# 20. Debugging Workflow

A useful debugging process is:

```text
Write Code
    │
    ▼
Compile
    │
    ├── Error ──► Read Error Message
    │                  │
    │                  ▼
    │              Fix Code
    │                  │
    │                  └──────► Compile Again
    │
    ▼
Link
    │
    ├── Error ──► Investigate Symbols / Libraries
    │
    ▼
Run
    │
    ├── Runtime Error ──► Debug
    │
    ▼
Check Output
    │
    ├── Wrong Output ──► Find Logic Error
    │
    ▼
Correct Program
```

---

# 21. Debug vs Release Builds

Compilers commonly provide different build configurations.

### Debug Build

Usually prioritizes:

* Debugging information
* Easier inspection
* Less aggressive optimization

### Release Build

Usually prioritizes:

* Optimization
* Performance
* Smaller/faster production binaries where appropriate

The exact configuration depends on the build system and compiler.

---

# 22. Compiler Optimization

Compilers can optimize generated code.

With GCC/G++, optimization flags include:

```bash
-O0
-O1
-O2
-O3
```

A commonly used optimization level is:

```bash
g++ -O2 main.cpp -o main
```

Optimization can improve performance, but optimized code can sometimes be harder to debug.

---

# 23. Multiple File Compilation

For larger programs:

```bash
g++ main.cpp math.cpp -o program
```

This compiles and links multiple source files in one command.

For separate compilation:

```bash
g++ -c main.cpp
g++ -c math.cpp
g++ main.o math.o -o program
```

Conceptually:

```text
main.cpp ──► main.o ──┐
                      │
math.cpp ──► math.o ──┼──► Linker ──► program
                      │
Libraries ────────────┘
```

---

# 24. Why Compilation Matters for C++

Understanding compilation helps explain:

* Why syntax errors occur before execution
* Why linker errors are different from compiler errors
* Why headers are used
* Why multiple source files can be combined
* How libraries are connected
* How optimization works
* How source code becomes machine-executable software

---

# 25. C++ Toolchain

A typical development toolchain may contain:

```text
Source Code
    │
    ▼
Preprocessor
    │
    ▼
Compiler
    │
    ▼
Assembler
    │
    ▼
Linker
    │
    ▼
Debugger / Runtime Tools
```

Examples of commonly used tools include:

* GCC
* Clang/LLVM
* MSVC
* GDB
* LLDB
* CMake
* Make
* Ninja

An IDE or editor such as VS Code can coordinate many of these tools through extensions and configuration.

---

# 26. Build Systems

As projects become larger, manually writing compiler commands becomes inconvenient.

Build systems automate compilation and linking.

Examples:

```text
CMake
Make
Ninja
MSBuild
```

A simplified project workflow:

```text
Source Files
     │
     ▼
Build System
     │
     ├── Compile
     ├── Link
     └── Configure
     │
     ▼
Executable
```

---

# 27. AI/ML Relevance

Understanding compilation is especially useful in AI/ML engineering because many high-performance libraries contain native compiled components.

A simplified model:

```text
Python API
    │
    ▼
ML Framework
    │
    ▼
Native C/C++ Components
    │
    ▼
Optimized CPU/GPU Operations
    │
    ▼
Hardware
```

This knowledge becomes useful when working with:

* Native extensions
* Performance optimization
* C++ inference systems
* Computer vision libraries
* Numerical libraries
* GPU-related software
* Production ML systems

---

# 28. Key Takeaways

* C++ source code must be translated into executable form.
* Preprocessing handles directives such as `#include`.
* The compiler performs analysis and code generation.
* Assembly and object-code stages may occur within the toolchain.
* The linker combines object files and required libraries.
* The final executable is loaded and run by the operating system.
* Compilation errors occur before a valid executable is produced.
* Linker errors occur while combining program components.
* Runtime errors occur during execution.
* Build systems automate compilation for larger projects.
* Understanding the toolchain makes debugging and performance work easier.
