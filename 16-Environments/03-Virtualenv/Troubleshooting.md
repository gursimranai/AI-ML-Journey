# Virtual Environment Troubleshooting

Use this guide to diagnose common problems with Python virtual environments.

## 1. Python Command Not Found

Check whether Python is installed and available:

```powershell
python --version
py --version
```

If neither command works, check your Python installation and system configuration.

## 2. Environment Activation Fails in PowerShell

Use:

```powershell
.\.venv\Scripts\Activate.ps1
```

If PowerShell blocks script execution, consult the official [PowerShell execution policy documentation](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_execution_policies) or use Command Prompt:

```bat
.venv\Scripts\activate.bat
```

Avoid weakening security settings globally without understanding the implications.

## 3. Packages Are Missing

Verify the interpreter and pip:

```powershell
python -c "import sys; print(sys.executable)"
python -m pip --version
python -m pip list
```

Install missing packages using the environment's Python:

```powershell
python -m pip install package-name
```

Replace `package-name` with the actual package.

## 4. Wrong Python Interpreter

Print the interpreter path:

```powershell
python -c "import sys; print(sys.executable)"
```

If the path is incorrect:

1. Activate the correct environment.
2. In VS Code, select the intended interpreter.
3. For notebooks, select the correct kernel separately.

## 5. `pip` Is Not Available

Try:

```powershell
python -m ensurepip --upgrade
python -m pip --version
```

If this fails, check the Python installation and the official Python documentation.

## 6. Environment Is Corrupted

If an environment is unusable, save any needed dependency information and recreate it.

For example, if your project has a requirements file:

```powershell
deactivate
```

Then remove the `.venv` directory using your file manager, recreate it, and reinstall dependencies:

```powershell
python -m venv .venv
.\.venv\Scripts\Activate.ps1
python -m pip install -r requirements.txt
```

**Warning:** Delete only the environment directory you intend to replace. Do not delete your source code or project files.

## 7. Git Is Tracking the Environment

Add this entry to your repository's `.gitignore`:

```gitignore
.venv/
```

If `.venv` was already committed, adding it to `.gitignore` alone does not remove it from Git's index. First confirm the path, then use:

```powershell
git rm -r --cached .venv
git status
```

Review the staged changes before committing. This removes the environment from Git tracking but leaves your local files in place.

## 8. Import Works in Terminal but Not in Notebook

Check `sys.executable` in the notebook. The terminal and notebook may use different Python environments. Select the correct notebook kernel and install the necessary packages into that environment.

## 🔗 Official Resources

- [Python `venv` Documentation](https://docs.python.org/3/library/venv.html)
- [Python Packaging User Guide](https://packaging.python.org/)
- [VS Code Python Environments](https://code.visualstudio.com/docs/python/environments)

---

**Best practice:** Record the exact command and error message before troubleshooting. It is safer and faster than reinstalling Python immediately.