# Python Setup in VS Code

This guide configures VS Code to run Python programs using the correct Python installation and project environment.

## 1. Install Python

Download Python from the official website:

[Python Downloads](https://www.python.org/downloads/)

After installation, verify it in the VS Code terminal:

```powershell
python --version
```

On Windows, this command may also work:

```powershell
py --version
```

## 2. Install the Python Extension

1. Open Extensions using `Ctrl + Shift + X`.
2. Search for **Python**.
3. Select the extension published by Microsoft.
4. Install it.

Pylance is also commonly used for Python language support.

## 3. Open Your Project

Open the project folder using **File → Open Folder**.

Create a Python file such as `hello.py`:

```python
print("Hello from VS Code!")
```

## 4. Create a Virtual Environment

From the project root, run:

```powershell
python -m venv .venv
```

Activate it in PowerShell:

```powershell
.\.venv\Scripts\Activate.ps1
```

If you already have a project environment, activate the existing one instead of creating another.

## 5. Select the Interpreter

1. Press `Ctrl + Shift + P`.
2. Search for `Python: Select Interpreter`.
3. Select the interpreter located inside `.venv`.

See [Interpreter Selection](Interpreter-Selection.md) for details.

## 6. Install a Package

With the environment active:

```powershell
python -m pip install numpy
```

Test the installation:

```powershell
python -c "import numpy; print(numpy.__version__)"
```

## 7. Run Your Python Program

Open `hello.py`.

You can use the **Run Python File** action or run it from the integrated terminal:

```powershell
python hello.py
```

Expected output:

```text
Hello from VS Code!
```

## 8. Understand the Important Components

- **Python installation:** The actual Python interpreter on your computer.
- **Virtual environment:** An isolated environment for project dependencies.
- **Python extension:** Adds Python development features to VS Code.
- **Selected interpreter:** Determines which Python installation VS Code uses for relevant operations.
- **Terminal:** Executes commands in the current shell.
- **Jupyter kernel:** Executes notebook cells and maintains notebook state.

These components work together, but they are not interchangeable.

## 💡 Best Practices

- Create a project environment when appropriate.
- Select the intended interpreter explicitly.
- Install packages using `python -m pip`.
- Keep `.venv/` in `.gitignore`.
- Record dependencies in a requirements file.
- Test code from a fresh environment when preparing a project for others.

## 🔗 Official Resources

- [Python in VS Code](https://code.visualstudio.com/docs/python/python-tutorial)
- [Python Environments](https://code.visualstudio.com/docs/python/environments)

---

**Tip:** If a package imports successfully in one terminal but not in VS Code, check which interpreter each is using.