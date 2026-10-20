# Using Virtual Environments in VS Code

Visual Studio Code can detect Python virtual environments and use the selected interpreter to run Python code, debug programs, and execute notebooks.

## 1. Open Your Project

Open the project folder in VS Code, then open the integrated terminal.

Create an environment if one does not already exist:

```powershell
python -m venv .venv
```

## 2. Select the Python Interpreter

1. Press `Ctrl + Shift + P`.
2. Search for `Python: Select Interpreter`.
3. Choose the Python interpreter inside your project's `.venv` directory.
4. If it is not listed, refresh the list or use the option to enter the interpreter path.

On Windows, the interpreter is typically:

```text
.venv\Scripts\python.exe
```

## 3. Open a New Terminal

Open a new integrated terminal after selecting the interpreter. VS Code may automatically activate the environment.

Verify it:

```powershell
python -c "import sys; print(sys.executable)"
```

Confirm the path points to `.venv`.

## 4. Install Packages

```powershell
python -m pip install numpy pandas matplotlib
```

The packages should be installed into the selected environment when the terminal is using its interpreter.

## 5. Run a Python File

Create `main.py`:

```python
print("Hello from my virtual environment!")
```

Run the file using the VS Code Run Python File action or the terminal.

If the wrong interpreter runs the file, select the correct interpreter again.

## 6. Jupyter Notebooks

For notebooks, install the Jupyter extension and ensure the intended environment has the necessary notebook kernel package:

```powershell
python -m pip install ipykernel
```

Open the `.ipynb` file and select the correct kernel from the notebook toolbar.

Verify the notebook interpreter:

```python
import sys

print(sys.executable)
```

## ⚠️ Common Problems

- **Wrong Python version:** Select the correct interpreter.
- **Package import fails:** Install the package in the interpreter used to run the code.
- **Terminal does not activate `.venv`:** Activate it manually and verify `sys.executable`.
- **Notebook uses another environment:** Select the intended notebook kernel separately.

## 🔗 Official Resource

[VS Code Python Environments](https://code.visualstudio.com/docs/python/environments)

---

**Tip:** Selecting an interpreter in VS Code and selecting a Jupyter kernel are related, but they are not always the same action.