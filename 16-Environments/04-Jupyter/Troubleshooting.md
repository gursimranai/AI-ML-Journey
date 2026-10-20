# Jupyter Troubleshooting

This guide covers common Jupyter installation, kernel, package, and notebook problems.

## 1. `jupyter` Command Not Found

Check whether Jupyter is installed in the active environment:

```powershell
python -m pip show jupyterlab
python -m pip show notebook
```

If necessary, install the interface you want:

```powershell
python -m pip install jupyterlab
```

Activate the intended virtual environment before installing packages.

## 2. Notebook Uses the Wrong Python

Run in a notebook cell:

```python
import sys

print(sys.executable)
```

Select the correct kernel if the interpreter path is wrong.

Remember that the notebook's kernel can use a different environment from the terminal that launched Jupyter.

## 3. `ModuleNotFoundError`

Example:

```text
ModuleNotFoundError: No module named 'pandas'
```

First check the notebook's Python interpreter. Then install the missing package into that environment.

Inside a notebook, where supported:

```python
%pip install pandas
```

Alternatively, use the terminal associated with the correct environment:

```powershell
python -m pip install pandas
```

Restart the kernel if needed after installation.

## 4. Kernel Keeps Restarting or Fails to Start

Try the following:

1. Check that the environment still exists.
2. Confirm that `ipykernel` is installed.
3. Verify the registered kernel configuration.
4. Inspect the terminal output for the actual error.
5. Re-register the kernel if it points to a missing Python installation.

Install kernel support in the intended environment:

```powershell
python -m pip install ipykernel
```

## 5. Changes to Variables Are Not Reflected

A notebook's kernel retains state between executions. Running cells out of order can cause old variables to remain active.

Try:

1. Save the notebook.
2. Restart the kernel.
3. Run all cells from top to bottom.

This helps identify missing definitions and hidden execution-order dependencies.

## 6. Jupyter Opens but the Page Does Not Load

- Check the terminal for startup errors.
- Verify that the server is still running.
- Try the local URL printed in the terminal.
- Check browser and local security settings.
- Restart the server if needed.

Do not share tokenized Jupyter URLs publicly; they may grant access to your running server.

## 7. Images or Files Are Not Found

Check the current working directory:

```python
from pathlib import Path

print(Path.cwd())
print(list(Path.cwd().iterdir()))
```

Use appropriate relative paths or explicitly construct paths based on your project structure.

## 8. Port Already in Use

If the default port is occupied, you can start JupyterLab on another port:

```powershell
jupyter lab --port=8889
```

Use the URL printed in the terminal. Do not expose the server to an untrusted network.

## 9. Notebook File Is Too Large

Large saved outputs, images, or embedded data can increase the size of `.ipynb` files.

- Remove unnecessary outputs.
- Avoid embedding large datasets in cell output.
- Load datasets from appropriate files instead.
- Keep only useful outputs in published notebooks.

## 10. Magic Command Does Not Work

Magic commands such as `%timeit` and `%who` are provided by IPython. They may not work in standard Python scripts or other kernels.

Check the active kernel and consult the [IPython magic command reference](https://ipython.readthedocs.io/en/stable/interactive/magics.html).

## 🔗 Official Resources

- [Jupyter Documentation](https://docs.jupyter.org/)
- [JupyterLab Documentation](https://jupyterlab.readthedocs.io/)
- [IPython Documentation](https://ipython.readthedocs.io/)

---

**Best practice:** Identify the actual error message and the active kernel before reinstalling Jupyter or Python.