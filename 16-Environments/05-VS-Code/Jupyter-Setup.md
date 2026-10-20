# Jupyter Setup in VS Code

VS Code supports interactive Jupyter notebooks through its Jupyter extension. This lets you write explanations, execute Python cells, and display tables and visualizations inside the editor.

## 1. Install the Required Extensions

Install these extensions from the VS Code Extensions view:

- Python — Microsoft
- Jupyter — Microsoft

Pylance is also recommended for Python language support.

## 2. Create a Virtual Environment

From the project root, run:

```powershell
python -m venv .venv
.\.venv\Scripts\Activate.ps1
```

If the project already has an environment, activate it instead.

## 3. Install Notebook Support

```powershell
python -m pip install --upgrade pip
python -m pip install ipykernel
```

The Jupyter extension supplies the VS Code notebook interface; `ipykernel` provides the Python kernel support needed by the environment.

## 4. Create or Open a Notebook

1. Open your project in VS Code.
2. Create a new Jupyter notebook or open an existing `.ipynb` file.
3. Select a kernel from the notebook toolbar.
4. Choose the Python environment associated with your project.

## 5. Run a Code Cell

Enter:

```python
print("Hello from a VS Code notebook!")
```

Run the cell using its play button or the notebook keyboard controls.

## 6. Verify the Kernel

Run:

```python
import sys

print(sys.executable)
print(sys.version)
```

Confirm that the executable points to the intended environment.

## 7. Install Notebook Packages

For example:

```powershell
python -m pip install pandas matplotlib
```

Install packages into the environment selected by your notebook kernel.

Then test inside a notebook cell:

```python
import pandas as pd
import matplotlib.pyplot as plt

print(pd.__version__)
```

## 8. Markdown Cells

Use Markdown cells to document concepts, formulas, examples, and results.

For example:

```markdown
# Data Analysis

## Objective

Explore a dataset and understand its main patterns.

## Findings

Summarize the most important observations.
```

## 9. Common Problems

- **Kernel unavailable:** Ensure the intended environment exists and has `ipykernel` installed.
- **Import errors:** Check the notebook kernel and install missing packages there.
- **Notebook opens as text:** Verify that the Jupyter extension is installed and enabled.
- **Wrong Python interpreter:** Select the correct kernel from the notebook toolbar.

## 🔗 Official Resources

- [Jupyter Notebooks in VS Code](https://code.visualstudio.com/docs/datascience/jupyter-notebooks)
- [Python Environments in VS Code](https://code.visualstudio.com/docs/python/environments)

---

**Tip:** Selecting a Python interpreter and selecting a notebook kernel are related tasks, but you should verify the active kernel independently.