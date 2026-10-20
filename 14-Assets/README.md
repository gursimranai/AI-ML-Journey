# 🎨 Assets Library

Welcome to the **Assets Library** of the AI-ML-Journey repository.

This directory contains visual resources used throughout the repository, including educational diagrams, data visualizations, machine learning illustrations, project screenshots, GitHub profile graphics, icons, logos, and Jupyter notebook images.

The goal is to maintain a centralized, organized, and reusable collection of visual assets that improves the quality of technical notes, notebooks, documentation, and projects.

## 🎯 Purpose

The Assets Library helps to:

- Explain complex technical concepts through visual representations.
- Support Python, mathematics, data science, and AI/ML learning materials.
- Improve the readability of Markdown files and Jupyter notebooks.
- Showcase project interfaces, outputs, and results.
- Maintain consistent visual presentation across the repository.
- Reuse assets without unnecessarily duplicating files.

## 📂 Directory Structure

```text
14-Assets/
├── README.md
├── 01-Diagrams/
├── 02-Flowcharts/
├── 03-Mathematical-Visualizations/
├── 04-Data-Visualizations/
├── 05-Machine-Learning-Visuals/
├── 06-Deep-Learning-Visuals/
├── 07-NLP-And-LLM-Visuals/
├── 08-Computer-Vision-Visuals/
├── 09-Project-Screenshots/
├── 10-GitHub-And-Profile-Assets/
├── 11-Icons-And-Logos/
└── 12-Notebook-Images/
```

Each category has its own README describing its purpose and organization guidelines. Existing images and additional files should remain in their appropriate folders.

## 🗂️ Asset Categories

| Folder | Purpose |
|---|---|
| `01-Diagrams/` | Conceptual diagrams explaining programming, data structures, AI, and related topics. |
| `02-Flowcharts/` | Algorithms, workflows, decision processes, and step-by-step logic. |
| `03-Mathematical-Visualizations/` | Linear algebra, calculus, probability, statistics, and optimization visuals. |
| `04-Data-Visualizations/` | EDA plots, distributions, relationships, data quality, and statistical visuals. |
| `05-Machine-Learning-Visuals/` | ML algorithms, training workflows, evaluation, and model concepts. |
| `06-Deep-Learning-Visuals/` | Neural networks, CNNs, training processes, and deep learning architectures. |
| `07-NLP-And-LLM-Visuals/` | NLP concepts, embeddings, attention, transformers, and LLM workflows. |
| `08-Computer-Vision-Visuals/` | Image processing, CNNs, object detection, segmentation, and vision models. |
| `09-Project-Screenshots/` | Screenshots of project interfaces, outputs, dashboards, and results. |
| `10-GitHub-And-Profile-Assets/` | GitHub profile banners, profile graphics, badges, and portfolio visuals. |
| `11-Icons-And-Logos/` | Programming language, library, framework, tool, and project icons or logos. |
| `12-Notebook-Images/` | Supporting images embedded in Jupyter notebook explanations and lessons. |

## 🧭 Where Should an Asset Go?

Choose the folder according to the asset's **primary purpose**, rather than its file format.

- **Concept explanation:** `01-Diagrams/`
- **Algorithm or process steps:** `02-Flowcharts/`
- **Mathematical concept:** `03-Mathematical-Visualizations/`
- **Charts and exploratory analysis:** `04-Data-Visualizations/`
- **Traditional ML concept:** `05-Machine-Learning-Visuals/`
- **Neural network or deep learning concept:** `06-Deep-Learning-Visuals/`
- **NLP, transformers, or LLM concept:** `07-NLP-And-LLM-Visuals/`
- **Image processing or vision model:** `08-Computer-Vision-Visuals/`
- **Actual project screenshot:** `09-Project-Screenshots/`
- **GitHub profile or portfolio graphic:** `10-GitHub-And-Profile-Assets/`
- **Standalone icon or logo:** `11-Icons-And-Logos/`
- **Image specifically supporting a notebook:** `12-Notebook-Images/`

If an image could fit multiple categories, select the folder that best represents how it will be used. Avoid storing duplicate copies unless there is a clear reason.

## 🏷️ File Naming Convention

Use descriptive filenames in **kebab-case**.

Recommended:

- `python-data-types.png`
- `data-cleaning-workflow.png`
- `duplicate-records-root-cause-analysis.png`
- `machine-learning-terminology.png`
- `transformer-architecture.svg`
- `model-training-results.png`

Avoid vague names such as `image1.png`, `final2.png`, or `new-pic.png`.

Use appropriate file formats:

- **PNG:** screenshots, diagrams, and transparent raster graphics.
- **SVG:** scalable diagrams, icons, and vector graphics.
- **WebP:** compressed images where supported.
- **JPEG:** photographs and other images where transparency is unnecessary.

## 🔗 Referencing Assets in Markdown

Use relative paths so images can be displayed in repository documentation.

For example, from the root repository README:

```markdown
![Python data types](14-Assets/01-Diagrams/python-data-types.png)
```

For an image referenced from a notebook or Markdown file in a nested folder, adjust the path according to that file's location.

For a GitHub profile README stored in a separate repository, use an appropriate publicly accessible image URL if the image resides in this repository.

## 📝 Attribution and Licensing

- Check the license before reusing externally sourced assets.
- Provide attribution when required.
- Respect copyright, trademark, and brand guidelines.
- Prefer original diagrams when they improve learning and accuracy.
- Do not present illustrative visuals as exact implementations when they are only conceptual.
- Remove API keys, passwords, private data, and other sensitive information from screenshots before committing.

## ✅ Quality Guidelines

- Keep images clear, readable, and relevant.
- Use consistent terminology and visual styles.
- Avoid unnecessary duplication and oversized files.
- Add alternative text when referencing images in Markdown.
- Verify relative paths after moving or renaming assets.
- Keep project screenshots consistent with the actual state of the project.
- Update visuals when the associated learning materials change.

## 🚀 Contribution Guidelines

When adding a new asset:

1. Choose the most appropriate category.
2. Give the file a descriptive name.
3. Check its quality, source, and licensing.
4. Update the relevant folder README if its documented contents or organization need to change.
5. Verify any Markdown references to the asset.
6. Commit the changes with a clear Git commit message.

---

**Part of the AI-ML-Journey repository** — a structured learning journey from programming fundamentals to data science, machine learning, deep learning, and modern AI.
