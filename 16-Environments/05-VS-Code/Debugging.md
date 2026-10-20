# Debugging Python in VS Code

Debugging helps you understand why a program behaves incorrectly. Instead of guessing, you can pause execution, inspect variables, and execute code step by step.

## 1. Create a Test Program

Create `debug-example.py`:

```python
def calculate_average(numbers):
    total = sum(numbers)
    return total / len(numbers)


scores = [80, 90, 70]
average = calculate_average(scores)

print("Average:", average)
```

This program calculates the average of a list of scores.

## 2. Set a Breakpoint

Open the Python file and click beside a line number to set a breakpoint.

A breakpoint pauses execution when the debugger reaches that line.

## 3. Start Debugging

1. Open the Python file.
2. Set a breakpoint.
3. Open Run and Debug.
4. Start debugging with the Python debugger.
5. Select the appropriate configuration if prompted.

You can also press `F5` to start or continue debugging.

## 4. Useful Debugging Controls

| Control | Purpose |
|---|---|
| Continue | Resume execution until the next breakpoint |
| Step Over | Execute the current line without stepping into a called function |
| Step Into | Enter a function call |
| Step Out | Continue until the current function returns |
| Restart | Restart the debugging session |
| Stop | End the debugging session |

The exact controls and shortcuts depend on the current keymap and debugger interface.

## 5. Inspect Variables

While execution is paused, inspect variables in the Variables panel or hover over supported expressions.

For the example, examine:

- `numbers`
- `total`
- `average`

This helps you determine whether the values match your expectations.

## 6. Debug an Error

Consider:

```python
numbers = [10, 20, 30]
print(numbers[5])
```

This raises an `IndexError` because the list does not contain an element at index `5`.

A safer approach is:

```python
numbers = [10, 20, 30]

index = 2

if 0 <= index < len(numbers):
    print(numbers[index])
else:
    print("Index is out of range.")
```

The debugger can help you inspect the list, index, and condition when an error occurs.

## 7. Common Debugging Problems

- **Breakpoint is not hit:** Check that the correct file and Python interpreter are being used.
- **Wrong environment:** Select the intended interpreter.
- **Program exits immediately:** Inspect the terminal output and error traceback.
- **Variable is undefined:** Check whether its assignment executed before it was used.
- **Unexpected output:** Step through the relevant lines and inspect intermediate values.

## 8. Debugging Best Practices

- Reproduce the error before changing code.
- Start with a small example.
- Use breakpoints near the suspected problem.
- Inspect values rather than assuming what they contain.
- Read the complete traceback.
- Remove temporary debugging statements when they are no longer needed.
- Add tests for bugs that could return.

## 🔗 Official Resources

- [Python Debugging in VS Code](https://code.visualstudio.com/docs/python/debugging)
- [VS Code Debugging](https://code.visualstudio.com/docs/debugtest/debugging)

---

**Remember:** Debugging is a systematic process of observing execution and identifying where actual behavior differs from expected behavior.