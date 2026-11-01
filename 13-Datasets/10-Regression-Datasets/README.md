# 📉 Regression Datasets

A collection of datasets for regression problems in machine learning and deep learning.

Regression is a supervised learning task in which a model learns to predict continuous numerical values based on input features.

This directory organizes datasets primarily used for numerical prediction, relationship analysis, and regression experiments.

---

## 🎯 Objectives

- Understand regression dataset structures.
- Explore relationships between input features and continuous target variables.
- Practice data cleaning and feature engineering.
- Learn different regression algorithms.
- Train and evaluate regression models.
- Experiment with feature selection and model optimization.

---

## 📁 Dataset Categories

Organize datasets into the following categories when needed:

| Category | Description |
|---|---|
| `01-Simple-Linear-Regression/` | Datasets suitable for studying relationships between one input feature and a continuous target. |
| `02-Multiple-Linear-Regression/` | Datasets with multiple input features for predicting numerical values. |
| `03-Polynomial-Regression/` | Datasets for exploring nonlinear relationships using polynomial features. |
| `04-Regularized-Regression/` | Datasets for experiments involving Ridge, Lasso, and Elastic Net regression. |
| `05-Tree-Based-Regression/` | Datasets for decision tree and ensemble-based regression. |
| `06-Time-Series-Regression/` | Time-dependent datasets used for numerical forecasting. |
| `07-Other-Regression/` | Other regression datasets that do not fit the above categories. |

---

## 🔬 Common Applications

- House price prediction
- Sales forecasting
- Demand prediction
- Salary prediction
- Temperature prediction
- Financial value estimation
- Energy consumption prediction
- Predictive analytics

---

## ⚙️ Common Data Preparation Techniques

- Handling missing values
- Removing duplicate records
- Encoding categorical features
- Feature scaling when appropriate
- Outlier investigation and treatment
- Feature engineering
- Correlation and relationship analysis
- Transforming skewed variables when appropriate
- Train-validation-test splitting
- Preventing data leakage

---

## 📊 Common Evaluation Metrics

| Metric | Purpose |
|---|---|
| MAE | Measures the average absolute prediction error. |
| MSE | Measures the average squared prediction error. |
| RMSE | Expresses prediction error in the target variable's original units. |
| R² Score | Measures the proportion of target variance explained by the model. |
| Adjusted R² | Adjusts R² for the number of predictors in a linear regression setting. |
| MAPE | Measures percentage prediction error when target values are nonzero and the metric is appropriate. |

Select metrics based on the target variable, business objective, and impact of prediction errors.

---

## 🛠️ Common Python Libraries

- **Pandas** — dataset loading and manipulation
- **NumPy** — numerical operations
- **Matplotlib / Seaborn** — data visualization
- **Scikit-learn** — preprocessing, regression algorithms, and evaluation
- **Statsmodels** — statistical modeling and regression analysis
- **XGBoost** — gradient boosting regression
- **LightGBM** — efficient gradient boosting
- **CatBoost** — gradient boosting with categorical feature support
- **PyTorch / TensorFlow** — deep learning regression workflows

---

## 📝 Dataset Documentation

Each dataset should include a README or dataset card documenting:

- Dataset overview and regression objective
- Original source and creator
- Source URL
- License and usage restrictions
- Number of records and features, where known
- Target variable and its units
- Feature descriptions
- Missing values and data-quality details
- Preprocessing history
- Potential applications and limitations

---

## 📌 Data Management Guidelines

1. Preserve original datasets separately from processed versions.
2. Clearly identify the continuous target variable and its units.
3. Investigate outliers before deciding how to handle them.
4. Apply preprocessing using training data only when appropriate.
5. Use suitable splitting strategies for time-dependent data.
6. Avoid data leakage during feature engineering and model evaluation.
7. Document transformations applied to the target variable.
8. Verify dataset licensing and attribution requirements before redistribution.

---

*Part of the AI-ML-Journey dataset library.*