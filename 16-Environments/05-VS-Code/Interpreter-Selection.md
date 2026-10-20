# Python Interpreter Selection in VS Code

A Python interpreter is the executable that runs Python code. Selecting the correct interpreter is important because different environments can contain different Python versions and packages.

## 1. Why Interpreter Selection Matters

Suppose you install `pandas` in one environment but VS Code runs Python from another.

Your code may display:

```text
ModuleNotFoundError: No module named 'pandas'
```

The package may be installed correctly; VS Code may simply be using a different environment.

## 2. Select an Interpreter

1. Open your project folder in VS Code.
2. Press `Ctrl + Shift + P`.
3. Search for `Python: Select Interpreter`.
4. Choose the interpreter for your project.
5. If the desired environment is missing, refresh the available environments or specify the interpreter path using the options provided by VS Code.

For a typical Windows virtual environment, the path is:

```text
.venv\Scripts\python.exe
```

On macOS and Linux, it is commonly:

```text
.venv/bin/python
```

## 3. Verify the Interpreter

Create or open a Python file and run:

```python
import sys

print(sys.executable)
print(sys.version)
```

Check that the printed executable points to the expected environment.

## 4. Install Packages in the Selected Environment

Open a terminal using the intended environment, then run:

```powershell
python -m pip install pandas
```

Verify the installation:

```powershell
python -m pip show pandas
```

For stronger confirmation, run the following in the same Python interpreter:

```powershell
python -c "import sys, pandas; print(sys.executable); print(pandas.__version__)"
```

## 5. Interpreter vs. Notebook Kernel

For ordinary `.py` files, interpreter selection controls the Python environment used by VS Code's Python tooling.

For `.ipynb` notebooks, the selected kernel determines which Python process executes notebook cells. You may need to select the notebook kernel separately.

See [Jupyter Setup](Jupyter-Setup.md).

## 6. Common Issues

### Environment is missing

- Confirm the environment exists.
- Open the correct project folder.
- Refresh the environment list.
- Select the interpreter path if necessary.

### Wrong Python version

Run:

```powershell
python --version
python -c "import sys; print(sys.executable)"
```

Then select the correct interpreter.

### Packages are missing

Check `sys.executable` and install packages into the environment actually running your code.

### VS Code uses a different terminal environment

Activate the intended environment in the terminal and check the interpreter path. Terminal activation and editor selection are related but distinct.

## 🔗 Official Resources

- [Python Environments in VS Code](https://code.visualstudio.com/docs/python/environments)
- [Python Tutorial](https://code.visualstudio.com/docs/python/python-tutorial)

---

**Remember:** Verify the interpreter path instead of guessing which Python installation VS Code is using.