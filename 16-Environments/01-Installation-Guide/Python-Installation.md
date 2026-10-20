# Python Installation Guide

This guide explains how to install Python on Windows and verify that it is ready for development.

## 1. Download Python

Visit the official Python website:

https://www.python.org/downloads/windows/

Download a stable Python release compatible with your tools and projects.

## 2. Install Python

1. Run the downloaded installer.
2. Enable **Add python.exe to PATH** if the installer provides this option.
3. Select the standard installation option unless you have a specific reason to customize it.
4. Complete the installation.

If you are using the Python installation manager or another supported installation method, follow its official instructions instead.

## 3. Verify the Installation

Open a new PowerShell terminal and run:

```powershell
python --version
```

If that command is unavailable, try:

```powershell
py --version
```

You should see the installed Python version.

Check pip:

```powershell
python -m pip --version
```

Using `python -m pip` helps ensure that pip is associated with the Python interpreter you selected.

## 4. Run Your First Python Program

Create a file named `hello.py`:

```python
print("Hello, Python!")
```

Run it from the directory containing the file:

```powershell
python hello.py
```

Expected output:

```text
Hello, Python!
```

## 5. Install the Python Extension in VS Code

Open VS Code and install the official **Python** extension published by Microsoft.

Then:

1. Open a folder containing your Python code.
2. Open a `.py` file.
3. Select a Python interpreter when prompted.
4. Run your program using the terminal or the Run Python File option.

The extension helps with editing, debugging, interpreter selection, and other Python development features.

## 6. Create a Virtual Environment

Virtual environments isolate dependencies for individual projects.

Navigate to your project directory:

```powershell
cd path\to\your-project
```

Create the environment:

```powershell
python -m venv .venv
```

Activate it in PowerShell:

```powershell
.\.venv\Scripts\Activate.ps1
```

If PowerShell blocks activation, consult the official Python documentation or use the environment's interpreter directly rather than changing system-wide security settings unnecessarily.

Upgrade pip inside the environment:

```powershell
python -m pip install --upgrade pip
```

When finished, deactivate the environment:

```powershell
deactivate
```

## 7. Common Installation Issues

### Python is not recognized

- Open a new terminal.
- Try `py --version`.
- Verify that Python is installed.
- Check PATH and Windows application execution aliases.

### The wrong Python version runs

Check which executables Windows finds:

```powershell
where.exe python
where.exe py
```

Select the correct interpreter in VS Code.

### pip is not recognized

Use:

```powershell
python -m pip --version
```

If pip is missing, consult the official installation documentation.

## Official Resources

- Python downloads: https://www.python.org/downloads/
- Python documentation: https://docs.python.org/3/
- `venv` documentation: https://docs.python.org/3/library/venv.html
- VS Code Python tutorial: https://code.visualstudio.com/docs/python/python-tutorial