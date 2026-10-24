# Python Interview Questions

This directory contains Python interview preparation materials, ranging from programming fundamentals to advanced language features, problem-solving patterns, and practical software development.

The questions are organized to help build a strong understanding of Python's behavior, write clean and efficient code, and explain technical decisions confidently during interviews.

## Contents

### 1. Python Fundamentals
- Python features and use cases
- Variables, identifiers, and naming conventions
- Built-in data types
- Mutable versus immutable objects
- Type conversion and type checking
- Operators and operator precedence
- Input, output, and string formatting
- Truthy and falsy values
- `is` versus `==`
- Shallow copy versus deep copy

### 2. Conditional Statements and Loops
- `if`, `elif`, and `else`
- `for` and `while` loops
- `break`, `continue`, and `pass`
- `range()` and loop behavior
- Nested loops
- Loop `else` clauses
- Conditional expressions
- Common loop and logic mistakes

### 3. Strings and Collections
- String immutability and string methods
- Lists, tuples, sets, and dictionaries
- Indexing and slicing
- List and dictionary methods
- Set operations
- Dictionary views and iteration
- Comprehensions
- Sorting with `key`
- Hashability and dictionary keys
- Choosing the right collection for a problem

### 4. Functions
- Function definition and return values
- Positional and keyword arguments
- Default arguments and mutable-default pitfalls
- `*args` and `**kwargs`
- Positional-only and keyword-only parameters
- Scope and the LEGB rule
- `global` and `nonlocal`
- Lambda functions
- Recursion
- First-class and higher-order functions
- Closures and decorators
- Type hints and function annotations

### 5. Object-Oriented Programming
- Classes and objects
- `self` and `cls`
- Constructors and `__init__`
- Instance, class, and static methods
- Instance attributes versus class attributes
- Encapsulation and properties
- Inheritance and method overriding
- Multiple inheritance and method resolution order (MRO)
- Polymorphism and abstraction
- Composition versus inheritance
- `super()`
- Dataclasses
- Abstract base classes and protocols

### 6. Iterators, Generators, and Comprehensions
- Iterable versus iterator
- `iter()` and `next()`
- The iterator protocol
- Generator functions and `yield`
- Generator expressions
- Generator exhaustion
- Lazy evaluation
- `yield from`
- Memory efficiency of generators
- Generator-based pipelines

### 7. Python Internals and Advanced Features
- Names, objects, and references
- Identity, equality, and object lifetime
- Reference counting and garbage collection
- Python's execution model
- Bytecode and the `dis` module
- Descriptors and properties
- Context managers and the `with` statement
- `__slots__`
- Special methods and the data model
- Pattern matching
- Metaclasses: purpose and basic use cases

### 8. Exception Handling
- Syntax and purpose of `try`, `except`, `else`, and `finally`
- Built-in exception hierarchy
- Raising exceptions with `raise`
- Custom exception classes
- Exception chaining
- Context managers and resource cleanup
- When to catch versus propagate an exception
- Avoiding overly broad exception handling

### 9. Modules, Packages, and Environments
- Modules versus packages
- Import mechanisms
- `if __name__ == "__main__":`
- Absolute versus relative imports
- Circular imports
- `sys.path` and module search
- Virtual environments
- Dependency management
- `pip`, `requirements.txt`, and package installation
- Project structure and packaging basics

### 10. File Handling and Standard Library
- Reading and writing files
- Text versus binary files
- File encodings
- Working with paths using `pathlib`
- JSON and CSV processing
- `datetime`
- `collections`
- `itertools`
- `functools`
- `re`
- `logging`
- `argparse`
- `subprocess` fundamentals

### 11. Functional Programming and Decorators
- Pure functions and side effects
- `map()`, `filter()`, and `reduce()`
- Closures
- Decorator functions
- Decorators with arguments
- `functools.wraps`
- Function composition
- When functional patterns improve readability

