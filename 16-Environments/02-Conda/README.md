# Conda

Conda is an open-source package, dependency, and environment management system. It helps you create isolated environments, install packages, and manage different software requirements for Python and data science projects.

## 📚 Contents

| File | Description |
|---|---|
| [Installation](Installation.md) | Install Conda and verify the setup |
| [Environment Management](Environment-Management.md) | Create, activate, deactivate, and remove environments |
| [Package Management](Package-Management.md) | Install, update, and remove packages |
| [Jupyter Integration](Jupyter-Integration.md) | Use Conda environments with Jupyter Notebook |
| [Environment Files](Environment-Files.md) | Export and recreate environments |
| [Troubleshooting](Troubleshooting.md) | Solve common Conda problems |

## 🎯 Why Use Conda?

- **Environment isolation:** Keep project dependencies separate.
- **Dependency management:** Install packages and compatible dependencies together.
- **Reproducibility:** Share environment specifications with collaborators.
- **Python version management:** Use different Python versions for different projects.
- **Data science support:** Manage scientific packages and their dependencies.

## 🧠 Conda vs. Python `venv`

| Feature | Conda | `venv` |
|---|---|---|
| Creates isolated environments | Yes | Yes |
| Manages Python packages | Yes | Uses `pip` by default |
| Manages non-Python dependencies | Yes | No, not directly |
| Manages Python versions | Yes, through Conda packages | Uses an installed Python interpreter |
| Requires a separate installation | Yes | Included with standard Python installations |

**Tip:** You do not need Conda for every Python project. Use it when its environment and dependency-management features suit your workflow.

## 🚀 Basic Workflow

```bash
conda --version
conda create --name data-science python=3.12
conda activate data-science
conda install numpy pandas matplotlib
conda deactivate
```

Run these commands in a terminal where Conda is available. The package list and Python version are examples; choose versions compatible with your project.

## 📖 Learning Order

1. Install Conda.
2. Understand Conda environments.
3. Learn package management.
4. Connect environments to Jupyter Notebook.
5. Export and recreate environments.
6. Learn to diagnose common errors.

## 🔗 Official Resources

- [Conda Documentation](https://docs.conda.io/)
- [Conda User Guide](https://docs.conda.io/projects/conda/en/latest/user-guide/)
- [Miniconda](https://www.anaconda.com/docs/getting-started/miniconda/main)
- [Anaconda Distribution](https://www.anaconda.com/download)

---

*Part of the Environments section of the AI-ML-Journey repository.*