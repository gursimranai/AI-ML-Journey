# 🐍 Python Glossary

A beginner-friendly reference to important Python terms, concepts, and programming vocabulary.

## 1. Python Fundamentals

| Term | Definition | Example |
|---|---|---|
| Python | A high-level, general-purpose programming language. | Writing scripts and applications |
| Syntax | Rules that define valid Python code. | `print("Hello")` |
| Statement | An instruction executed by Python. | `age = 18` |
| Expression | Code that produces a value. | `5 + 3` |
| Variable | A name that refers to an object. | `name = "Alex"` |
| Literal | A value written directly in code. | `42`, `"hello"`, `True` |
| Keyword | A reserved word with a special meaning. | `if`, `else`, `def`, `class` |
| Identifier | A name used for a variable, function, class, or other object. | `student_name` |
| Comment | Text in source code ignored by Python as executable code. | `# This is a comment` |
| Indentation | Leading whitespace used to organize code blocks. | Indented statements inside `if` |
| Interpreter | Software that executes Python code. | CPython |
| REPL | An interactive environment for evaluating expressions and statements. | Python interactive shell |
| Script | A file containing Python code, usually with a `.py` extension. | `main.py` |

## 2. Data Types and Objects

| Term | Definition | Example |
|---|---|---|
| Object | A value in Python with an identity, type, and value. | `"hello"` |
| Type | The category that determines an object's behavior. | `str`, `int`, `list` |
| Integer (`int`) | A whole number. | `42` |
| Float (`float`) | A floating-point number. | `3.14` |
| Boolean (`bool`) | A truth value: `True` or `False`. | `is_valid = True` |
| String (`str`) | An immutable sequence of Unicode characters. | `"Python"` |
| None | The singleton value representing the absence of a value. | `result = None` |
| Mutable | An object whose contents can change. | A list |
| Immutable | An object that cannot be changed after creation. | A string or tuple |
| Type conversion | Producing a value of another type. | `int("25")` |
| Type casting | A common informal term for type conversion. | `float(5)` |
| Dynamic typing | The type belongs to an object; a variable name can refer to objects of different types over time. | `x = 10; x = "ten"` |
| Duck typing | A programming approach that focuses on supported behavior rather than an object's exact type. | Calling an object's supported method |

## 3. Operators

| Term | Definition | Example |
|---|---|---|
| Arithmetic operator | Performs mathematical operations. | `+`, `-`, `*`, `/` |
| Comparison operator | Compares values. | `==`, `!=`, `<`, `>` |
| Logical operator | Combines or reverses truth values. | `and`, `or`, `not` |
| Assignment operator | Assigns or updates a value. | `=`, `+=` |
| Membership operator | Checks membership in a container or iterable. | `"a" in "cat"` |
| Identity operator | Checks whether two references point to the same object. | `a is b` |
| Operator precedence | Rules that determine which operators are evaluated first. | `2 + 3 * 4` |
| Short-circuit evaluation | Stops evaluating a logical expression when its result is already determined. | `False and some_function()` |

## 4. Conditional Statements and Loops

| Term | Definition | Example |
|---|---|---|
| Condition | An expression used to make a decision. | `age >= 18` |
| `if` | Executes a block when a condition is true. | `if age >= 18:` |
| `elif` | Checks another condition if earlier conditions failed. | `elif age >= 13:` |
| `else` | Handles the remaining branch. | `else:` |
| Loop | Repeats a block of code. | `for item in items:` |
| Iteration | One pass through a loop or iterable. | Processing one list element |
| `for` loop | Iterates over an iterable. | `for x in range(5):` |
| `while` loop | Repeats while a condition remains true. | `while count < 5:` |
| `break` | Exits the nearest enclosing loop. | `break` |
| `continue` | Skips to the next loop iteration. | `continue` |
| `pass` | A statement that performs no operation. | An empty function body placeholder |
| `range()` | Produces a range of integers. | `range(1, 5)` |
| Nested loop | A loop inside another loop. | A `for` loop inside a `for` loop |

## 5. Python Collections

