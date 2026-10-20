# Conda Environment Files

Environment files help you document and recreate the dependencies required by a project.

They are useful when sharing code on GitHub, moving to another computer, or restoring a development setup.

## 1. Export an Environment

Activate the environment:

```bash
conda activate ai-ml
```

Export its configuration:

```bash
conda env export > environment.yml
```

This records the environment configuration, including package information and other metadata. The exported file may contain machine-specific details, so review it before sharing.

## 2. Create a More Portable Environment File

For a simpler file containing explicitly requested packages:

```bash
conda env export --from-history > environment.yml
```

This can be easier to maintain across platforms, but it may not capture every dependency or exact package build needed to reproduce the original environment.

## 3. Example `environment.yml`

```yaml
name: ai-ml
channels:
  - conda-forge
dependencies:
  - python=3.12
  - numpy
  - pandas
  - matplotlib
  - jupyterlab
  - ipykernel
```

This is an example specification. Package availability and compatibility can vary across operating systems and over time.

## 4. Create an Environment from a File

Run this from the directory containing `environment.yml`:

```bash
conda env create --file environment.yml
```

Conda uses the `name` field to name the environment unless you override it.

## 5. Update an Existing Environment

```bash
conda env update --file environment.yml --prune
```

The `--prune` option removes installed packages that are no longer required by the specification. Review the changes carefully before using it on an important environment.

## 6. Recreate an Environment with Another Name

```bash
conda env create --file environment.yml --name ai-ml-test
```

This is useful for testing the specification without replacing your existing environment.

## 7. Recommended Repository Practice

For a project that uses Conda, store the environment file alongside its code:

```text
my-project/
├── README.md
├── environment.yml
├── src/
├── notebooks/
└── tests/
```

Do not commit an entire local Conda environment directory. Commit the environment specification instead.

## ⚠️ Important Notes

- Exported files can differ across operating systems.
- A full export may include platform-specific builds.
- A history-based export may omit dependencies installed indirectly or through `pip`.
- Check the environment file before sharing it publicly.
- Do not include credentials, tokens, or other secrets in environment files.

---

**Tip:** Test environment recreation in a fresh environment before relying on the file for collaboration or deployment.