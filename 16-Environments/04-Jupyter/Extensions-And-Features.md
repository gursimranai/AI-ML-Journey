# Jupyter Extensions and Features

Jupyter provides interactive features for writing code, analyzing data, and presenting results. Additional capabilities depend on whether you use JupyterLab, classic Notebook, or VS Code.

## 1. Useful Built-in Features

### Interactive execution

Run individual code cells without executing the entire notebook.

### Rich output

Display text, tables, HTML, mathematical equations, images, and charts directly in notebook output.

### Tab completion

Type part of a variable, function, or attribute name and press `Tab` in a supported code cell to explore available completions.

### Introspection

Use `?` to inspect an object's documentation:

```python
len?
```

Use double question marks to request additional source information when available:

```python
len??
```

Source code may not be available for built-in functions or compiled objects.

### Rich display

```python
from IPython.display import Markdown, display

display(Markdown("## Analysis Results"))
```

This renders Markdown content in the notebook output.

## 2. Useful JupyterLab Features

JupyterLab provides a flexible workspace with features such as:

- Notebook and text editors.
- File browser.
- Integrated terminal.
- Multiple tabs and panels.
- Variable and output inspection tools, depending on installed extensions.
- Support for additional extensions.

Documentation: [JupyterLab User Guide](https://jupyterlab.readthedocs.io/en/stable/user/interface.html)

## 3. JupyterLab Extensions

Extensions can add functionality to JupyterLab, but compatibility depends on your JupyterLab version and the extension itself.

Before installing an extension:

1. Check the official documentation.
2. Verify version compatibility.
3. Review its maintenance status and permissions.
4. Install it in the appropriate environment.
5. Restart JupyterLab if required.

Avoid installing unmaintained extensions from unknown sources.

## 4. Useful Companion Libraries

| Library | Purpose |
|---|---|
| `matplotlib` | Charts and visualizations |
| `pandas` | Data analysis and tabular data |
| `ipywidgets` | Interactive notebook controls |
| `ipykernel` | Python kernel support |
| `IPython` | Interactive Python features |

Install selected libraries in the active environment:

```bash
python -m pip install matplotlib pandas ipywidgets ipykernel
```

Not every notebook needs every library.

## 5. Interactive Widgets

Example using `ipywidgets`:

```python
import ipywidgets as widgets
from IPython.display import display

slider = widgets.IntSlider(
    value=5,
    min=0,
    max=10,
    description="Value:"
)

display(slider)
```

This creates an interactive integer slider when the notebook frontend supports the widget.

## 6. Visualize Data

```python
import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar"]
sales = [120, 150, 135]

plt.plot(months, sales, marker="o")
plt.title("Monthly Sales")
plt.xlabel("Month")
plt.ylabel("Sales")
plt.show()
```

This produces a simple line chart directly in the notebook.

## 7. Choose the Right Interface

- **Jupyter Notebook:** Suitable for straightforward notebook-based work.
- **JupyterLab:** Suitable for a richer workspace with multiple files and panels.
- **VS Code:** Convenient when notebooks are part of a larger software project.

## 💡 Best Practices

- Keep extensions to those you actually need.
- Check compatibility before upgrading JupyterLab.
- Restart and test notebooks after installing new packages.
- Avoid relying on frontend-specific features if collaborators use different notebook interfaces.
- Keep project dependencies documented.

## 🔗 Official Resources

- [JupyterLab Documentation](https://jupyterlab.readthedocs.io/)
- [IPyWidgets Documentation](https://ipywidgets.readthedocs.io/)
- [Matplotlib Documentation](https://matplotlib.org/stable/)

---

**Remember:** Many notebook features are built in, while other capabilities require extra packages or compatible frontend extensions.