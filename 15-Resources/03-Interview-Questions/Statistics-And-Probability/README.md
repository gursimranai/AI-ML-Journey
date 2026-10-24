# Statistics and Probability Interview Questions

This directory contains interview preparation materials covering probability, descriptive and inferential statistics, statistical distributions, hypothesis testing, and the mathematical foundations used in Data Science, Machine Learning, and AI.

The questions progress from fundamental concepts to statistical reasoning, practical data analysis, and real-world interview scenarios.

## Contents

### 1. Statistics Fundamentals
- What is statistics?
- Population versus sample
- Parameter versus statistic
- Descriptive versus inferential statistics
- Types of data: categorical and numerical
- Discrete versus continuous variables
- Levels of measurement: nominal, ordinal, interval, and ratio
- Sampling methods and sampling bias
- Observational studies versus experiments

### 2. Measures of Central Tendency
- Arithmetic mean
- Median and mode
- Weighted mean
- Geometric and harmonic means
- Choosing the appropriate measure
- Effects of outliers on the mean and median
- Mean versus median for skewed distributions

### 3. Measures of Dispersion
- Range
- Variance and standard deviation
- Population versus sample variance
- Interquartile range (IQR)
- Quartiles and percentiles
- Coefficient of variation
- Outlier detection using IQR and standard scores
- Standard deviation versus standard error

### 4. Probability Fundamentals
- Sample spaces and events
- Probability axioms
- Complementary events
- Addition and multiplication rules
- Mutually exclusive versus independent events
- Conditional probability
- Law of total probability
- Bayes' theorem
- Tree diagrams and probability tables

### 5. Random Variables and Distributions
- Random variables and probability distributions
- Probability mass functions (PMFs)
- Probability density functions (PDFs)
- Cumulative distribution functions (CDFs)
- Expected value and variance of random variables
- Bernoulli and binomial distributions
- Geometric and Poisson distributions
- Uniform and normal distributions
- Exponential distribution
- Student's t-distribution
- Chi-square and F-distributions
- When to use each distribution

### 6. Joint Probability and Dependence
- Joint, marginal, and conditional distributions
- Independent random variables
- Covariance and correlation
- Pearson versus Spearman correlation
- Correlation versus causation
- Conditional independence
- Law of large numbers
- Central Limit Theorem (CLT)

### 7. Sampling and Sampling Distributions
- Simple random, stratified, and cluster sampling
- Sampling with and without replacement
- Sampling distributions
- Standard error
- Sample size and estimation precision
- Sampling bias and nonresponse bias
- Central Limit Theorem applications
- Bootstrap sampling and confidence intervals

### 8. Estimation and Confidence Intervals
- Point estimates versus interval estimates
- Estimators and their properties
- Bias and consistency
- Confidence interval interpretation
- Confidence intervals for means and proportions
- Margin of error
- Sample size calculations
- Confidence level versus interval width
- Practical significance versus statistical uncertainty

### 9. Hypothesis Testing
- Null and alternative hypotheses
- One-tailed versus two-tailed tests
- Significance level and p-value
- Type I and Type II errors
- Statistical power
- Z-tests and t-tests
- Paired versus independent-sample tests
- Chi-square tests
- Analysis of variance (ANOVA)
- Assumptions and limitations of hypothesis tests
- Multiple hypothesis testing and correction methods

### 10. Regression and Statistical Relationships
- Simple and multiple linear regression
- Regression assumptions
- Ordinary least squares
- Residuals and residual analysis
- R-squared and adjusted R-squared
- Correlation versus regression
- Multicollinearity
- Confounding variables
- Heteroscedasticity
- Logistic regression and odds
- Interpreting coefficients and statistical significance

### 11. Experimental Design and A/B Testing
- Randomized controlled experiments
- Control and treatment groups
- Random assignment
- Primary and secondary metrics
- A/B test hypothesis formulation
- Sample size and statistical power
- Statistical significance versus practical significance
- Experiment duration and stopping rules
- Novelty effects and selection bias
- Multiple comparisons
- Simpson's paradox
- Common mistakes in online experiments

### 12. Statistics for Machine Learning
- Bias-variance trade-off
- Overfitting and underfitting
- Probability and likelihood
- Maximum likelihood estimation (MLE)
- Maximum a posteriori estimation (MAP)
- Bayesian versus frequentist approaches
- Prior, likelihood, and posterior distributions
- Entropy and information gain
- Cross-entropy and KL divergence
- Statistical assumptions behind common ML models
- Data leakage and representative sampling
- Imbalanced datasets and evaluation metrics

### 13. Practical Calculation Questions
Practice solving numerical problems involving:

- Mean, median, variance, and standard deviation
- Conditional probability and Bayes' theorem
- Expected value of a random variable
- Binomial and Poisson probabilities
- Normal-distribution probabilities and z-scores
- Standard errors and confidence intervals
- p-value interpretation
- Type I and Type II error scenarios
- Correlation and covariance calculations
- A/B test conversion-rate comparisons

### 14. Scenario-Based Questions
- A dataset contains extreme outliers. Which measure of central tendency would you use and why?
- A medical test is highly accurate, but the condition is rare. How would you interpret a positive result?
- A result has a very small p-value but a tiny effect size. Is it practically important?
- Two variables are strongly correlated. Can you conclude that one causes the other?
- An A/B test shows no statistically significant difference. Does that prove both variants are equivalent?
- A model performs well on a random sample but poorly on new data. What statistical issues might explain this?
- Your dataset has substantial class imbalance. How could it affect evaluation?
- Repeated experiments produce conflicting results. How would you investigate?
- A confidence interval becomes narrower with a larger sample. Why?
- An experiment appears successful halfway through data collection. Should you stop immediately?

## Suggested File Organization

Preserve your existing files and filenames. The following are examples if you decide to add separate question sets.

```text
Statistics-And-Probability/
├── README.md
├── 01-Statistics-Fundamentals.md
├── 02-Central-Tendency-And-Dispersion.md
├── 03-Probability-Fundamentals.md
├── 04-Random-Variables-And-Distributions.md
├── 05-Sampling-And-Estimation.md
├── 06-Hypothesis-Testing.md
├── 07-Regression-And-Correlation.md
├── 08-Experimental-Design-And-AB-Testing.md
├── 09-Statistics-For-Machine-Learning.md
├── 10-Numerical-Problems.md
└── 11-Scenario-Based-Questions.md
```

## How to Prepare

For each question:

1. Understand the concept and its assumptions.
2. Learn the relevant formula and what each symbol represents.
3. Solve a numerical example by hand.
4. Explain the result in plain language.
5. Identify limitations, edge cases, and common misconceptions.
6. Connect the concept to a real data-analysis or machine-learning problem.

Focus on interpretation, not just formula memorization. Be especially careful with p-values, confidence intervals, correlation, causation, and statistical significance.

## Useful Documentation and Learning Resources

- [OpenStax — Introductory Statistics](https://openstax.org/details/books/introductory-statistics)
- [Khan Academy — Statistics and Probability](https://www.khanacademy.org/math/statistics-probability)
- [SciPy Statistics Documentation](https://docs.scipy.org/doc/scipy/reference/stats.html)
- [NIST/SEMATECH Engineering Statistics Handbook](https://www.itl.nist.gov/div898/handbook/)

Use these resources to verify definitions, assumptions, formulas, and worked examples.