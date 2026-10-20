# Creating Python Virtual Environments

## 🧠 What Is a Virtual Environment?

A virtual environment is a project-specific Python environment containing its own package installation area and environment configuration.

For example, one project may use one version of NumPy while another uses a different version. Separate environments help prevent these dependencies from interfering with each other.

## 1. Check Python Installation

On Windows, open PowerShell and run:

```powershell
python --version
python -m pip --version
```

If the `python` command is unavailable, verify that Python is installed and configured correctly.

## 2. Navigate to Your Project

```powershell
cd path\to\your\project
```

Replace the example path with your actual project directory.

## 3. Create a Virtual Environment

```powershell
python -m venv .venv
```

Here:

- `python` runs the Python interpreter.
- `-m venv` runs Python's built-in virtual-environment module.
- `.venv` is the directory where the environment will be created.

## 4. Understand the Structure

A virtual environment may contain files and directories similar to these:

```text
my-project/
├── .venv/
│   ├── Include/
│   ├── Lib/
│   ├── Scripts/
│   └── pyvenv.cfg
├── main.py
├── requirements.txt
└── README.md
```

The exact contents can vary by operating system and Python version.

**Important:** The `.venv` directory is generated locally. Do not commit it to your repository.

## 5. Verify the Environment

After activation, run:

```powershell
python --version
python -c "import sys; print(sys.executable)"
```

The interpreter path should point to your project's `.venv` directory.

## 6. Create an Environment Using a Specific Python Installation

If multiple Python versions are installed, you can use a particular interpreter to create the environment. For example, when the Python launcher is available:

```powershell
py -0p
py -3.12 -m venv .venv
```

The first command lists Python installations known to the launcher. The second uses Python 3.12 if it is installed.

## 💡 Best Practices

- Use a consistent name such as `.venv`.
- Create the environment inside the project directory for convenience.
- Use the intended Python version when creating the environment.
- Do not manually edit generated files inside `.venv`.
- Recreate the environment if it becomes corrupted rather than copying it between computers.

---

**Remember:** Creating an environment and activating it are two separate steps.