| Term | Definition | Example |
|---|---|---|
| Collection | An object that groups or stores multiple values. | A list |
| Sequence | An ordered collection that supports positional access. | `str`, `list`, `tuple` |
| List | A mutable sequence. | `[1, 2, 3]` |
| Tuple | An immutable sequence. | `(1, 2, 3)` |
| Set | A collection of distinct hashable elements. | `{1, 2, 3}` |
| Dictionary (`dict`) | A mapping of keys to values. | `{"name": "Alex"}` |
| Key | An identifier used to retrieve a dictionary value. | `"name"` |
| Value | Data associated with a dictionary key. | `"Alex"` |
| Index | A position used to access an item in a sequence. | `items[0]` |
| Slicing | Extracting part of a sequence. | `items[1:4]` |
| Iterable | An object from which an iterator can be obtained. | A list or string |
| Iterator | An object that yields items one at a time. | `iter([1, 2, 3])` |
| Comprehension | A concise syntax for constructing collections or generators. | `[x * 2 for x in range(5)]` |
| Nested collection | A collection containing other collections. | `[[1, 2], [3, 4]]` |
| Hashable | An object with a stable hash value and equality behavior suitable for hash-based collections. | A string |
| Unpacking | Assigning elements from an iterable to multiple targets. | `x, y = (10, 20)` |

## 6. Strings

| Term | Definition | Example |
|---|---|---|
| String literal | Text written directly in code. | `"hello"` |
| Indexing | Accessing a character by position. | `word[0]` |
| Negative indexing | Accessing positions relative to the end. | `word[-1]` |
| Slicing | Extracting a portion of a string. | `word[1:4]` |
| Escape sequence | A special character representation beginning with a backslash. | `"\n"` |
| Raw string | A string literal where backslashes generally are not treated as escape sequences. | `r"C:\new\test"` |
| f-string | A string literal that supports embedded expressions. | `f"Score: {score}"` |
| Method | A callable associated with an object or class. | `"hello".upper()` |
| `split()` | Splits a string into a list of substrings. | `"a,b".split(",")` |
| `join()` | Joins strings using a separator. | `"-".join(["a", "b"])` |
| Whitespace | Spaces, tabs, newlines, and other spacing characters. | `" hello ".strip()` |

## 7. Functions

| Term | Definition | Example |
|---|---|---|
| Function | A reusable block of code that can be called. | `def greet():` |
| Function call | Executing a function by invoking it. | `greet()` |
| Parameter | A name in a function definition that receives an argument. | `def greet(name):` |
| Argument | A value supplied when calling a function. | `greet("Alex")` |
| Return value | The value a function sends back to its caller. | `return result` |
| Default argument | A parameter value used when that argument is omitted. | `def greet(name="Alex"):` |
| Keyword argument | An argument supplied using a parameter name. | `greet(name="Alex")` |
| Positional argument | An argument associated with a parameter by position. | `add(2, 3)` |
| Scope | The region in which a name can be accessed. | Local scope |
| Local variable | A name defined in a local scope. | A variable inside a function |
| Global variable | A name defined at module scope. | A module-level variable |
| Lambda | A small anonymous function expression. | `lambda x: x * 2` |
| Recursion | A function calling itself, directly or indirectly. | A recursive factorial function |
| Docstring | A string used to document a module, class, or function. | `"""Calculate the total."""` |
| `*args` | Collects extra positional arguments into a tuple. | `def f(*args):` |
| `**kwargs` | Collects extra keyword arguments into a dictionary. | `def f(**kwargs):` |

## 8. Modules, Packages, and Files

| Term | Definition | Example |
|---|---|---|
| Module | A unit of Python code, commonly a `.py` file. | `math` |
| Package | A way to organize related Python modules. | A package containing utility modules |
| Import | Making names from a module available in another module. | `import math` |
| Standard library | Modules distributed with Python. | `math`, `json`, `pathlib` |
| Third-party library | Software installed separately from the Python standard library. | `requests` |
| File path | The location of a file in a filesystem. | `data/records.csv` |
| File mode | The mode specifying how a file is opened. | `"r"`, `"w"`, `"a"` |
| Context manager | An object that manages setup and cleanup around a block. | `with open(...) as file:` |
| Encoding | A system for representing text as bytes. | UTF-8 |
| JSON | A text format for structured data interchange. | `{"name": "Alex"}` |

## 9. Errors and Exceptions

