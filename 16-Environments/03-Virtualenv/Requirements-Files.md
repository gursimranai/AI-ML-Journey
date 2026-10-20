# Python Requirements Files

A requirements file records Python packages that a project needs. It helps you and other developers install the project's dependencies consistently.

## 1. Create a Requirements File

A simple `requirements.txt` might contain:

```text
numpy
pandas
matplotlib
```

Each line identifies a package requirement.

## 2. Install the Requirements

Activate the intended virtual environment, then run:

```powershell
python -m pip install -r requirements.txt
```

Run this command from the directory containing `requirements.txt`, or provide the correct path to the file.

## 3. Record Installed Packages

You can export the environment's installed packages with:

```powershell
python -m pip freeze > requirements.txt
```

This records package versions, which can be useful for reproducing an environment.

However, `pip freeze` lists installed distributions; it does not automatically distinguish your direct dependencies from their transitive dependencies. Review the output before committing it.

## 4. Version Constraints

Examples:

```text
numpy>=1.26
pandas>=2.0,<3.0
matplotlib==3.9.0
```

- `>=` means greater than or equal to a version.
- `<` means less than a version.
- `==` pins a particular version.

The versions shown are examples, not universal recommendations. Choose versions compatible with your Python version and project.

## 5. Recreate the Environment

On Windows PowerShell:

```powershell
python -m venv .venv
.\.venv\Scripts\Activate.ps1
python -m pip install --upgrade pip
python -m pip install -r requirements.txt
```

On macOS or Linux, activation uses:

```bash
source .venv/bin/activate
```

## 6. Recommended Project Structure

```text
my-project/
├── .venv/             # Local environment; do not commit
├── .gitignore
├── requirements.txt
├── README.md
└── src/
```

Add this to `.gitignore`:

```gitignore
.venv/
venv/
__pycache__/
*.py[cod]
.ipynb_checkpoints/
.env
```

## ⚠️ Important Notes

- Requirements files are not virtual environments.
- Avoid committing the `.venv` directory.
- Do not put passwords, API keys, or tokens in requirements files.
- A pinned package list does not guarantee identical installations across every operating system.
- Test the setup from a fresh environment before sharing a project.

---

**Tip:** For larger projects, distinguish direct dependencies from development tools and document the supported Python version in the README.