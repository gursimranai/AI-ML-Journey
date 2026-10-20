# Conda Troubleshooting

This guide covers common Conda errors and practical first steps for resolving them.

## 1. `conda` Is Not Recognized

**Possible cause:** The terminal does not have Conda configured.

**Try this:**

1. Open Anaconda Prompt or the terminal supplied by your Conda installation.
2. Run:

   ```bash
   conda --version
   ```

3. If it still fails, check the installation and official shell-configuration documentation.

Avoid manually changing system PATH variables until you understand the installation configuration.

## 2. Environment Activation Fails

Try listing available environments:

```bash
conda env list
```

Check that the environment name is correct. If necessary, initialize the shell using the official Conda instructions, then reopen the terminal.

## 3. Package Dependency Conflicts

Conda may be unable to find a compatible set of package versions.

Try the following:

- Confirm that the package supports your Python version.
- Avoid mixing many package channels unnecessarily.
- Install related packages together when creating the environment.
- Consider a fresh environment with compatible versions.

Example:

```bash
conda create --name clean-env python=3.12 numpy pandas
conda activate clean-env
```

## 4. Package Is Not Found

Search the configured channels:

```bash
conda search package-name
```

Replace `package-name` with the package you need. Check the package's official installation instructions if it is not available from your configured channels.

## 5. Jupyter Uses the Wrong Python Environment

In a notebook cell, run:

```python
import sys

print(sys.executable)
```

If the path is incorrect, select the correct notebook kernel. Also confirm that the required package is installed in that environment.

## 6. Conda Is Slow to Resolve Dependencies

Dependency solving can take time, particularly in environments with many packages.

Helpful practices:

- Start with a small environment.
- Specify a compatible Python version.
- Keep channel configuration consistent.
- Remove packages that the project does not need.

## 7. Check the Conda Configuration

Useful diagnostic commands:

```bash
conda info
conda config --show
conda list
```

These help you inspect the Conda installation, configuration, and active environment's packages.

## 8. Avoid Risky Fixes

Do not immediately delete Conda folders, remove unrelated Python installations, or change system environment variables. First identify the exact error and consult the official documentation.

## 🔗 Official Help

- [Conda Documentation](https://docs.conda.io/)
- [Conda User Guide](https://docs.conda.io/projects/conda/en/latest/user-guide/)

---

**Best practice:** When troubleshooting, capture the exact command and full error message. This makes it easier to identify the real cause rather than guessing.