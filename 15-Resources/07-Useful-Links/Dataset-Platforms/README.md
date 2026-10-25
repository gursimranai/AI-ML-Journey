# Dataset Platforms

This directory contains useful platforms for discovering, downloading, exploring, and managing datasets for data analysis, machine learning, deep learning, and AI research.

Choosing an appropriate dataset is an important part of building reliable projects. Consider data quality, documentation, licensing, privacy, and suitability for the problem before using a dataset.

## 1. General Dataset Platforms

| Platform | Description | Link |
|---|---|---|
| Kaggle Datasets | Community datasets for analytics, ML, and competitions | [Visit](https://www.kaggle.com/datasets) |
| Hugging Face Datasets | Datasets for NLP, LLMs, computer vision, audio, and other ML tasks | [Visit](https://huggingface.co/datasets) |
| UCI Machine Learning Repository | Established datasets for ML experiments and education | [Visit](https://archive.ics.uci.edu/) |
| Google Dataset Search | Search engine for datasets published across the web | [Visit](https://datasetsearch.research.google.com/) |
| Data.gov | Open datasets from United States government agencies | [Visit](https://data.gov/) |
| World Bank Open Data | International development and economic datasets | [Visit](https://data.worldbank.org/) |
| OpenML | Datasets and resources for reproducible machine learning experiments | [Visit](https://www.openml.org/) |

## 2. Specialized Dataset Platforms

### Natural Language Processing and LLMs

- [Hugging Face Datasets](https://huggingface.co/datasets) — text corpora, instruction datasets, benchmarks, and conversational data.
- [Cornell Movie-Dialogs Corpus](https://www.cs.cornell.edu/~cristian/Cornell_Movie-Dialogs_Corpus.html) — movie dialogue data for conversational research.
- [GLUE Benchmark](https://gluebenchmark.com/) — language understanding benchmark tasks.

### Computer Vision

- [COCO Dataset](https://cocodataset.org/) — images with object detection, segmentation, and captioning annotations.
- [Visual Genome](https://visualgenome.org/) — images with objects, relationships, and region descriptions.
- [ImageNet](https://www.image-net.org/) — large-scale image dataset used in computer vision research.

### Audio and Speech

- [Mozilla Common Voice](https://commonvoice.mozilla.org/) — multilingual speech data contributed by volunteers.
- [LibriSpeech](https://www.openslr.org/12) — corpus of read English speech used in speech recognition research.
- [Hugging Face Audio Datasets](https://huggingface.co/datasets?modality=audio) — datasets for speech and audio tasks.

### Time Series and Forecasting

- [UCI Machine Learning Repository](https://archive.ics.uci.edu/) — datasets covering many domains, including time-dependent observations.
- [Monash Time Series Forecasting Repository](https://forecastingdata.org/) — time-series datasets and forecasting benchmarks.
- [FRED](https://fred.stlouisfed.org/) — economic and financial time-series data.

### Geospatial and Environmental Data

- [NASA Earthdata](https://www.earthdata.nasa.gov/) — Earth science observations and datasets.
- [USGS Data](https://www.usgs.gov/products/data-and-tools/data) — geological, environmental, and geographic data.
- [OpenStreetMap](https://www.openstreetmap.org/) — open geographic data subject to its licensing terms.

## 3. Indian Open Data Sources

- [Open Government Data Platform India](https://www.data.gov.in/) — datasets from Indian government departments and agencies.
- [India Meteorological Department](https://mausam.imd.gov.in/) — weather observations, forecasts, and related information.
- [ISRO](https://www.isro.gov.in/) — space, satellite, and Earth-observation resources.
- [Reserve Bank of India](https://www.rbi.org.in/) — banking, monetary, and economic statistics.
- [Ministry of Statistics and Programme Implementation](https://www.mospi.gov.in/) — official statistical publications and datasets.

Check each source's terms and access requirements before downloading or redistributing data.

## 4. Dataset Selection Checklist

Before using a dataset in a project, evaluate the following:

- **Problem fit:** Does the dataset support the task you want to solve?
- **Data quality:** Are there missing values, duplicates, inconsistent labels, or suspicious records?
- **Size:** Is the dataset manageable with your available RAM, storage, and compute?
- **Documentation:** Are the columns, labels, collection methods, and limitations explained?
- **Representativeness:** Does the dataset reflect the population or conditions relevant to your use case?
- **Data leakage:** Could any feature reveal information unavailable at prediction time?
- **Licensing:** Does the license permit your intended use, including commercial use if relevant?
- **Privacy:** Does the dataset contain personal or sensitive information?
- **Reproducibility:** Can you record the source, version, and download date?

## 5. Recommended Workflow

1. Define the problem and required data format.
2. Search trusted platforms for relevant datasets.
3. Read the dataset description and license.
4. Inspect a sample before downloading the entire dataset.
5. Record the original source and version.
6. Validate data types, missing values, duplicates, and labels.
7. Create appropriate training, validation, and test splits.
8. Document preprocessing and known limitations.
9. Keep large datasets outside Git unless they are small and intentionally included.
10. Use a dataset card or project README to explain the data and its limitations.

## 6. Working with Datasets in Python

Useful libraries include:

- [Pandas](https://pandas.pydata.org/docs/) — tabular data loading and analysis.
- [NumPy](https://numpy.org/doc/) — numerical arrays and operations.
- [Datasets](https://huggingface.co/docs/datasets) — loading and processing supported datasets.
- [Scikit-learn](https://scikit-learn.org/stable/) — dataset utilities, preprocessing, and model evaluation.

Example: load a CSV file using Pandas.

```python
import pandas as pd

df = pd.read_csv("data.csv")

print(df.head())
print(df.shape)
print(df.info())
print(df.isna().sum())
```

Inspect the data before deciding how to handle missing values, outliers, or duplicates. Do not apply the same cleaning rules blindly to every dataset.

## 7. Organizing Dataset References in This Repository

For each dataset used in a project, document:

- Dataset name and original URL
- Provider or publisher
- Version or access date
- License and permitted uses
- Dataset size and format
- Relevant columns or labels
- Known limitations and potential bias
- Preprocessing steps
- Project or notebook that uses the dataset

Store dataset documentation and lightweight metadata in the repository. Keep large or restricted data files out of version control unless there is a clear, permitted reason to include them.

## Related Sections

- [Useful Links](../README.md)
- [AI-ML-Journey Repository](../../../../README.md)
- [Data Science Resources](../../../../04-Data-Science/README.md)
- [Machine Learning Resources](../../../../05-Machine-Learning/README.md)
- [Research Papers](../../05-Research-Papers/README.md)
