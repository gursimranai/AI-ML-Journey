# Installing Conda

This guide covers installing Conda and checking that it works correctly.

## 🧠 What Is Conda?

Conda is a package and environment manager. You can use it to create isolated Python environments and install compatible packages.

Two common distributions are:

- **Miniconda:** A lightweight installation containing Conda and essential components.
- **Anaconda Distribution:** A larger distribution that includes Conda and many preinstalled data science packages.

**Recommendation:** Start with Miniconda if you prefer a lightweight setup and want to install only the packages you need.

## 💻 Installation on Windows

1. Visit the [official Miniconda page](https://www.anaconda.com/docs/getting-started/miniconda/main).
2. Download the Windows installer appropriate for your computer.
3. Run the installer and follow its instructions.
4. Finish the installation.
5. Open the Conda-enabled terminal provided by the installation, such as **Anaconda Prompt** or the available Miniconda prompt.

Avoid changing advanced installation options unless you understand their effects.

## ✅ Verify the Installation

Run:

```bash
conda --version
```

To see the installation and configuration details:

```bash
conda info
```

To list existing environments:

```bash
conda env list
```

If these commands display information instead of an error, Conda is available in that terminal.

## 🧪 Create a Test Environment

```bash
conda create --name conda-test python=3.12
conda activate conda-test
python --version
conda deactivate
```

This creates an isolated environment named `conda-test`, activates it, checks its Python version, and then deactivates it.

When finished, you can remove the test environment:

```bash
conda env remove --name conda-test
```

## ⚠️ Common Installation Problems

- **`conda` is not recognized:** Open the Conda-enabled terminal first. If needed, follow the official installation and shell-configuration guidance.
- **Installation fails:** Check that you downloaded the correct installer and have sufficient disk space.
- **Wrong Python version:** Activate the intended environment and run `python --version`.

## 🔗 Official Resources

- [Miniconda Installation](https://www.anaconda.com/docs/getting-started/miniconda/main)
- [Conda Installation Guide](https://docs.conda.io/projects/conda/en/latest/user-guide/install/)

---

**Tip:** Verify Conda before creating environments for real projects.