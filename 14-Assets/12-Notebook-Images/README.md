# 📓 Notebook Images

This folder contains images used inside Jupyter notebooks throughout the **AI-ML-Journey** repository.

These images support explanations, demonstrate concepts, illustrate workflows, and make technical notes easier to understand.

## 🎯 Purpose

Notebook images help communicate concepts that are difficult to explain using text or code alone.

Use this folder to store:

- Conceptual illustrations for Python and programming fundamentals
- Data structures and algorithm diagrams
- Data science and exploratory data analysis visuals
- Machine learning and deep learning illustrations
- Mathematical and statistical concept diagrams
- Workflow explanations and educational screenshots
- Supporting images for notebook exercises and projects

## 📂 Organization Guidelines

Group images by subject or notebook when the collection becomes large.

Suggested structure:

```text
12-Notebook-Images/
├── README.md
├── Python/
├── Mathematics/
├── Data-Science/
├── Machine-Learning/
├── Deep-Learning/
└── Projects/
```

These subfolders are optional. Adapt the organization to your actual notebooks rather than creating unnecessary directories.

## 🏷️ Naming Convention

Use descriptive filenames in **kebab-case**.

Examples:

- `python-data-types.png`
- `string-indexing-and-slicing.png`
- `python-memory-model.png`
- `data-cleaning-workflow.png`
- `feature-scaling-comparison.png`
- `neural-network-architecture.png`

When several images belong to the same topic, use numbered filenames if sequence matters:

- `01-data-loading.png`
- `02-data-cleaning.png`
- `03-data-analysis.png`

## 🔗 Using Images in Jupyter Notebooks

You can display an image in a Markdown cell using a relative path.

For example, from a notebook inside `01-Python/`:

```markdown
![Python data types](../../14-Assets/12-Notebook-Images/python-data-types.png)
```

**Important:** Relative paths depend on the notebook's location. Check the directory depth before referencing an image.

You can also display an image using Python:

```python
from IPython.display import Image, display

display(Image(filename="../../14-Assets/12-Notebook-Images/python-data-types.png"))
```

Adjust the path to match your notebook's location and the actual image filename.

## 📝 Image Quality and Licensing

- Use readable images with sufficient resolution.
- Prefer PNG for diagrams and screenshots.
- Use SVG where the notebook renderer supports it reliably.
- Compress large images when practical.
- Follow the original license and provide attribution when required.
- Avoid storing duplicate copies of the same image without a clear reason.
- Remove private information and secrets from screenshots before committing.

## 💡 Best Practices

- Place images near the explanations they support.
- Add meaningful alternative text in Markdown.
- Keep diagrams consistent with the notebook's terminology.
- Avoid using images when a simple Markdown table or code example communicates the concept better.
- Verify that image paths work when notebooks are opened from the repository.
- Keep filenames stable so that existing notebook references do not break.

---

**Part of the AI-ML-Journey repository** — a structured learning resource for programming, mathematics, data science, machine learning, and artificial intelligence.
