# Installation and Environment Troubleshooting

This guide covers common issues encountered when setting up Python, Git, VS Code, and a Windows development environment.

## 1. Python Is Not Recognized

**Error example:**

```text
'python' is not recognized as an internal or external command
```

**Possible solutions:**

1. Open a new terminal.
2. Run `py --version`.
3. Verify that Python is installed.
4. Check PATH and Windows application execution aliases.
5. Reinstall or repair Python if necessary.

Avoid changing environment variables without understanding the existing configuration.

## 2. pip Is Not Recognized

Try:

```powershell
python -m pip --version
```

Install or repair pip using the official Python documentation if necessary.

## 3. VS Code Uses the Wrong Interpreter

1. Open the Command Palette.
2. Search for **Python: Select Interpreter**.
3. Choose the interpreter or virtual environment for your project.
4. Open a new terminal and verify:

```powershell
python --version
```

Different projects can use different Python versions and environments.

## 4. Virtual Environment Activation Is Blocked

If PowerShell blocks `Activate.ps1`, you can run the environment's Python directly:

```powershell
.\.venv\Scripts\python.exe --version
```

You can also use Command Prompt activation:

```bat
.venv\Scripts\activate.bat
```

Do not disable security protections globally just to activate an environment.

## 5. Git Is Not Recognized

Run:

```powershell
git --version
```

If Git is not found:

- Confirm that Git for Windows is installed.
- Open a new terminal.
- Check that Git is available on PATH.
- Repair the installation if necessary.

## 6. Git Push Fails

Check your repository and branch:

```powershell
git status
git remote -v
git branch --show-current
```

Common causes include:

- Authentication problems
- Incorrect remote URL
- A branch name that differs from `main`
- Remote changes that must be integrated first
- Network or permission problems

Read the complete error message before choosing a fix.

## 7. Git Says "Nothing to Commit"

Run:

```powershell
git status
```

Possible explanations:

- No files have changed.
- Changes have already been committed.
- New files have not been staged.
- Files are ignored by `.gitignore`.

Stage the intended changes before committing them.

## 8. Jupyter Notebook Does Not Find the Kernel

Select the correct Python interpreter in VS Code and verify that the notebook uses the intended environment.

If required, install the kernel package inside the environment:

```powershell
python -m pip install ipykernel
```

Restart or reselect the notebook kernel afterward.

## 9. A Package Installation Fails

First verify the interpreter:

```powershell
python --version
python -m pip --version
```

Then inspect the full error message. Potential causes include incompatible Python versions, network problems, missing system dependencies, or package-specific installation requirements.

Use trusted package sources and avoid running unknown installation scripts.

## 10. Still Having Problems?

When asking for help, include:

- Your Windows version
- Python and Git versions
- The exact command you ran
- The complete error message
- The relevant project or environment details

Remove passwords, tokens, private paths, and other sensitive information before sharing diagnostic output.

## Official Documentation

- Python: https://docs.python.org/3/
- Python installation on Windows: https://docs.python.org/3/using/windows.html
- Git: https://git-scm.com/doc
- GitHub troubleshooting: https://docs.github.com/
- VS Code: https://code.visualstudio.com/docs