# SQL Cheat Sheets

This directory contains concise reference materials for SQL syntax, database querying, data manipulation, and analytical operations.

These cheat sheets are intended for quick revision while learning databases, solving practice problems, preparing for interviews, and performing data analysis.

## Topics Covered

### 1. SQL Fundamentals
- Databases, tables, rows, and columns
- SQL statement structure
- Data types
- Primary keys and foreign keys
- Constraints: `NOT NULL`, `UNIQUE`, `CHECK`, and `DEFAULT`
- `CREATE`, `ALTER`, `DROP`, and `TRUNCATE`

### 2. Data Retrieval
- `SELECT` and `DISTINCT`
- `WHERE` and filtering conditions
- `ORDER BY`
- `LIMIT` and database-specific alternatives
- `BETWEEN`, `IN`, and `LIKE`
- `IS NULL` and `IS NOT NULL`
- Logical operators: `AND`, `OR`, and `NOT`

### 3. Aggregate Functions
- `COUNT()`
- `SUM()`
- `AVG()`
- `MIN()` and `MAX()`
- `GROUP BY`
- `HAVING`
- Conditional aggregation

### 4. Joins
- `INNER JOIN`
- `LEFT JOIN`
- `RIGHT JOIN`
- `FULL OUTER JOIN`
- `CROSS JOIN`
- Self joins
- Join conditions and duplicate rows

### 5. Subqueries and Common Table Expressions
- Scalar and multi-row subqueries
- Correlated subqueries
- `EXISTS` and `NOT EXISTS`
- Common Table Expressions (CTEs)
- Recursive CTE fundamentals

### 6. Data Manipulation
- `INSERT`
- `UPDATE`
- `DELETE`
- `CASE` expressions
- `COALESCE()` and `NULLIF()`
- String and date functions
- Type conversion
- Transactions and rollback

### 7. Window Functions
- `OVER()` and `PARTITION BY`
- Window ordering
- `ROW_NUMBER()`
- `RANK()` and `DENSE_RANK()`
- `LAG()` and `LEAD()`
- Running totals
- Moving averages
- Ranking within groups

### 8. Database Design
- Normalization fundamentals
- Relationships between tables
- Entity-relationship concepts
- Indexes and their trade-offs
- Views
- Referential integrity

### 9. SQL for Data Analysis
- Finding duplicates
- Handling missing values
- Top-N queries
- Group-wise maximum and minimum
- Percentage and proportion calculations
- Date-based aggregation
- Cohort and retention analysis fundamentals
- Conditional summaries

### 10. Performance and Best Practices
- Reading query execution plans
- Index-aware filtering and joins
- Avoiding unnecessary columns
- Understanding query complexity
- Choosing suitable join conditions
- Database-specific syntax differences

## Recommended File Organization

```text id="7i7pmo"
SQL/
├── README.md
├── SQL-Basics-Cheat-Sheet.md
├── SQL-Filtering-And-Sorting.md
├── SQL-Joins-Cheat-Sheet.md
├── SQL-Aggregations.md
├── SQL-Subqueries-And-CTEs.md
└── SQL-Window-Functions.md
```

*The filenames above are suggestions. Preserve your existing files and filenames.*

## Cheat Sheet Guidelines

Each reference should include:

- **Purpose:** What the SQL feature does.
- **Syntax:** A valid query template.
- **Example:** A query using a small sample table.
- **Expected result:** A brief explanation or sample output.
- **Use case:** When the feature is useful.
- **Common mistakes:** Null handling, duplicate rows, grouping errors, and other pitfalls.

Clearly identify database-specific syntax where PostgreSQL, MySQL, SQLite, SQL Server, or other systems differ.

## Usage

Use these references while practicing SQL, analyzing datasets, preparing for technical interviews, and working with relational databases.

For detailed syntax and behavior, consult the documentation for your database system, such as the [PostgreSQL documentation](https://www.postgresql.org/docs/).

This directory supports database and analytical skills used throughout the `AI-ML-Journey` repository.