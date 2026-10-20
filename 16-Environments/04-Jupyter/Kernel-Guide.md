# Jupyter Kernel Guide

A kernel is the process that executes code for a notebook. A Python notebook commonly uses an IPython kernel.

The notebook interface sends code to the kernel and displays the results.

## 1. What Does a Kernel Do?

A kernel maintains the active execution state, including variables, imported libraries, and functions.

For example, after running:

```python
message = "Hello"
```

You can use the variable in a later cell:

```python
print(message)
```

The variable remains available while the same kernel session retains its state.

## 2. Check the Current Kernel's Python

Run inside a notebook cell:

```python
import sys

print(sys.executable)
print(sys.version)
```

The interpreter path helps identify the Python environment used by the notebook.

## 3. Install IPython Kernel Support

Activate the intended environment before installing the package.

For a `venv` environment on Windows:

```powershell
.\.venv\Scripts\Activate.ps1
python -m pip install ipykernel
```

For a Conda environment:

```bash
conda activate ai-ml
conda install ipykernel
```

Choose the commands appropriate to your environment; you do not need to install both environments.

## 4. Register a Named Kernel

Optional registration makes an environment available under a descriptive kernel name.

```powershell
python -m ipykernel install --user --name ai-ml --display-name "Python (AI-ML)"
```

- `--user` registers the kernel for the current user.
- `--name` specifies the internal kernel identifier.
- `--display-name` specifies the label shown in notebook interfaces.

Select **Python (AI-ML)** in the notebook's kernel menu.

## 5. List Registered Kernels

```powershell
jupyter kernelspec list
```

This lists kernel specifications known to Jupyter. A listed kernel may still point to a Python environment that has since been moved or removed.

## 6. Change a Notebook's Kernel

In JupyterLab or classic Notebook:

1. Open the notebook.
2. Open the kernel selection menu.
3. Select the desired Python environment.
4. Run a small test cell.
5. Verify the interpreter using `sys.executable`.

In VS Code, use the notebook's **Select Kernel** control.

## 7. Restart, Interrupt, and Shut Down

- **Restart:** Resets the kernel's in-memory state.
- **Interrupt:** Attempts to stop the currently executing code.
- **Shut down:** Stops the kernel process.

After a restart, previously defined variables are no longer available until their cells are run again.

## 8. Remove a Registered Kernel

If you no longer need a kernel registration:

```powershell
jupyter kernelspec uninstall ai-ml
```

Replace `ai-ml` with the correct internal kernel name. Verify the name first using `jupyter kernelspec list`.

Removing a kernel specification is not the same as deleting the environment itself.

## ⚠️ Common Mistakes

- Installing a package into an environment different from the notebook kernel.
- Assuming terminal activation changes an already-running notebook's kernel.
- Forgetting that restarting the kernel clears variables.
- Keeping kernel registrations that point to deleted environments.

## 🔗 Official Resources

- [IPython Kernel Installation](https://ipython.readthedocs.io/en/stable/install/kernel_install.html)
- [Jupyter Documentation](https://docs.jupyter.org/)

---

**Tip:** When an import fails, check `sys.executable` before reinstalling Python or Jupyter.