# 📊 Datasets Library

A structured collection of datasets for learning, experimentation, data analysis, machine learning, deep learning, and AI projects.

This directory is part of the **[AI-ML-Journey](../README.md)** repository. It organizes datasets by data type, machine learning task, and supporting resources to make them easier to discover, understand, and use.

---

## 🎯 Objectives

- Build a well-organized collection of datasets for AI and ML learning.
- Practice data collection, cleaning, preprocessing, and exploratory data analysis.
- Experiment with different machine learning and deep learning tasks.
- Maintain dataset documentation, source attribution, and licensing information.
- Support reproducible experiments and practical projects.

---

## 📁 Directory Structure

| Folder | Description |
|---|---|
| `01-Tabular-Data/` | Structured datasets organized in rows and columns, commonly available in CSV, Excel, and similar formats. |
| `02-Text-Data/` | Raw and structured text datasets for text analysis and language-related experiments. |
| `03-Image-Data/` | Image datasets for image processing, classification, and visual analysis. |
| `04-Time-Series-Data/` | Sequential data collected over time for forecasting, trend analysis, and temporal modeling. |
| `05-Audio-And-Speech-Data/` | Audio recordings and speech datasets for audio processing and speech-related applications. |
| `06-Video-Data/` | Video datasets for video analysis, activity recognition, and related experiments. |
| `07-NLP-And-LLM-Datasets/` | Datasets for natural language processing, language modeling, and LLM experimentation. |
| `08-Computer-Vision-Datasets/` | Datasets for computer vision tasks such as object detection, segmentation, and recognition. |
| `09-Classification-Datasets/` | Datasets primarily used for classification experiments and supervised learning. |
| `10-Regression-Datasets/` | Datasets for regression tasks and continuous-value prediction. |
| `11-Clustering-Datasets/` | Datasets for clustering, segmentation, and unsupervised learning experiments. |
| `12-Synthetic-Data/` | Artificially generated datasets for testing, experimentation, and simulation. |
| `13-Data-Collection-Scripts/` | Scripts and utilities for collecting, downloading, and organizing datasets. |
| `14-Data-Preprocessing/` | Data cleaning, transformation, validation, and preprocessing resources. |
| `15-Dataset-Cards-And-Metadata/` | Dataset documentation, metadata, source information, and reusable dataset cards. |

---

## 🌐 Dataset Sources

Datasets may be collected from various public and open-source platforms, including:

- [Kaggle](https://www.kaggle.com/datasets)
- [UCI Machine Learning Repository](https://archive.ics.uci.edu/)
- [Hugging Face Datasets](https://huggingface.co/datasets)
- [Google Dataset Search](https://datasetsearch.research.google.com/)
- [GitHub](https://github.com/)
- Official research organizations and open-data portals.

**Note:** A publicly accessible dataset is not automatically free to redistribute. Always check its license, terms of use, and attribution requirements.

---

## 🗂️ Dataset Organization Guidelines

Whenever appropriate, organize individual datasets using a structure like:

```text
Dataset-Name/
│
├── README.md
├── Raw/
├── Sample/
├── Cleaned/
└── Processed/
```

| Directory | Purpose |
|---|---|
| `Raw/` | Original, unchanged dataset files. |
| `Sample/` | Smaller subsets for quick testing and experimentation. |
| `Cleaned/` | Data after handling missing values, duplicates, and quality issues. |
| `Processed/` | Transformed data prepared for specific analysis or modeling tasks. |

Create only the directories required for a particular dataset.

---

## 📝 Dataset Documentation Standards

Each dataset should have a README or dataset card containing relevant information:

- Dataset name and overview
- Source and original creator/provider
- Download or source URL
- License and usage restrictions
- File format and size
- Number of records and features, where applicable
- Feature descriptions
- Preprocessing or modification history
- Potential applications and limitations

Do not claim an unknown source, author, or license. Mark unverified information clearly.

---

## ⚙️ Data Management Guidelines

1. Preserve original datasets in `Raw/` without modifying them.
2. Store cleaned and transformed versions separately.
3. Avoid unnecessary duplicate copies of the same dataset.
4. Keep large datasets outside Git when repository size or licensing makes that appropriate.
5. Use scripts or notebooks to document reproducible preprocessing steps.
6. Respect privacy, copyright, licensing, and usage restrictions.
7. Never upload confidential, personal, or sensitive data.

---

## 🚀 Learning Applications

This dataset library supports practical work in:

- Data analysis and exploratory data analysis (EDA)
- Data cleaning and preprocessing
- Data visualization
- Statistical analysis
- Machine learning and deep learning
- Natural language processing
- Computer vision
- Time-series forecasting
- Model training, testing, and evaluation

---

## 📌 Repository Navigation

- [Main Repository](../README.md)
- [Resources](../15-Resources/README.md)
- [Projects](../08-Projects/README.md)

---

*Part of the AI-ML-Journey repository — learning, experimenting, building, and documenting AI/ML skills.*