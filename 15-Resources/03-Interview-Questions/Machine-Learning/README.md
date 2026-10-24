# Machine Learning Interview Questions

This directory contains interview preparation questions covering Machine Learning fundamentals, algorithms, mathematics, data preprocessing, model evaluation, and practical problem-solving.

The focus is on understanding **why an algorithm works, when to use it, how to evaluate it, and how to diagnose its limitations**.

## Topics Covered

### 1. Machine Learning Fundamentals
- What is Machine Learning, and how does it differ from traditional programming?
- Compare supervised, unsupervised, semi-supervised, and reinforcement learning.
- What is the difference between classification and regression?
- Explain training, validation, and test datasets.
- What are parameters and hyperparameters?
- Explain overfitting, underfitting, and the bias–variance trade-off.
- What is the difference between generalization and memorization?

### 2. Mathematics for Machine Learning
- Why are linear algebra and matrix operations important in ML?
- Explain probability, conditional probability, and Bayes' theorem.
- What are expected value, variance, and standard deviation?
- Explain gradients, partial derivatives, and the chain rule.
- What is gradient descent, and how does it work?
- What are loss functions and objective functions?
- How does regularization affect model training?

### 3. Data Preprocessing and Feature Engineering
- How do you handle missing values?
- Compare normalization and standardization.
- How do you encode categorical variables?
- How do you identify and treat outliers?
- What is feature engineering?
- What is feature selection, and why is it useful?
- How can data leakage occur during preprocessing?
- Why should preprocessing be fitted only on the training data?

### 4. Regression Algorithms
- Explain linear regression and its assumptions.
- What is the difference between simple and multiple linear regression?
- What is multicollinearity?
- Compare Ridge, Lasso, and Elastic Net regression.
- What is polynomial regression?
- How do MAE, MSE, RMSE, and \(R^2\) differ?
- How can regression models be affected by outliers?

### 5. Classification Algorithms
- How does logistic regression perform classification?
- Explain decision trees and their splitting criteria.
- What is the difference between Gini impurity and entropy?
- Explain K-Nearest Neighbors (KNN).
- How does a Support Vector Machine work?
- What is the Naive Bayes assumption?
- How do Random Forests improve on individual decision trees?
- Compare bagging and boosting.

### 6. Unsupervised Learning
- Explain K-means clustering and its limitations.
- How do you choose the number of clusters?
- Compare K-means, hierarchical clustering, and DBSCAN.
- What is Principal Component Analysis (PCA)?
- How does dimensionality reduction help?
- How can clustering quality be evaluated?
- What is anomaly detection?

### 7. Model Evaluation and Validation
- What is cross-validation?
- Why is accuracy misleading on imbalanced datasets?
- Explain precision, recall, and F1-score.
- What does a confusion matrix show?
- Explain ROC-AUC and precision-recall curves.
- How do you select a classification threshold?
- How do you choose an appropriate evaluation metric?
- What is the difference between model selection and final testing?

### 8. Optimization and Model Improvement
- Compare batch, stochastic, and mini-batch gradient descent.
- What is the learning rate?
- Explain Grid Search and Randomized Search.
- What is early stopping?
- How do regularization and feature selection affect generalization?
- How do you diagnose high bias or high variance?
- How can class imbalance be handled?
- How do ensemble methods improve predictive performance?

### 9. Practical Implementation
- How would you build an end-to-end ML pipeline?
- How do you split a dataset for training and evaluation?
- Why use a preprocessing pipeline?
- How would you reproduce an experiment?
- How do you compare multiple models fairly?
- How do you save and load a trained model?
- What should be checked before deploying a model?

### 10. Scenario-Based Questions
- A model performs well on training data but poorly on test data. How would you investigate?
- Your dataset contains many missing values. How would you decide what to do?
- A classification dataset is highly imbalanced. Which metrics and methods would you consider?
- Model accuracy improves, but recall decreases. How would you explain this trade-off?
- A model's performance drops after deployment. What would you investigate?
- How would you detect data drift?
- A model takes too long to train. How would you identify optimization opportunities?

## Recommended Question Format

For each question, document:

- **Question:** State the interview question clearly.
- **Difficulty:** Beginner, Intermediate, or Advanced.
- **Concepts tested:** Identify the underlying ideas.
- **Answer:** Explain the reasoning and relevant assumptions.
- **Formula or example:** Include equations, calculations, or code where useful.
- **Trade-offs:** Explain advantages, limitations, and alternatives.
- **Follow-up questions:** Explore deeper concepts or practical scenarios.

## Recommended File Organization

```text id="4s2n6w"
Machine-Learning/
├── README.md
├── ML-Fundamentals.md
├── Mathematics-For-ML.md
├── Data-Preprocessing-And-Feature-Engineering.md
├── Regression-Algorithms.md
├── Classification-Algorithms.md
├── Unsupervised-Learning.md
├── Model-Evaluation-And-Validation.md
└── Scenario-Based-Questions.md
```

*The filenames above are suggestions. Preserve your existing files and filenames.*

## Preparation Guidelines

- Explain algorithms using intuition before introducing equations.
- Know each algorithm's assumptions, strengths, and limitations.
- Practice implementations with Python and scikit-learn.
- Understand why an evaluation metric fits a particular problem.
- Avoid data leakage when preprocessing, selecting features, and validating models.
- Practice explaining results and trade-offs in clear, simple language.
- Revisit incorrect answers and strengthen the underlying concepts.

For implementation details, consult the official [scikit-learn documentation](https://scikit-learn.org/stable/).

This directory supports preparation for Machine Learning Engineer, Data Scientist, and AI/ML engineering interviews within the broader `AI-ML-Journey` repository.