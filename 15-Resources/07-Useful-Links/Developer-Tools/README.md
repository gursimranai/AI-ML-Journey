# Developer Tools

This directory contains tools that support software development, Python programming, data analysis, machine learning, collaboration, debugging, testing, and deployment.

The goal is to maintain a practical reference of tools that improve productivity and help build reliable, reproducible AI/ML projects.

## 1. Code Editors and IDEs

| Tool | Purpose | Link |
|---|---|---|
| Visual Studio Code | Lightweight editor with Python, Jupyter, Git, and debugging support | [Website](https://code.visualstudio.com/) |
| PyCharm | Python-focused IDE for application development and debugging | [Website](https://www.jetbrains.com/pycharm/) |
| JupyterLab | Interactive notebooks, code, data, and visualizations | [Website](https://jupyter.org/) |
| Google Colab | Cloud-hosted notebooks with optional accelerator access | [Website](https://colab.research.google.com/) |
| Spyder | Scientific Python IDE | [Website](https://www.spyder-ide.org/) |

**Recommendation:** Start with VS Code and Jupyter for a flexible Python and AI/ML workflow. Use cloud notebooks when local compute is insufficient or when a project benefits from a hosted environment.

## 2. Version Control and Collaboration

| Tool | Purpose | Link |
|---|---|---|
| Git | Track changes and manage code history | [Website](https://git-scm.com/) |
| GitHub | Host repositories, collaborate, and manage issues and pull requests | [Website](https://github.com/) |
| GitLab | Git repositories and integrated development workflows | [Website](https://about.gitlab.com/) |
| GitHub Desktop | Graphical interface for common Git operations | [Website](https://desktop.github.com/) |
| pre-commit | Run configured checks before commits | [Website](https://pre-commit.com/) |

Useful practices include small meaningful commits, clear branch names, pull-request reviews, and keeping credentials out of source control.

## 3. Python Environments and Package Management

| Tool | Purpose | Link |
|---|---|---|
| `venv` | Create isolated Python environments | [Documentation](https://docs.python.org/3/library/venv.html) |
| `pip` | Install Python packages | [Documentation](https://pip.pypa.io/en/stable/) |
| Conda | Manage environments and packages | [Documentation](https://docs.conda.io/) |
| `uv` | Fast Python package and project management | [Documentation](https://docs.astral.sh/uv/) |
| PyPI | Discover published Python packages | [Website](https://pypi.org/) |

Use a separate environment for each project when dependencies may differ. Record the dependencies needed to reproduce the project.

## 4. Jupyter and Notebook Tools

| Tool | Purpose | Link |
|---|---|---|
| Jupyter Notebook | Interactive Python notebooks | [Website](https://jupyter.org/) |
| JupyterLab | Notebook workspace with terminals and file browsing | [Website](https://jupyter.org/) |
| IPython | Interactive Python shell | [Website](https://ipython.org/) |
| nbconvert | Convert notebooks to other formats | [Documentation](https://nbconvert.readthedocs.io/) |
| nbformat | Read and write notebook files programmatically | [Documentation](https://nbformat.readthedocs.io/) |

Keep notebooks focused and readable. Restart the kernel and run all cells before committing important notebooks to check that they execute in order.

## 5. Data Science and Visualization

| Tool | Purpose | Link |
|---|---|---|
| NumPy | Numerical computing and arrays | [Website](https://numpy.org/) |
| Pandas | Tabular data processing and analysis | [Website](https://pandas.pydata.org/) |
| Matplotlib | General-purpose plotting | [Website](https://matplotlib.org/) |
| Seaborn | Statistical data visualization | [Website](https://seaborn.pydata.org/) |
| Plotly | Interactive visualizations | [Website](https://plotly.com/python/) |
| Polars | DataFrame processing with an emphasis on performance | [Website](https://pola.rs/) |

Choose libraries based on the data size, operation, and required visualization. Learn the fundamentals of NumPy and Pandas before adding more specialized tools.

## 6. Machine Learning and Deep Learning

| Tool | Purpose | Link |
|---|---|---|
| Scikit-learn | Classical ML, preprocessing, and evaluation | [Website](https://scikit-learn.org/) |
| PyTorch | Deep learning and tensor computation | [Website](https://pytorch.org/) |
| TensorFlow | Deep learning framework | [Website](https://www.tensorflow.org/) |
| Keras | High-level deep learning API | [Website](https://keras.io/) |
| XGBoost | Gradient-boosted decision trees | [Website](https://xgboost.readthedocs.io/) |
| LightGBM | Efficient gradient boosting | [Website](https://lightgbm.readthedocs.io/) |
| Hugging Face Transformers | Pretrained transformer models and training utilities | [Website](https://huggingface.co/docs/transformers) |

Start with Scikit-learn for classical ML and one deep learning framework, such as PyTorch, before trying to learn every framework simultaneously.

## 7. AI and LLM Development

| Tool | Purpose | Link |
|---|---|---|
| Hugging Face Hub | Discover and share models, datasets, and demos | [Website](https://huggingface.co/) |
| Hugging Face Transformers | Work with transformer architectures and pretrained models | [Documentation](https://huggingface.co/docs/transformers) |
| Sentence Transformers | Generate embeddings for semantic search and similarity tasks | [Documentation](https://www.sbert.net/) |
| Ollama | Run supported language models locally | [Website](https://ollama.com/) |
| llama.cpp | Run supported LLMs using optimized local inference | [GitHub](https://github.com/ggml-org/llama.cpp) |
| vLLM | High-throughput LLM serving | [Documentation](https://docs.vllm.ai/) |
| MLflow | Track experiments and manage model workflows | [Website](https://mlflow.org/) |

Check model licenses, hardware requirements, API costs, and data-handling policies before choosing a tool for a project.

## 8. API Testing and Development

| Tool | Purpose | Link |
|---|---|---|
| Postman | Test and document HTTP APIs | [Website](https://www.postman.com/) |
| Insomnia | API design and testing | [Website](https://insomnia.rest/) |
| HTTPie | Human-friendly HTTP client | [Website](https://httpie.io/) |
| Swagger UI | Explore and test OpenAPI-described endpoints | [Website](https://swagger.io/tools/swagger-ui/) |
| FastAPI | Build Python APIs | [Website](https://fastapi.tiangolo.com/) |

Test valid requests, invalid inputs, authentication failures, timeouts, and error responses rather than testing only successful requests.

## 9. Code Quality, Testing, and Debugging

| Tool | Purpose | Link |
|---|---|---|
| pytest | Python testing framework | [Website](https://pytest.org/) |
| Ruff | Python linting and formatting | [Website](https://docs.astral.sh/ruff/) |
| Black | Python code formatter | [Website](https://black.readthedocs.io/) |
| mypy | Static type checking | [Website](https://mypy.readthedocs.io/) |
| coverage.py | Measure code coverage | [Website](https://coverage.readthedocs.io/) |
| Python Debugger (`pdb`) | Debug Python programs | [Documentation](https://docs.python.org/3/library/pdb.html) |

Automate repeatable checks and use tests to verify behavior. A high coverage percentage alone does not guarantee correct software.

## 10. Databases and Data Inspection

| Tool | Purpose | Link |
|---|---|---|
| SQLite | Lightweight embedded relational database | [Website](https://www.sqlite.org/) |
| PostgreSQL | Relational database for applications and data systems | [Website](https://www.postgresql.org/) |
| DBeaver | Database administration and querying interface | [Website](https://dbeaver.io/) |
| pgAdmin | PostgreSQL management | [Website](https://www.pgadmin.org/) |
| DuckDB | Analytical SQL engine | [Website](https://duckdb.org/) |
| DB Browser for SQLite | Inspect and edit SQLite databases | [Website](https://sqlitebrowser.org/) |

Use parameterized queries, protect database credentials, and understand transactions and access permissions.

## 11. Containers, Deployment, and Automation

| Tool | Purpose | Link |
|---|---|---|
| Docker | Build and run containerized applications | [Website](https://www.docker.com/) |
| Docker Compose | Define multi-container applications | [Documentation](https://docs.docker.com/compose/) |
| GitHub Actions | Automate builds, tests, and workflows | [Documentation](https://docs.github.com/en/actions) |
| GitHub Codespaces | Cloud development environments | [Website](https://github.com/features/codespaces) |
| Make | Automate repeatable development commands | [Website](https://www.gnu.org/software/make/) |

Learn local development, testing, and Docker fundamentals before adopting complex deployment infrastructure.

## 12. Documentation and Productivity

| Tool | Purpose | Link |
|---|---|---|
| Markdown Guide | Learn Markdown syntax | [Website](https://www.markdownguide.org/) |
| Mermaid | Create diagrams from text | [Website](https://mermaid.js.org/) |
| MkDocs | Build documentation sites | [Website](https://www.mkdocs.org/) |
| Sphinx | Generate documentation from Python projects | [Website](https://www.sphinx-doc.org/) |
| Excalidraw | Draw diagrams and architecture sketches | [Website](https://excalidraw.com/) |

Use documentation and diagrams to explain architecture, setup, workflows, and important design decisions in your projects.

## 13. Recommended Starter Toolkit

For a beginner building Python and AI/ML projects, a practical starting setup is:

- **Editor:** VS Code
- **Programming:** Python
- **Environment:** `venv` and `pip`, or Conda
- **Notebooks:** Jupyter
- **Version control:** Git and GitHub
- **Data analysis:** NumPy, Pandas, Matplotlib
- **Classical ML:** Scikit-learn
- **Deep learning:** PyTorch
- **Testing and quality:** pytest and Ruff
- **API development:** FastAPI
- **Deployment fundamentals:** Docker

Add other tools only when a project requires them. A small, well-understood toolkit is more useful than installing many tools without using them.

## 14. Tool Selection Guidelines

Before adopting a tool, consider:

1. **Purpose:** What specific problem does it solve?
2. **Learning curve:** Is it appropriate for the current project?
3. **Compatibility:** Does it support your operating system, Python version, and dependencies?
4. **Maintenance:** Is the project actively maintained?
5. **License:** Are its terms suitable for your use?
6. **Cost:** Are there usage limits, paid features, or infrastructure costs?
7. **Security:** How does it handle credentials, data, and permissions?
8. **Reproducibility:** Can another developer recreate the environment?

## Related Sections

- [Useful Links](../README.md)
- [AI-ML-Journey Repository](../../../../README.md)
- [Official Documentation](../Official-Documentation/README.md)
- [Free Courses](../Free-Courses/README.md)
- [Open Source](../Open-Source/README.md)
- [Environments](../../../../16-Environments/README.md)
