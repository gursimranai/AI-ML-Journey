# Datasets Library

A centralized collection of datasets for learning, experimentation, data analysis, machine learning, deep learning, and AI project development.

This directory contains datasets collected from platforms such as Kaggle, GitHub, open-source repositories, educational tutorials, and other publicly available sources.

The collection is organized by data type, machine learning task, and supporting workflows to make datasets easier to discover, understand, and reuse.

## Objectives

- Build a structured collection of datasets for practical AI/ML learning.
- Practice data loading, exploration, cleaning, and preprocessing.
- Experiment with machine learning and deep learning algorithms.
- Support model development, testing, and evaluation.
- Maintain dataset provenance, licensing, and attribution.
- Provide reusable data resources for academic and personal projects.

## Directory Structure

| Directory | Description |
|---|---|
| `01-Tabular-Data/` | Structured data in CSV, Excel, and similar formats |
| `02-Text-Data/` | General text datasets and textual records |
| `03-Image-Data/` | Image datasets for analysis and experimentation |
| `04-Time-Series-Data/` | Sequential and time-dependent datasets |
| `05-Audio-And-Speech-Data/` | Audio, speech, and sound datasets |
| `06-Video-Data/` | Video datasets and frame-based data |
| `07-NLP-And-LLM-Datasets/` | Natural language processing and language model datasets |
| `08-Computer-Vision-Datasets/` | Datasets for computer vision tasks |
| `09-Classification-Datasets/` | Datasets intended for classification experiments |
| `10-Regression-Datasets/` | Datasets intended for regression experiments |
| `11-Clustering-Datasets/` | Datasets for clustering and unsupervised learning |
| `12-Synthetic-Data/` | Artificially generated datasets |
| `13-Data-Collection-Scripts/` | Scripts for collecting and downloading data |
| `14-Data-Preprocessing/` | Reusable data cleaning and preprocessing workflows |
| `15-Dataset-Cards-And-Metadata/` | Dataset documentation, sources, licenses, and metadata |

## Dataset Sources

Datasets may be obtained from:

- [Kaggle Datasets](https://www.kaggle.com/datasets)
- [UCI Machine Learning Repository](https://archive.ics.uci.edu/)
- [Hugging Face Datasets](https://huggingface.co/datasets)
- [Google Dataset Search](https://datasetsearch.research.google.com/)
- [GitHub](https://github.com/)
- Official research and open-data repositories
- Educational courses and programming tutorials

Original creators and providers should always receive appropriate attribution.

## Dataset Organization

Where applicable, datasets follow a consistent lifecycle:

| Directory | Purpose |
|---|---|
| `Raw/` | Original, unchanged dataset |
| `Sample/` | Smaller subset for experimentation |
| `Cleaned/` | Dataset after cleaning and data quality checks |
| `Processed/` | Transformed data prepared for a specific workflow |

Not every dataset requires all four directories. Create only those that are relevant.

## Dataset Documentation Standards

Each dataset should include its source and relevant metadata:

- Dataset name and description
- Original download URL and provider
- Author or organization
- License and usage restrictions
- File format and available features
- Intended use and machine learning tasks
- Modifications and preprocessing history

## Data Management Guidelines

1. Preserve original datasets without modification.
2. Keep cleaned and processed versions separate from raw data.
3. Avoid storing duplicate copies of the same dataset.
4. Document the source of every externally obtained dataset.
5. Check licensing and redistribution permissions before publishing data.
6. Do not commit confidential, sensitive, or restricted data.
7. Use Git LFS or DVC when large dataset files require versioning.

## Usage

Datasets in this repository are intended for:

- Python and data analysis practice
- Exploratory Data Analysis (EDA)
- Data cleaning and feature engineering
- Statistical analysis
- Machine learning model development
- Deep learning experiments
- Model testing and evaluation
- Academic and personal AI/ML projects

---

Part of the [AI-ML-Journey](../README.md) repository.