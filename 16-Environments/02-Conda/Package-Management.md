# Conda Package Management

Conda can install, update, inspect, and remove packages inside an environment.

## 1. Install a Package

Activate the environment first:

```bash
conda activate ai-ml
```

Install packages:

```bash
conda install numpy pandas matplotlib
```

Conda resolves package dependencies and proposes a transaction before applying changes.

## 2. Install a Specific Package Version

```bash
conda install numpy=2.0
```

The version shown is an example. Choose a version compatible with your Python version and other dependencies.

## 3. View Installed Packages

```bash
conda list
```

To inspect a particular package, filter the output or search the package list manually.

## 4. Update a Package

```bash
conda update numpy
```

To update Conda itself in a suitable installation:

```bash
conda update conda
```

Review the proposed changes before confirming them.

## 5. Remove a Package

```bash
conda remove numpy
```

Conda may also remove dependencies that are no longer needed, depending on the transaction.

## 6. Search for Packages

```bash
conda search pandas
```

This searches the configured package channels for available builds.

## 7. Understand Channels

Channels are package repositories from which Conda obtains packages. The default configuration uses configured default channels; `conda-forge` is another widely used community channel.

For example:

```bash
conda install --channel conda-forge pandas
```

Use a consistent channel strategy within each environment. Mixing channels without a plan can create dependency-solving problems.

## 8. Using `pip` with Conda

Some packages are unavailable through your chosen Conda channels and must be installed using `pip`.

Activate the intended environment first:

```bash
conda activate ai-ml
python -m pip install package-name
```

Replace `package-name` with the actual package you need.

**Important:** Prefer Conda packages when practical. If you need `pip`, install Conda-managed packages first, then use `pip` for the remaining packages. Avoid switching repeatedly between Conda and `pip` when changing dependencies.

## 💡 Best Practices

- Activate the correct environment before installing anything.
- Review package versions and dependency changes.
- Use `python -m pip` so `pip` targets the active Python interpreter.
- Avoid unnecessary global package installations.
- Record important dependencies in an environment file.

---

**Tip:** If an installation fails, inspect the active environment and Python version before trying random package versions.