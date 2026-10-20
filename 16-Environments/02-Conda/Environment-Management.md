# Conda Environment Management

Conda environments provide separate spaces for project dependencies. One project can use one set of packages while another project uses a different set.

## 🧠 Why Create Environments?

Imagine you have two projects:

- Project A requires one version of a library.
- Project B requires a different version.

Installing everything into one shared environment can cause dependency conflicts. Separate environments help keep the projects independent.

## 1. View Existing Environments

```bash
conda env list
```

Alternative:

```bash
conda info --envs
```

The active environment is marked with an asterisk (`*`).

## 2. Create an Environment

```bash
conda create --name ai-ml python=3.12
```

Replace `ai-ml` with a descriptive environment name.

## 3. Activate an Environment

```bash
conda activate ai-ml
```

Your terminal prompt normally displays the active environment name.

## 4. Check the Active Python Interpreter

```bash
python --version
python -c "import sys; print(sys.executable)"
```

The second command displays the path of the Python interpreter currently in use.

## 5. Deactivate an Environment

```bash
conda deactivate
```

This leaves the current environment and returns you to the previous environment context.

## 6. Clone an Environment

```bash
conda create --name ai-ml-copy --clone ai-ml
```

This creates a copy of the existing environment named `ai-ml-copy`.

## 7. Remove an Environment

First deactivate it if it is currently active, then run:

```bash
conda env remove --name ai-ml-copy
```

**Warning:** Removing an environment deletes that environment and its installed packages. It does not delete your project files.

## 8. Create an Environment with Packages

```bash
conda create --name data-analysis python=3.12 numpy pandas matplotlib
```

This creates an environment with Python and the specified packages.

## 💡 Best Practices

- Give each project a meaningful environment name.
- Use a supported Python version compatible with your dependencies.
- Avoid installing every package you might ever need into one environment.
- Verify the active interpreter before running scripts or notebooks.
- Keep environment specifications with the project when reproducibility matters.

## Quick Reference

| Task | Command |
|---|---|
| List environments | `conda env list` |
| Create an environment | `conda create --name my-env python=3.12` |
| Activate | `conda activate my-env` |
| Deactivate | `conda deactivate` |
| Clone | `conda create --name copy-env --clone my-env` |
| Remove | `conda env remove --name my-env` |

---

**Remember:** Activate the correct environment before installing packages or running project code.