### 12. Concurrency and Asynchronous Programming
- Concurrency versus parallelism
- Threads versus processes
- The Global Interpreter Lock (GIL)
- `threading` and `multiprocessing`
- `concurrent.futures`
- `async` and `await`
- Coroutines and the event loop
- `asyncio`
- I/O-bound versus CPU-bound workloads
- Choosing the right concurrency model

### 13. Algorithms and Problem Solving
- Time and space complexity
- Arrays and strings
- Hash maps and sets
- Two-pointer and sliding-window patterns
- Stacks and queues
- Searching and sorting
- Recursion and backtracking
- Linked lists, trees, and graphs
- Basic dynamic programming
- Writing readable, efficient solutions

### 14. Testing, Debugging, and Code Quality
- Debugging with breakpoints
- Assertions and common debugging techniques
- Unit testing with `unittest` or `pytest`
- Fixtures, parametrization, and mocking
- Test-driven development basics
- PEP 8 and code readability
- Linters and formatters
- Type checking
- Logging versus printing
- Writing maintainable and testable code

### 15. Python for Data Science and AI/ML
- NumPy arrays versus Python lists
- Vectorization and broadcasting
- Pandas Series and DataFrames
- Data selection and filtering
- Missing-value handling
- Grouping, merging, and reshaping
- Iteration versus vectorized operations
- Randomness and reproducibility
- Data preprocessing and leakage
- Efficient handling of large datasets

### 16. Output-Based and Tricky Questions
Practice predicting the output of short programs involving:

- Mutable default arguments
- Shared references and aliasing
- List multiplication and nested lists
- Slicing and negative indices
- Scope and closures
- Late binding in closures
- Comprehensions and generator exhaustion
- `is` versus `==`
- Exception propagation
- Inheritance and MRO
- Special methods
- Iterators and side effects

Always explain *why* the output occurs rather than memorizing answers.

### 17. Scenario-Based Questions
Practice questions such as:

- How would you process a file that is too large to fit in memory?
- How would you identify and improve a slow Python function?
- When would you use a generator instead of returning a list?
- How would you structure a reusable Python package?
- How would you manage dependencies across multiple projects?
- How would you debug an unexpected exception in production?
- How would you make a function easier to test?
- When would you use threads, processes, or asynchronous programming?
- How would you handle missing data in a Pandas DataFrame?
- How would you design a Python data-processing pipeline?

## Suggested File Organization

Keep your existing files and filenames. If you add new question sets, these example names may help organize them.

```text
Python/
├── README.md
├── 01-Python-Fundamentals.md
├── 02-Strings-And-Collections.md
├── 03-Functions-And-Scope.md
├── 04-OOP.md
├── 05-Iterators-And-Generators.md
├── 06-Advanced-Python.md
├── 07-Exceptions-And-Modules.md
├── 08-File-Handling-And-Standard-Library.md
├── 09-Concurrency-And-Async.md
├── 10-Algorithms-And-Coding-Problems.md
├── 11-Testing-And-Code-Quality.md
├── 12-Python-For-Data-Science.md
├── 13-Output-Based-Questions.md
└── 14-Scenario-Based-Questions.md
```

## How to Prepare

For each question:

1. Explain the concept in your own words.
2. Write a small example where useful.
3. Predict the behavior before running the code.
4. Explain edge cases and common mistakes.
5. Discuss time complexity when the question involves algorithms.
6. Compare alternatives and explain when each is appropriate.

Prioritize understanding Python's behavior, writing working code, and explaining your reasoning over memorizing answers.

## Useful Documentation

- [Official Python Documentation](https://docs.python.org/3/)
- [Python Tutorial](https://docs.python.org/3/tutorial/)
- [Python Language Reference](https://docs.python.org/3/reference/)
- [Python Standard Library](https://docs.python.org/3/library/)
- [PEP 8 — Style Guide for Python Code](https://peps.python.org/pep-0008/)
- [pytest Documentation](https://docs.pytest.org/)

Use documentation to verify behavior, especially for advanced language features and version-specific changes.