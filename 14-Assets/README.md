# 🎨 Assets Library

Welcome to the **Assets Library** of the AI/ML Journey repository. This directory stores reusable visual resources that support learning materials, technical documentation, Jupyter notebooks, tutorials, and projects.

It includes conceptual diagrams, flowcharts, mathematical illustrations, data visualizations, machine learning visuals, deep learning visuals, NLP and LLM visuals, computer vision visuals, icons, logos, and notebook-specific images.

The purpose of this directory is to maintain a **centralized, organized, and reusable collection of visual assets** without unnecessarily duplicating files across the repository.

---

## 📂 Directory Structure

```text
14-Assets/
│
├── README.md
│
├── 01-Diagrams/
├── 02-Flowcharts/
├── 03-Mathematical-Visualizations/
├── 04-Data-Visualizations/
├── 05-Machine-Learning-Visuals/
├── 06-Deep-Learning-Visuals/
├── 07-NLP-And-LLM-Visuals/
├── 08-Computer-Vision-Visuals/
├── 11-Icons-And-Logos/
└── 12-Notebook-Images/
```

*This overview reflects the folders currently identified in the repository. Keep any other existing folders, including folders numbered 09 and 10, if present.*

---

## 📚 Asset Categories

| Folder | Purpose | Examples |
|---|---|---|
| [01-Diagrams](01-Diagrams/) | Explain concepts, components, relationships, and structures. | Python core data types, types of AI, conceptual diagrams |
| [02-Flowcharts](02-Flowcharts/) | Illustrate workflows, algorithms, and decision processes. | Program flow, data-processing pipelines |
| [03-Mathematical-Visualizations](03-Mathematical-Visualizations/) | Represent mathematical and statistical concepts visually. | Functions, derivatives, vectors, probability distributions |
| [04-Data-Visualizations](04-Data-Visualizations/) | Store visuals related to data exploration, analysis, and interpretation. | Outliers, duplicate records, data-cleaning illustrations |
| [05-Machine-Learning-Visuals](05-Machine-Learning-Visuals/) | Explain machine learning terminology, algorithms, and workflows. | Model training, evaluation, ML concepts |
| [06-Deep-Learning-Visuals](06-Deep-Learning-Visuals/) | Illustrate neural networks and deep learning architectures. | Neural network layers, CNN architectures |
| [07-NLP-And-LLM-Visuals](07-NLP-And-LLM-Visuals/) | Explain language processing and large language model concepts. | Tokenization, embeddings, attention mechanisms |
| [08-Computer-Vision-Visuals](08-Computer-Vision-Visuals/) | Store visuals about image processing and computer vision. | Image classification, object detection |
| [11-Icons-And-Logos](11-Icons-And-Logos/) | Store icons, project logos, and other interface or branding assets. | Technology icons, project logos |
| [12-Notebook-Images](12-Notebook-Images/) | Store images created or selected specifically for notebook-based lessons. | Topic illustrations, notebook banners |

---

## 🗂️ Organization Guidelines

### 1. Choose the folder by the visual's purpose

Organize assets according to what the image communicates and how it will be reused.

- Use `01-Diagrams/` for conceptual explanations.
- Use `02-Flowcharts/` for step-by-step processes and decision flows.
- Use `03-Mathematical-Visualizations/` for mathematical concepts.
- Use `04-Data-Visualizations/` for data analysis and statistical interpretation.
- Use subject-specific visual folders for ML, deep learning, NLP/LLMs, and computer vision.
- Use `12-Notebook-Images/` for images intended primarily to support Jupyter notebook content.

Avoid creating additional categories when an existing folder is suitable.

### 2. Use descriptive filenames

Prefer readable, consistent, hyphen-separated filenames.

**Good examples:**

- `Core-Data-Types.png`
- `Types-Of-AI.png`
- `Outlier-Understanding.png`
- `Duplicate-Records-Root-Cause-Analysis.png`
- `Machine-Learning-Terminology.png`

Avoid vague names such as `image1.png`, `final2.png`, or `new-diagram.png`.

### 3. Keep one canonical copy

Store each reusable asset in one appropriate location and reference it from other notebooks or documentation. Do not create multiple copies merely because an image is used in different lessons.

### 4. Preserve attribution and licensing

When using third-party images, diagrams, icons, or illustrations:

- Record the source when required.
- Follow the asset's license and attribution conditions.
- Prefer original visuals or assets with clear reuse permissions.
- Do not assume an image found online is free to redistribute.

### 5. Keep assets relevant

Store only resources that support the repository's learning materials, documentation, or projects. Remove obsolete duplicates when safe to do so, and update any references before moving or renaming existing assets.

---

## 🖼️ Referencing Images in Markdown

Use relative paths to display assets inside Markdown files and Jupyter notebooks.

For example, from a notebook located at `01-Python/01-Fundamentals/01-Notebooks/`:

```markdown
![Python Core Data Types](../../../14-Assets/01-Diagrams/Core-Data-Types.png)
```

The correct relative path depends on the location of the file that references the image. Verify the path after moving assets.

---

## 🚀 Best Practices

- Keep filenames consistent and descriptive.
- Use PNG for diagrams and screenshots when appropriate; use SVG for scalable diagrams when supported by the intended platform.
- Prefer readable, high-resolution visuals.
- Keep diagrams uncluttered and labels legible.
- Avoid unnecessary duplication.
- Check Markdown and notebook image references after moving files.
- Add new visuals to the existing category that best fits their purpose.

---

## 🎯 Purpose

This library supports the broader AI/ML learning journey by making visual resources easy to find, reuse, and maintain.

**Organize once. Reference anywhere. Keep learning materials clear and consistent.**