| Term | Definition | Example |
|---|---|---|
| Syntax error | Code that violates Python's syntax rules. | A missing colon |
| Exception | An event represented by an exception object during execution. | `ValueError` |
| Traceback | A report showing the call stack and error location. | Output after an unhandled exception |
| `try` | Defines a block where exceptions may be handled. | `try:` |
| `except` | Handles matching exceptions. | `except ValueError:` |
| `else` | Runs when the `try` block completes without an exception. | `else:` |
| `finally` | Runs during cleanup whether or not an exception occurred. | `finally:` |
| `raise` | Raises an exception explicitly. | `raise ValueError("Invalid input")` |
| `ValueError` | Indicates an appropriate type of value is invalid for an operation. | `int("abc")` |
| `TypeError` | Indicates an operation or function received an inappropriate type. | `"3" + 4` |
| `IndexError` | Indicates a sequence index is out of range. | `[1, 2][5]` |
| `KeyError` | Indicates a dictionary key was not found. | `{"a": 1}["b"]` |

## 10. Object-Oriented Programming

| Term | Definition | Example |
|---|---|---|
| Class | A definition used to create objects with related data and behavior. | `class Student:` |
| Instance | An individual object created from a class. | `student = Student()` |
| Attribute | Data or behavior associated with an object or class. | `student.name` |
| Method | A function defined within a class. | `def greet(self):` |
| Constructor | Common informal term for the process of creating and initializing an object. | `__init__()` is the initializer |
| `self` | Conventional name for the current instance parameter. | `def greet(self):` |
| Inheritance | A mechanism for defining a class based on another class. | `class Dog(Animal):` |
| Encapsulation | Organizing data and behavior together and managing access to implementation details. | A class with methods |
| Polymorphism | Using a common interface with different implementations or behaviors. | Different classes implement `speak()` |
| Abstraction | Exposing essential behavior while hiding implementation details. | A public method backed by internal logic |
| Composition | Building an object using other objects as components. | A car containing an engine object |
| Special method | A method with a special name used by Python's data model. | `__len__()` |

## 11. Python Development Vocabulary

| Term | Definition | Example |
|---|---|---|
| IDE | An integrated development environment for writing and debugging code. | PyCharm |
| Code editor | Software used to write and edit source code. | VS Code |
| Jupyter Notebook | An interactive document combining code, output, and explanatory text. | `.ipynb` file |
| Virtual environment | An isolated Python environment for project dependencies. | A `venv` environment |
| Dependency | A package or component required by a project. | `numpy` |
| Package manager | A tool for installing and managing packages. | `pip` |
| Debugging | Finding and fixing problems in code. | Inspecting a traceback |
| Testing | Checking whether code behaves as expected. | An assertion or unit test |
| Version control | Tracking changes to files over time. | Git |
| Repository | A project location tracked by a version-control system. | A Git repository |
| PEP 8 | Python's widely used style guide. | Naming and formatting conventions |
| PEP | A Python Enhancement Proposal describing ideas, standards, or processes. | PEP 8 |

## 12. Quick Concept Differences

| Concepts | Difference |
|---|---|
| `=` vs `==` | Assignment vs value equality comparison |
| `==` vs `is` | Value equality vs object identity |
| List vs tuple | Mutable sequence vs immutable sequence |
| List vs set | Ordered, indexable sequence vs collection of distinct hashable elements |
| `append()` vs `extend()` | Add one item vs add items from an iterable |
| `remove()` vs `pop()` | Remove by value vs remove and return by position, or the last item by default |
| `sort()` vs `sorted()` | Modify a list in place vs return a new sorted list |
| Parameter vs argument | Name in a definition vs value supplied in a call |
| `print()` vs `return` | Display output vs send a value back to the caller |
| Iterable vs iterator | Can provide an iterator vs yields items through iteration |
| Syntax error vs exception | Invalid syntax vs an exception represented during execution |
| Module vs package | Individual module vs organized collection of modules |
| Mutable vs immutable | Contents can change vs contents cannot change after creation |

## 📌 How to Use This Glossary

- Look up unfamiliar terms while studying notebooks.
- Add new terms when you encounter them.
- Include short examples when they clarify a definition.
- Keep definitions concise and accurate.
- Review related terms together to understand their differences.

---

*This glossary is a living reference for my Python learning journey. It will grow as I study more Python concepts and programming techniques.*
