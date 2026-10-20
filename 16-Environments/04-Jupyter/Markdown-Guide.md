# Markdown Guide for Jupyter

Markdown is a lightweight markup language used to format text. In Jupyter, Markdown cells help explain code, document concepts, and present results clearly.

## 1. Headings

Use `#` symbols to create headings.

```markdown
# Heading 1
## Heading 2
### Heading 3
#### Heading 4
```

Use headings in a logical hierarchy instead of choosing levels only for their appearance.

## 2. Text Formatting

```markdown
**Bold text**

*Italic text*

~~Strikethrough text~~

`Inline code`
```

## 3. Lists

Unordered list:

```markdown
- Python
- NumPy
- Pandas
```

Ordered list:

```markdown
1. Install Python
2. Create an environment
3. Install packages
```

Nested list:

```markdown
- Machine Learning
  - Supervised Learning
  - Unsupervised Learning
```

## 4. Links and Images

Link:

```markdown
[Python Documentation](https://docs.python.org/3/)
```

Image:

```markdown
![Description of image](../assets/example.png)
```

The image path is an example. Adjust the relative path to match your repository.

## 5. Code Blocks

Use triple backticks and specify the language for syntax highlighting.

````markdown
```python
name = "AI-ML-Journey"
print(name)
```
````

You can also show terminal commands:

````markdown
```bash
python --version
python -m pip --version
```
````

## 6. Tables

```markdown
| Concept | Description |
|---|---|
| Variable | Stores a reference to a value |
| Function | Reusable block of code |
| Module | Python file containing code |
```

## 7. Mathematical Equations

Jupyter Markdown supports LaTeX-style mathematical notation in supported configurations.

Inline equation:

```markdown
The area of a circle is $A = \pi r^2$.
```

Display equation:

```markdown
$$
a^2 + b^2 = c^2
$$
```

## 8. Blockquotes

```markdown
> Practice regularly to strengthen your understanding.
```

## 9. Horizontal Divider

```markdown
---
```

Useful for separating major sections.

## 10. Example Learning Notebook

A well-organized notebook might follow this structure:

```markdown
# Python Lists

## What Is a List?

A list is an ordered, mutable collection in Python.

## Example

We can create a list containing several values.

## Explanation

Each item can be accessed using its index.

## Practice

Create a list of five programming languages.
```

Place the corresponding Python examples in code cells between the Markdown explanations.

## 💡 Best Practices

- Use headings to create a clear notebook outline.
- Keep paragraphs short and readable.
- Use code formatting for variable names and commands.
- Use tables for concise comparisons.
- Add image descriptions that explain their purpose.
- Check links and relative image paths before publishing.

---

**Remember:** Markdown cells explain your work; code cells execute your Python code.