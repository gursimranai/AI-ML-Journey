# Tabular Datasets

This directory contains structured datasets organized in rows and columns, primarily stored in CSV, Excel, and other tabular formats.

These datasets support practical learning and experimentation in Python, data analysis, exploratory data analysis (EDA), data cleaning, feature engineering, and machine learning.

## Objectives

- Practice loading and inspecting structured datasets.
- Understand numerical and categorical features.
- Perform data quality checks and exploratory analysis.
- Apply data cleaning and preprocessing techniques.
- Experiment with classification, regression, and clustering algorithms.
- Prepare datasets for machine learning projects.

## Dataset Categories

| Category | Description |
|---|---|
| `01-General/` | General-purpose datasets for data analysis and experimentation |
| `02-Classification/` | Datasets commonly used for classification tasks |
| `03-Regression/` | Datasets suitable for regression experiments |
| `04-Clustering/` | Datasets for clustering and unsupervised learning |

## Dataset Directory Structure

Each dataset should have its own directory when practical.

```text
Dataset-Name/
├── README.md
├── Raw/
├── Sample/
├── Cleaned/
└── Processed/
```

### Directory Purpose

- **Raw:** Original downloaded dataset, preserved without modifications.
- **Sample:** Smaller dataset subset for testing and demonstrations.
- **Cleaned:** Dataset after handling missing values, duplicates, and inconsistencies.
- **Processed:** Transformed dataset prepared for a particular analysis or model.

Not every dataset requires all four directories.

## Dataset Sources

Datasets may come from:

- [Kaggle](https://www.kaggle.com/datasets)
- [UCI Machine Learning Repository](https://archive.ics.uci.edu/)
- [Hugging Face](https://huggingface.co/datasets)
- [GitHub](https://github.com/)
- Educational tutorials and open-source providers

Always record the original source, creator, license, and download URL.

## Common Use Cases

- Data loading and inspection using Pandas
- Exploratory Data Analysis
- Missing-value and duplicate handling
- Data transformation and normalization
- Feature selection and feature engineering
- Classification and regression experiments
- Clustering and unsupervised learning
- Machine learning model evaluation

## Data Management Guidelines

1. Preserve original downloaded files in `Raw/`.
2. Never overwrite original datasets during preprocessing.
3. Keep different versions separate and clearly named.
4. Document modifications and preprocessing operations.
5. Avoid unnecessary duplication of datasets.
6. Verify licensing before redistributing external datasets.
7. Exclude confidential or restricted information.

---

Part of the [AI-ML-Journey](../../README.md) repository.