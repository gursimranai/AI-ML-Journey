# 📚 Header Files in C++

> Header files provide declarations and other reusable interfaces that can be included in C++ source files.

---

# 1. What Is a Header File?

A header file commonly contains declarations that allow source files to use functions, classes, templates, constants, and other interfaces.

Common header files include:

```cpp
<iostream>
<string>
<vector>
<cmath>
<algorithm>
```

---

# 2. Including a Header

The preprocessor directive:

```cpp
#include
```

is used to include a header.

Example:

```cpp
#include <iostream>
```

Now the program can use declarations provided by the corresponding standard library header.

---

# 3. Example

```cpp
#include <iostream>

int main() {

    std::cout << "Hello";

    return 0;
}
```

Without the appropriate declaration for `std::cout`, the program would not compile correctly.

---

# 4. Common Standard Headers

| Header            | Common Facilities                   |
| ----------------- | ----------------------------------- |
| `<iostream>`      | Input/output streams                |
| `<string>`        | `std::string`                       |
| `<vector>`        | `std::vector`                       |
| `<array>`         | `std::array`                        |
| `<algorithm>`     | Algorithms such as `sort`           |
| `<cmath>`         | Mathematical functions              |
| `<fstream>`       | File streams                        |
| `<iomanip>`       | Output formatting                   |
| `<map>`           | `std::map`                          |
| `<set>`           | `std::set`                          |
| `<unordered_map>` | Hash map                            |
| `<memory>`        | Smart pointers and memory utilities |
| `<utility>`       | Utility types/functions             |

---

# 5. Angle Brackets

Standard or system-style headers are commonly written:

```cpp
#include <iostream>
```

The angle-bracket form tells the implementation to search for the header using its configured include paths.

---

# 6. User-Defined Headers

Your own project headers are commonly included using quotes:

```cpp
#include "calculator.h"
```

Example:

```text
project/
├── main.cpp
├── calculator.cpp
└── calculator.h
```

`main.cpp` can include:

```cpp
#include "calculator.h"
```

---

# 7. `< >` vs `" "`

| Syntax                    | Typical Use           |
| ------------------------- | --------------------- |
| `#include <iostream>`     | Library/system header |
| `#include "calculator.h"` | Project/local header  |

The exact search behavior is controlled by the compiler and build configuration, but this is the standard convention.

---

# 8. Header and Source Files

A common C++ project separates declarations from definitions.

### Header

```cpp
// calculator.h

int add(int a, int b);
```

### Source

```cpp
// calculator.cpp

int add(int a, int b) {
    return a + b;
}
```

### Main

```cpp
#include <iostream>
#include "calculator.h"

int main() {

    std::cout << add(10, 20);

    return 0;
}
```

---

# 9. Declaration vs Definition

Header:

```cpp
int add(int a, int b);
```

This is a declaration.

Source file:

```cpp
int add(int a, int b) {
    return a + b;
}
```

This provides the function definition.

Conceptually:

```text
Header
  │
  └── What exists?
          │
          ▼
Source
  │
  └── How does it work?
```

This separation supports modular programming.

---

# 10. Why Header Files Matter

Headers help:

* Share declarations
* Organize large projects
* Separate interfaces from implementations
* Reuse code
* Improve modularity
* Support multiple source files

---

# 11. Header Guards

A header can accidentally be included multiple times.

Traditional include guards prevent repeated processing.

```cpp
#ifndef CALCULATOR_H
#define CALCULATOR_H

int add(int a, int b);

#endif
```

Structure:

```text
#ifndef
   │
   ├── Not defined?
   │
   ▼
Declarations
   │
   ▼
#endif
```

---

# 12. `#pragma once`

Many modern C++ compilers support:

```cpp
#pragma once
```

Example:

```cpp
#pragma once

int add(int a, int b);
```

This tells the compiler/preprocessor to include the header only once per translation unit.

It is widely used, although it is a compiler-supported directive rather than a core standard C++ language feature.

---

# 13. Header File Example

### `math_utils.h`

```cpp
#pragma once

int square(int x);
int cube(int x);
```

### `math_utils.cpp`

```cpp
#include "math_utils.h"

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}
```

### `main.cpp`

```cpp
#include <iostream>
#include "math_utils.h"

int main() {

    std::cout << square(5) << '\n';
    std::cout << cube(3) << '\n';

    return 0;
}
```

---

# 14. Header Files and `#include`

A simplified conceptual model is:

```text
main.cpp
   │
   ├── #include <iostream>
   │
   └── #include "math_utils.h"
             │
             ▼
        Header content
             │
             ▼
      Translation Unit
             │
             ▼
          Compiler
```

The preprocessing stage handles `#include`.

---

# 15. Avoid Unnecessary Includes

Prefer including only what is needed.

Instead of including many unrelated headers:

```cpp
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <fstream>
```

use only the required headers when possible.

This can improve compile times and make dependencies clearer.

---

# 16. Header Files in Large Projects

A project may be organized like:

```text
src/
├── main.cpp
├── model.cpp
├── data.cpp
└── training.cpp

include/
├── model.h
├── data.h
└── training.h
```

Conceptually:

```text
Header Files
    │
    ├── Interfaces
    │
    └── Declarations

Source Files
    │
    ├── Implementations
    │
    └── Definitions
```

---

# 17. Headers and AI/ML

C++ AI/ML projects commonly use headers for:

* Tensor classes
* Matrix operations
* Model interfaces
* Data loaders
* Optimizers
* Utility functions
* Inference APIs

Example:

```cpp
#include "NeuralNetwork.h"
#include "Tensor.h"
#include "DataLoader.h"
```

This modular structure becomes important in large ML systems.

---

# 18. Common Mistakes

### Mistake 1: Wrong header name

```cpp
#include <iostrem>
```

Correct:

```cpp
#include <iostream>
```

---

### Mistake 2: Missing quotes for a local header

```cpp
#include <calculator.h>
```

may not search in the intended way for a project-local file.

Usually:

```cpp
#include "calculator.h"
```

---

### Mistake 3: Defining non-inline functions carelessly in headers

Putting ordinary non-inline function definitions in a header included by multiple source files can lead to multiple-definition/linker errors.

Prefer:

```cpp
// calculator.h
int add(int, int);
```

and:

```cpp
// calculator.cpp
int add(int a, int b) {
    return a + b;
}
```

Templates and certain inline definitions follow different rules.

---

# 19. Interview Points

* Header files commonly contain declarations and reusable interfaces.
* `#include` is processed during preprocessing.
* `<...>` is commonly used for standard/system headers.
* `"..."` is commonly used for project headers.
* Include guards and `#pragma once` prevent repeated inclusion.
* Headers support modular and multi-file C++ programs.

---

# 20. Key Takeaways

```text
Header
   │
   ├── Declarations
   ├── Interfaces
   ├── Templates
   └── Reusable definitions
            │
            ▼
       #include
            │
            ▼
      Translation Unit
            │
            ▼
         Compiler
```

Header files are one of the foundations of modular C++ software development.
