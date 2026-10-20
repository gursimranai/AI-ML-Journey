# Using Conda with Jupyter Notebook

Conda environments can provide the Python interpreter and packages used by Jupyter notebooks.

## 1. Create a Notebook Environment

```bash
conda create --name ai-ml python=3.12
conda activate ai-ml
```

## 2. Install Jupyter and the Kernel

```bash
conda install jupyterlab ipykernel
```

This installs JupyterLab and the IPython kernel in the active environment.

If you prefer classic Notebook, you can install `notebook` instead:

```bash
conda install notebook ipykernel
```

## 3. Launch Jupyter

For JupyterLab:

```bash
jupyter lab
```

For classic Notebook:

```bash
jupyter notebook
```

The command opens Jupyter in your browser when the environment and browser are configured normally.

## 4. Register a Named Kernel (Optional)

If you need the environment to appear explicitly as a selectable kernel, run:

```bash
python -m ipykernel install --user --name ai-ml --display-name "Python (AI-ML)"
```

Then open your notebook and select **Python (AI-ML)** from the kernel menu.

The kernel registration is stored in your user profile, not inside your repository. If you remove the environment, you may also want to remove its registered kernel:

```bash
jupyter kernelspec uninstall ai-ml
```

Confirm that the kernel name is correct before uninstalling it.

## 5. Verify the Notebook Interpreter

Run this in a notebook cell:

```python
import sys

print(sys.executable)
print(sys.version)
```

Check that the interpreter path points to the intended Conda environment.

## ⚠️ Common Issues

- **Wrong Python kernel:** Select the intended kernel from the notebook interface.
- **Package import error:** Install the missing package in the environment used by the notebook.
- **Environment missing from kernel list:** Install `ipykernel` in that environment and register it if necessary.
- **Jupyter command not found:** Activate the environment and check that Jupyter is installed.

## 🔗 Resources

- [Jupyter Documentation](https://docs.jupyter.org/)
- [IPython Kernel Documentation](https://ipython.readthedocs.io/en/stable/install/kernel_install.html)

---

**Remember:** The environment used by the notebook kernel determines which Python packages are available to its cells.