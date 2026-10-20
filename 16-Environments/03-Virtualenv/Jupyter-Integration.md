# Jupyter Integration with Virtual Environments

Jupyter notebooks allow you to combine Python code, explanations, tables, and visualizations. A virtual environment helps ensure that a notebook uses the packages required by its project.

## 1. Create and Activate an Environment

Windows PowerShell:

```powershell
python -m venv .venv
.\.venv\Scripts\Activate.ps1
```

## 2. Install Jupyter Support

```powershell
python -m pip install --upgrade pip
python -m pip install jupyterlab ipykernel
```

You can use classic Notebook instead by installing `notebook`:

```powershell
python -m pip install notebook ipykernel
```

You generally only need to install the Jupyter interface you plan to use.

## 3. Launch Jupyter

For JupyterLab:

```powershell
jupyter lab
```

For classic Notebook:

```powershell
jupyter notebook
```

## 4. Select the Correct Kernel

When opening a notebook, choose the kernel associated with the `.venv` environment.

If you need to register the environment explicitly, run:

```powershell
python -m ipykernel install --user --name ai-ml-journey --display-name "Python (AI-ML-Journey)"
```

This registers a kernel specification in your user profile. It does not copy the virtual environment into the repository.

## 5. Verify the Kernel

Run in a notebook cell:

```python
import sys

print(sys.executable)
print(sys.version)
```

Confirm that the interpreter path points to your `.venv` directory.

## 6. Install a Missing Library

If a notebook cannot import a library, first verify which Python interpreter the notebook uses. Then install the package in that environment.

For example:

```powershell
python -m pip install pandas
```

Run this in a terminal using the intended environment.

## ⚠️ Common Mistakes

- Installing a package in one environment while the notebook uses another.
- Assuming terminal activation automatically changes an already-running notebook's kernel.
- Committing `.venv` to GitHub.
- Forgetting to document dependencies needed to reproduce the notebook.

## 🔗 Official Resources

- [Jupyter Documentation](https://docs.jupyter.org/)
- [IPython Kernel Installation](https://ipython.readthedocs.io/en/stable/install/kernel_install.html)

---

**Remember:** The notebook kernel determines which Python interpreter executes the cells.