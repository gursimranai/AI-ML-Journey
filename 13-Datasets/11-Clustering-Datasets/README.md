# 🔵 Clustering Datasets

A collection of datasets for clustering and unsupervised machine learning experiments.

Clustering is an unsupervised learning task in which algorithms group similar data points based on their features, without requiring predefined target labels.

This directory contains datasets for discovering patterns, identifying natural groups, and exploring data segmentation techniques.

---

## 🎯 Objectives

- Understand the structure of datasets used in clustering.
- Explore similarities and differences between data points.
- Practice feature scaling and preprocessing for clustering.
- Experiment with different clustering algorithms.
- Learn how to evaluate clustering quality.
- Discover hidden patterns and structures in datasets.

---

## 📁 Dataset Categories

Organize datasets into the following categories when needed:

| Category | Description |
|---|---|
| `01-Centroid-Based-Clustering/` | Datasets for K-Means and related centroid-based algorithms. |
| `02-Hierarchical-Clustering/` | Datasets for hierarchical and agglomerative clustering. |
| `03-Density-Based-Clustering/` | Datasets for DBSCAN, HDBSCAN, and density-based methods. |
| `04-Distribution-Based-Clustering/` | Datasets for Gaussian Mixture Models and probabilistic clustering. |
| `05-Customer-Segmentation/` | Customer and user data for segmentation experiments. |
| `06-Image-And-Document-Clustering/` | Image, document, and embedding datasets for grouping experiments. |
| `07-Other-Clustering/` | Other datasets suitable for clustering experiments. |

---

## 🔬 Common Applications

- Customer segmentation
- Market segmentation
- User behavior analysis
- Document clustering
- Image grouping
- Anomaly exploration
- Pattern discovery
- Recommendation system exploration

---

## ⚙️ Common Data Preparation Techniques

- Handling missing values
- Removing duplicate records
- Encoding categorical features when appropriate
- Feature scaling and normalization
- Feature selection
- Dimensionality reduction
- Outlier investigation
- Distance and similarity calculations
- Exploring different numbers of clusters

---

## 📊 Common Clustering Algorithms

| Algorithm | Description |
|---|---|
| K-Means | Groups data into a specified number of clusters using centroids. |
| Hierarchical Clustering | Builds a hierarchy of clusters through successive merging or splitting. |
| DBSCAN | Groups points based on density and identifies noise points. |
| HDBSCAN | Performs density-based clustering across varying density levels. |
| Gaussian Mixture Models | Models data as a mixture of probability distributions. |
| Mean Shift | Finds clusters by locating dense regions in the feature space. |

---

## 📈 Common Evaluation Techniques

- **Silhouette Score** — measures how well samples fit within their assigned clusters compared with other clusters.
- **Davies-Bouldin Index** — evaluates cluster separation and compactness.
- **Calinski-Harabasz Index** — compares between-cluster dispersion with within-cluster dispersion.
- **Adjusted Rand Index (ARI)** — compares predicted clusters with known reference labels, when available.
- **Visual Inspection** — explores cluster structure through suitable visualizations.

Evaluation methods should be selected according to the algorithm and availability of reference labels.

---

## 🛠️ Common Python Libraries

- **Pandas** — dataset loading and manipulation
- **NumPy** — numerical operations
- **Matplotlib / Seaborn** — data visualization
- **Scikit-learn** — clustering algorithms and evaluation metrics
- **SciPy** — hierarchical clustering and distance calculations
- **HDBSCAN** — density-based clustering
- **UMAP** — dimensionality reduction and visualization

---

## 📝 Dataset Documentation

Each dataset should include a README or dataset card documenting:

- Dataset overview and intended clustering task
- Original source and creator
- Source URL
- License and usage restrictions
- Number of records and features, where known
- Feature descriptions
- Availability of reference labels, if any
- Missing values and data-quality details
- Preprocessing history
- Potential applications and limitations

---

## 📌 Data Management Guidelines

1. Preserve original datasets separately from processed versions.
2. Do not assume that datasets without labels have no meaningful structure.
3. Document feature scaling and distance metrics used.
4. Avoid using reference labels to train unsupervised clustering algorithms unless the experiment explicitly requires it.
5. Record algorithm parameters and evaluation results.
6. Document dimensionality reduction and preprocessing steps.
7. Verify dataset licensing and attribution requirements before redistribution.

---

*Part of the AI-ML-Journey dataset library.*