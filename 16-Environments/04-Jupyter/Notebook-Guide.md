# Jupyter Notebook Guide

A Jupyter notebook is an interactive document containing code, text, outputs, and visualizations.

Notebook files usually use the `.ipynb` extension.

## 1. Understand Notebook Cells

There are two commonly used cell types:

### Code cells

Used to execute code in the selected kernel.

```python
x = 10
y = 20

print(x + y)
```

Output:

```text
30
```

### Markdown cells

Used to write formatted explanations, headings, lists, tables, links, and equations.

```markdown
# My First Notebook

This notebook demonstrates basic Python operations.

- Variables
- Arithmetic
- Output
```

Markdown cells are rendered as formatted content rather than executed as Python.

## 2. Run a Cell

Common keyboard shortcuts in the classic Notebook interface and JupyterLab include:

| Shortcut | Action |
|---|---|
| `Shift + Enter` | Run the current cell and select the next cell |
| `Ctrl + Enter` | Run the current cell and remain on it |
| `Alt + Enter` | Run the current cell and insert a new cell below |

Shortcuts can vary by interface, operating system, and configuration.

## 3. Understand Execution Order

Notebook cells are not automatically executed from top to bottom.

```python
# Cell 1
x = 10
```

```python
# Cell 2
print(x)
```

The second cell works only if `x` has already been defined in the current kernel session.

Running cells out of order can cause confusing results.

## 4. Cell Execution Numbers

A code cell may show an execution count such as `In [3]`.

This means it was the third execution recorded in that kernel session. It does not necessarily mean it is the third cell in the notebook.

An output may also remain visible after the underlying kernel state has changed. Treat old outputs cautiously.

## 5. Restart and Run All

When a notebook behaves unexpectedly:

1. Save the notebook.
2. Restart the kernel.
3. Run all cells from top to bottom.
4. Fix any errors.
5. Confirm that the final outputs are correct.

The exact menu wording depends on your Jupyter interface.

## 6. Inspect the Current Python Environment

```python
import sys

print(sys.executable)
print(sys.version)
```

This helps you determine which Python interpreter the notebook is using.

## 7. Display Data and Visualizations

```python
import pandas as pd
import matplotlib.pyplot as plt

data = pd.DataFrame({
    "subject": ["Python", "Math", "ML"],
    "score": [85, 90, 78]
})

display(data)

data.plot(x="subject", y="score", kind="bar", legend=False)
plt.ylabel("Score")
plt.show()
```

This example displays a DataFrame and a simple bar chart. Install `pandas` and `matplotlib` in the notebook's environment before running it.

## 8. Save and Share Notebooks

A notebook stores code, Markdown, outputs, and metadata in an `.ipynb` file.

Before publishing:

- Restart the kernel and run all cells.
- Remove unnecessary outputs when appropriate.
- Avoid saving sensitive information in cell outputs.
- Include dependency instructions.
- Use relative paths for project files when practical.

## 💡 Best Practices

- Keep cells focused on one logical task.
- Add Markdown explanations between important code sections.
- Use meaningful variable names.
- Avoid repeatedly executing cells in random order.
- Keep long experiments and reusable production code organized appropriately.

---

**Remember:** A notebook is both a document and an execution environment. Its visible outputs do not guarantee that the code will run correctly in a fresh session.