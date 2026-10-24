# NumPy and Pandas Cheat Sheets

This directory contains quick-reference materials for **NumPy** and **Pandas**, two essential Python libraries for numerical computing, data manipulation, exploratory data analysis, and Machine Learning workflows.

## Topics Covered

### 1. NumPy Fundamentals
- Creating arrays with `np.array()`
- Array dimensions, shape, size, and data types
- Array indexing and slicing
- Reshaping and transposing arrays
- Creating arrays with `zeros()`, `ones()`, `arange()`, and `linspace()`
- Array copying and views

### 2. NumPy Operations
- Arithmetic and comparison operations
- Broadcasting
- Universal functions (ufuncs)
- Aggregations such as `sum()`, `mean()`, `min()`, and `max()`
- Sorting and searching
- Boolean indexing and filtering
- Combining and splitting arrays
- Random number generation
- Linear algebra operations

### 3. Pandas Fundamentals
- Creating `Series` and `DataFrame` objects
- Reading and writing CSV, Excel, and JSON files
- Inspecting data with `head()`, `info()`, and `describe()`
- Selecting columns and rows
- Label-based indexing with `.loc`
- Position-based indexing with `.iloc`
- Data types and type conversion

### 4. Data Cleaning
- Detecting missing values with `isna()` and `isnull()`
- Removing missing data with `dropna()`
- Filling missing values with `fillna()`
- Identifying and removing duplicates
- Renaming columns
- Replacing values
- Converting data types
- Handling inconsistent and invalid data

### 5. Data Manipulation
- Filtering rows
- Sorting data
- Creating and modifying columns
- Applying functions with `apply()`
- Grouping and aggregation with `groupby()`
- Combining data with `merge()`, `join()`, and `concat()`
- Pivot tables and reshaping
- Working with dates and times

### 6. Exploratory Data Analysis
- Summary statistics
- Value counts and unique values
- Correlation and covariance
- Group-wise analysis
- Detecting unusual values
- Preparing data for visualization
- Efficient inspection of large datasets

### 7. Performance and Best Practices
- Vectorization instead of unnecessary Python loops
- Choosing suitable data types
- Avoiding unnecessary copies
- Understanding views versus copies
- Writing readable and maintainable transformations
- Using method chaining where it improves clarity

## Recommended File Organization

```text
NumPy-And-Pandas/
├── README.md
├── NumPy-Basics-Cheat-Sheet.md
├── NumPy-Operations-Cheat-Sheet.md
├── Pandas-Basics-Cheat-Sheet.md
├── Pandas-Data-Cleaning-Cheat-Sheet.md
└── Pandas-Data-Manipulation-Cheat-Sheet.md
```

*The filenames above are suggestions. Preserve your existing files and filenames.*

## Cheat Sheet Guidelines

Each reference should include:

- **Syntax:** The function or operation.
- **Purpose:** What it does and when to use it.
- **Example:** A short, runnable Python snippet.
- **Output:** The expected result when useful.
- **Common mistakes:** Typical errors and how to avoid them.

Prefer small examples with realistic data. Clearly distinguish NumPy array operations from Pandas Series and DataFrame operations.

## Usage

Use these references while practicing Python, cleaning datasets, performing exploratory data analysis, and preparing data for Machine Learning.

For authoritative syntax and detailed explanations, consult the official documentation:

- [NumPy Documentation](https://numpy.org/doc/)
- [Pandas Documentation](https://pandas.pydata.org/docs/)

This directory supports the numerical computing and data manipulation skills required throughout the `AI-ML-Journey` repository.