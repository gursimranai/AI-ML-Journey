# Package Management in Virtual Environments

Python packages add functionality to your programs. The `pip` tool installs and manages packages, while a virtual environment keeps those packages isolated from other projects.

## 1. Activate Your Environment

Windows PowerShell:

```powershell
.\.venv\Scripts\Activate.ps1
```

## 2. Upgrade pip

```powershell
python -m pip install --upgrade pip
```

Using `python -m pip` helps ensure that pip runs with the selected Python interpreter.

## 3. Install Packages

For example:

```powershell
python -m pip install numpy pandas matplotlib
```

These libraries are commonly used for numerical computing, data analysis, and visualization.

## 4. Check Installed Packages

```powershell
python -m pip list
```

To inspect a specific package:

```powershell
python -m pip show numpy
```

## 5. Update a Package

```powershell
python -m pip install --upgrade numpy
```

Check compatibility with your project before updating dependencies.

## 6. Uninstall a Package

```powershell
python -m pip uninstall numpy
```

Confirm the uninstall prompt if you intend to remove the package.

## 7. Check Dependency Information

```powershell
python -m pip check
```

This checks installed packages for declared dependency conflicts.

## 8. Verify Which pip Is Being Used

```powershell
python -m pip --version
```

The output includes a path. Check that it points to your project's environment rather than an unrelated Python installation.

## 💡 Best Practices

- Activate the intended environment first.
- Use `python -m pip` rather than relying on an ambiguous `pip` command.
- Install only packages your project needs.
- Record dependencies in a requirements file.
- Test important projects after updating packages.

---

**Remember:** A package installed in one virtual environment is not automatically available in every other environment.