# Python Virtual Environments

A Python virtual environment is an isolated environment that keeps a project's Python packages separate from other projects.

Python's built-in `venv` module is commonly used to create virtual environments.

## 📚 Contents

| File | Description |
|---|---|
| [Creating Environments](Creating-Environments.md) | Create and configure virtual environments |
| [Activation and Deactivation](Activation-And-Deactivation.md) | Activate and leave an environment |
| [Package Management](Package-Management.md) | Install, inspect, update, and uninstall packages |
| [Requirements Files](Requirements-Files.md) | Record and reinstall project dependencies |
| [VS Code Integration](VS-Code-Integration.md) | Configure the Python interpreter in VS Code |
| [Jupyter Integration](Jupyter-Integration.md) | Use a virtual environment with Jupyter Notebook |
| [Troubleshooting](Troubleshooting.md) | Fix common environment problems |

## 🧠 Why Use a Virtual Environment?

- **Isolation:** Keep dependencies for different projects separate.
- **Dependency control:** Use package versions appropriate for each project.
- **Reproducibility:** Record dependencies so others can set up your project.
- **Cleaner Python installation:** Avoid installing every package globally.
- **Project organization:** Keep development tools and libraries associated with a project.

## 🚀 Quick Start — Windows PowerShell

Run these commands from your project root:

```powershell
# Create a virtual environment
python -m venv .venv

# Activate it
.\.venv\Scripts\Activate.ps1

# Upgrade pip
python -m pip install --upgrade pip

# Check the Python interpreter
python -c "import sys; print(sys.executable)"
```

When finished:

```powershell
deactivate
```

## 🆚 `venv` vs. Conda

| Feature | `venv` | Conda |
|---|---|---|
| Included with standard Python | Yes | No |
| Isolates Python packages | Yes | Yes |
| Installs Python packages | Usually through `pip` | Through Conda and optionally `pip` |
| Manages non-Python dependencies | No, not directly | Yes |
| Manages Python versions | Uses an installed interpreter | Can install compatible Python versions |

## 💡 Best Practices

1. Create a separate environment for each project when appropriate.
2. Use `.venv` as a common local environment directory name.
3. Add `.venv/` to `.gitignore`.
4. Install packages with `python -m pip` after activation.
5. Record project dependencies in a requirements file.
6. Verify the active interpreter before running scripts or notebooks.
7. Never commit the actual virtual environment directory to GitHub.

## 🔗 Official Resources

- [Python `venv` Documentation](https://docs.python.org/3/library/venv.html)
- [Python `ensurepip` Documentation](https://docs.python.org/3/library/ensurepip.html)
- [Python Packaging User Guide](https://packaging.python.org/en/latest/guides/installing-using-pip-and-virtual-environments/)

---

*Part of the Environments section of AI-ML-Journey.*