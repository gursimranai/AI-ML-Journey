# IPython Magic Commands

IPython magic commands provide shortcuts for interactive computing. They are especially useful in Jupyter notebooks running an IPython kernel.

Magic commands are not ordinary Python syntax, so their availability depends on the active IPython environment.

## 1. Line and Cell Magics

There are two main types:

- **Line magic:** Starts with `%` and generally applies to one line.
- **Cell magic:** Starts with `%%` and generally applies to an entire cell.

## 2. Discover Available Magics

```python
%lsmagic
```

Displays the available line and cell magic commands.

Get help for a particular magic:

```python
%timeit?
```

## 3. Measure Execution Time

### `%time`

Measures the execution time of a single statement.

```python
%time sum(range(1000000))
```

### `%timeit`

Runs repeated timing measurements to estimate performance.

```python
%timeit sum(range(1000))
```

### `%%time`

Measures the execution time of an entire cell.

```python
%%time

total = 0

for number in range(100000):
    total += number
```

Use timing results to compare code under similar conditions; execution time can vary across machines and runs.

## 4. Inspect Variables

### `%who`

Lists interactive variables.

```python
%who
```

### `%whos`

Displays variables with additional information.

```python
%whos
```

These are useful for inspecting the current notebook session.

## 5. Work with the File System

### `%pwd`

Displays the current working directory.

```python
%pwd
```

### `%cd`

Changes the working directory.

```python
%cd ..
```

### `%ls`

Lists files in the current directory on supported IPython environments.

```python
%ls
```

### `%mkdir`

Creates a directory through IPython's system-command helpers.

```python
%mkdir data
```

File-system behavior can vary by platform and current directory. Use Python's `pathlib` for portable file operations in reusable scripts.

## 6. Run External Commands

On supported systems, prefix a command with `!`:

```python
!python --version
```

This invokes a shell command from the notebook. Shell syntax differs between operating systems.

For package installation, prefer the notebook's `%pip` magic when available:

```python
%pip install pandas
```

This helps target the Python environment associated with the active kernel.

## 7. Run Python Scripts

```python
%run example.py
```

This runs a Python script from the notebook's execution context. The file must be accessible from the current working directory or the path you specify.

## 8. Capture Cell Output

```python
%%capture captured_output

print("This output is captured.")
```

Inspect the captured output:

```python
captured_output.show()
```

This can be useful when you want to suppress or examine output from a cell.

## 9. Display Available Help

```python
%quickref
```

Displays an IPython quick reference in supported IPython versions.

## ⚠️ Important Notes

- Magic commands are specific to IPython and are not generally valid in standard `.py` scripts.
- `%pip` is preferable to running an unrelated system `pip` command inside a notebook.
- `!` commands depend on the operating system's shell.
- Avoid using notebook magics when writing code that must run unchanged as a standalone Python script.

## 🔗 Official Resources

- [IPython Built-in Magic Commands](https://ipython.readthedocs.io/en/stable/interactive/magics.html)
- [IPython Documentation](https://ipython.readthedocs.io/)

---

**Tip:** Use `%timeit` to compare small expressions and Python's profiling tools for more detailed performance analysis.