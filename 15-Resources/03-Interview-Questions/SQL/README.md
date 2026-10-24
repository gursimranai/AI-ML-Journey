# SQL Interview Questions

This directory contains SQL interview preparation materials covering database fundamentals, querying, joins, aggregation, subqueries, window functions, query optimization, and practical data-analysis problems.

The content progresses from basic SQL syntax to advanced queries and real-world database scenarios relevant to Data Analyst, Data Scientist, Data Engineer, and ML Engineer roles.

## Contents

### 1. Database Fundamentals
- What is SQL?
- Relational databases and tables
- Rows, columns, schemas, and data types
- Primary keys and foreign keys
- Constraints: `NOT NULL`, `UNIQUE`, `CHECK`, and `DEFAULT`
- Candidate, composite, and surrogate keys
- Relational database management systems
- SQL command categories: DDL, DML, DQL, DCL, and TCL
- SQL versus NoSQL databases

### 2. Basic SQL Queries
- `SELECT` and `FROM`
- `WHERE` conditions
- `DISTINCT`
- `ORDER BY`
- `LIMIT` and database-specific alternatives
- Column aliases using `AS`
- Arithmetic and comparison operators
- Logical operators: `AND`, `OR`, and `NOT`
- `IN`, `BETWEEN`, and `LIKE`
- Handling `NULL` values

### 3. Filtering and Conditional Logic
- `IS NULL` and `IS NOT NULL`
- Wildcards with `LIKE`
- `CASE` expressions
- Conditional filtering
- Operator precedence
- Three-valued logic with `NULL`
- `COALESCE` and `NULLIF`
- Common filtering mistakes

### 4. Aggregate Functions and Grouping
- `COUNT()`, `SUM()`, `AVG()`, `MIN()`, and `MAX()`
- `GROUP BY`
- `HAVING` versus `WHERE`
- Grouping by multiple columns
- Counting distinct values
- Conditional aggregation
- Aggregation with `CASE`
- Aggregate functions and `NULL` values

### 5. Joins
- `INNER JOIN`
- `LEFT JOIN`
- `RIGHT JOIN`
- `FULL OUTER JOIN`
- `CROSS JOIN`
- Self joins
- Joining multiple tables
- Join conditions versus filtering conditions
- One-to-one, one-to-many, and many-to-many relationships
- Identifying and preventing unintended duplicate rows

### 6. Subqueries and Common Table Expressions
- Scalar and multi-row subqueries
- Correlated subqueries
- `IN` versus `EXISTS`
- `NOT IN` and `NULL` pitfalls
- Common Table Expressions (CTEs)
- Multiple CTEs
- Recursive CTE fundamentals
- Subqueries versus joins versus CTEs

### 7. Set Operations
- `UNION` versus `UNION ALL`
- `INTERSECT`
- `EXCEPT` and database-specific equivalents
- Requirements for combining query results
- Duplicate handling in set operations

### 8. Window Functions
- Window functions versus aggregate functions
- `OVER()`, `PARTITION BY`, and `ORDER BY`
- `ROW_NUMBER()`
- `RANK()` versus `DENSE_RANK()`
- `LAG()` and `LEAD()`
- Running totals and cumulative sums
- Moving averages
- Ranking within groups
- Top-N records per group
- Window frames and their behavior

### 9. String, Date, and Numeric Functions
- String concatenation and case conversion
- `LENGTH()` and substring operations
- Trimming and replacing text
- Date extraction and date arithmetic
- Date differences and date truncation
- Rounding and numeric operations
- Type conversion and casting
- Handling time zones
- Database-specific function differences

### 10. Data Modification and Table Operations
- `INSERT`
- `UPDATE`
- `DELETE`
- `CREATE`, `ALTER`, and `DROP`
- `TRUNCATE`
- Transactions and rollback
- Safe updates and deletion conditions
- Constraints and referential integrity
- `DELETE` versus `TRUNCATE` versus `DROP`

