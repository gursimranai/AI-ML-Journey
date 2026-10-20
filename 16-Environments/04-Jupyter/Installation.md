# Installing Jupyter

This guide explains how to install Jupyter Notebook or JupyterLab and run your first notebook.

## 1. Prerequisites

You need Python and a working package installer.

Verify them:

```powershell
python --version
python -m pip --version
```

It is recommended to install Jupyter in a virtual environment rather than globally.

## 2. Create a Virtual Environment

On Windows PowerShell:

```powershell
python -m venv .venv
.\.venv\Scripts\Activate.ps1
```

On macOS or Linux:

```bash
python3 -m venv .venv
source .venv/bin/activate
```

If you already have a project environment, activate that environment instead of creating another one.

## 3. Install JupyterLab

```powershell
python -m pip install --upgrade pip
python -m pip install jupyterlab ipykernel
```

Launch JupyterLab:

```powershell
jupyter lab
```

JupyterLab normally opens in your default browser.

## 4. Install Classic Jupyter Notebook

If you prefer the classic Notebook interface:

```powershell
python -m pip install notebook ipykernel
```

Launch it:

```powershell
jupyter notebook
```

You can install both interfaces, but you do not need both for basic notebook work.

## 5. Verify the Installation

```powershell
jupyter --version
python -m pip show jupyterlab
python -m pip show notebook
```

The last two commands display package details if the respective package is installed.

## 6. Create Your First Notebook

1. Launch JupyterLab or Notebook.
2. Navigate to your project folder.
3. Create a new Python notebook.
4. Enter this code in a code cell:

```python
print("Hello, Jupyter!")
```

5. Run the cell.

Expected output:

```text
Hello, Jupyter!
```

## 7. Stop the Jupyter Server

Return to the terminal running Jupyter and press `Ctrl + C`. Follow the terminal prompt if it asks you to confirm shutdown.

## ⚠️ Important Notes

- Install Jupyter in the environment you intend to use.
- The notebook server and notebook kernel are related but distinct components.
- If the notebook needs packages from a different environment, select or register that environment's kernel.
- Never expose a Jupyter server publicly without understanding its security implications.

## 🔗 Official Resources

- [Jupyter Installation](https://jupyter.org/install)
- [JupyterLab Documentation](https://jupyterlab.readthedocs.io/)
- [Jupyter Notebook Documentation](https://jupyter-notebook.readthedocs.io/)

---

**Tip:** If you're using VS Code, you can also work with `.ipynb` files directly using the Python and Jupyter extensions.