### 11. Database Design and Normalization
- Entity-Relationship (ER) models
- One-to-one, one-to-many, and many-to-many relationships
- First, Second, and Third Normal Forms
- Boyce-Codd Normal Form (BCNF)
- Functional dependencies
- Normalization versus denormalization
- Indexes and keys
- Data integrity and schema design

### 12. Transactions and Concurrency
- ACID properties
- `COMMIT` and `ROLLBACK`
- Transaction isolation levels
- Dirty reads, non-repeatable reads, and phantom reads
- Locking and deadlocks
- Concurrency control
- Database consistency
- Practical transaction scenarios

### 13. Indexing and Query Optimization
- What is an index?
- Clustered versus nonclustered indexes, where supported
- Single-column and composite indexes
- Index selectivity and column order
- Trade-offs of indexing
- Query execution plans
- `EXPLAIN` and database-specific equivalents
- Avoiding unnecessary full-table scans
- Sargable predicates and index-friendly filters
- Query optimization trade-offs

### 14. Advanced SQL Patterns
- Window-function-based analysis
- Recursive queries
- Pivoting and conditional aggregation
- Deduplication
- Finding gaps in sequences
- Consecutive dates and streaks
- Cohort and retention analysis
- Median and percentile calculations
- Sessionization and event-sequence analysis
- Upserts and database-specific syntax

### 15. Data Analysis Problems
Practice SQL problems using realistic datasets:

- Find the second-highest salary.
- Find the top three salaries in each department.
- Identify duplicate records.
- Find customers who have never placed an order.
- Calculate monthly revenue.
- Find each customer's first and most recent purchase.
- Calculate month-over-month growth.
- Identify employees earning more than their managers.
- Calculate running totals and moving averages.
- Find users active on consecutive days.
- Calculate customer retention and repeat-purchase rates.
- Rank products by sales within each category.

### 16. Scenario-Based Questions
- A query runs slowly on a large table. How would you investigate it?
- A join produces more rows than expected. What could be wrong?
- How would you safely update millions of records?
- How would you find missing records between two tables?
- How would you remove duplicates while retaining the correct record?
- How would you calculate a rolling seven-day average?
- How would you design tables for customers, orders, and products?
- How would you handle a transaction that fails halfway through?
- How would you investigate inconsistent query results?
- How would you improve a query without changing its result?

## Suggested File Organization

Keep existing filenames and folders. These are examples for new files, not a requirement to restructure existing materials.

```text
SQL/
├── README.md
├── 01-SQL-Fundamentals.md
├── 02-Filtering-And-Conditional-Logic.md
├── 03-Aggregation-And-Grouping.md
├── 04-Joins.md
├── 05-Subqueries-And-CTEs.md
├── 06-Set-Operations.md
├── 07-Window-Functions.md
├── 08-Database-Design-And-Normalization.md
├── 09-Transactions-And-Concurrency.md
├── 10-Indexing-And-Optimization.md
├── 11-Advanced-SQL-Patterns.md
├── 12-Data-Analysis-Problems.md
└── 13-Scenario-Based-Questions.md
```

## How to Prepare

For each question:

1. Explain the SQL concept and its purpose.
2. Write a complete query using a clearly defined table schema.
3. Work through the result on a small sample dataset.
4. Consider duplicates, missing values, and edge cases.
5. Explain the query's logic and expected output.
6. Discuss performance and indexing where relevant.

Practice writing queries before checking solutions. Learn the logical processing order of SQL queries, and pay special attention to `NULL` behavior, joins, grouping, and window functions.

**Note:** SQL syntax varies across PostgreSQL, MySQL, SQL Server, SQLite, and other database systems. Identify the target dialect when a question depends on database-specific features.

## Useful Documentation

- [PostgreSQL Documentation](https://www.postgresql.org/docs/)
- [MySQL Documentation](https://dev.mysql.com/doc/)
- [SQL Server Documentation](https://learn.microsoft.com/en-us/sql/)
- [SQLite Documentation](https://www.sqlite.org/docs.html/)
- [SQLBolt — Interactive SQL Lessons](https://sqlbolt.com/)

Use official documentation to verify syntax and understand differences between database systems.