# Python `venv` Command and Flags

The `venv` module provides command-line options for creating and configuring Python virtual environments.

## 1. Basic Syntax

```powershell
python -m venv [OPTIONS] ENV_DIR
```

- `python` runs the selected Python interpreter.
- `-m venv` runs the standard-library `venv` module.
- `[OPTIONS]` represents optional flags that control environment creation.
- `ENV_DIR` is the destination directory for the environment.

Example:

```powershell
python -m venv .venv
```

## 2. Display All Available Options

```powershell
python -m venv --help
```

Short form:

```powershell
python -m venv -h
```

The available options can vary by Python version. The following reference covers the options documented for Python 3.14. [Official Python documentation](https://docs.python.org/3.14/library/venv.html).

## 3. Complete Flag Reference

| Flag | Purpose |
|---|---|
| `-h`, `--help` | Display help and exit |
| `--system-site-packages` | Allow access to packages installed in the base Python environment |
| `--symlinks` | Try to use symbolic links instead of copies where they are not the default |
| `--copies` | Try to copy files instead of using symbolic links |
| `--clear` | Clear the contents of an existing target environment before creating the new environment |
| `--upgrade` | Update an existing environment to use the current Python installation, assuming Python was upgraded in place |
| `--without-pip` | Skip bootstrapping pip into the environment |
| `--prompt PROMPT` | Set a custom environment name shown in the activated terminal prompt |
| `--upgrade-deps` | Upgrade core dependencies, currently pip, to the latest version available from PyPI |
| `--without-scm-ignore-files` | Skip creating source-control ignore files in the environment directory |

The options are explained below with examples.

### 3.1 `-h` and `--help`

Displays the command's usage instructions.

```powershell
python -m venv --help
```

**Use when:** You want to check the available flags for your installed Python version.

### 3.2 `--system-site-packages`

Allows the environment to access packages installed in the base Python environment.

```powershell
python -m venv --system-site-packages .venv
```

Without this flag, the environment is normally isolated from the base installation's site-packages.

**Use when:** You deliberately need access to packages installed outside the virtual environment.

**Caution:** This reduces dependency isolation and can make projects less reproducible.

### 3.3 `--symlinks`

Requests symbolic links instead of copies where symbolic links are not the platform default.

```powershell
python -m venv --symlinks .venv
```

A symbolic link points to another file rather than storing an independent copy.

**Important:** Symbolic-link behavior depends on the operating system and permissions. Python's documentation does not recommend using this option on Windows as a general default.

### 3.4 `--copies`

Requests copies instead of symbolic links, even where links are the platform default.

```powershell
python -m venv --copies .venv
```

**Use when:** You have a specific reason to prefer copies over symbolic links.

You normally do not need this flag for a standard Windows development setup.

### 3.5 `--clear`

Clears the existing target directory's contents before creating the environment.

```powershell
python -m venv --clear .venv
```

**Warning:** This can delete existing environment contents, including installed packages. Do not run it against a directory containing files you need.

If you are unsure whether the environment is reusable, back up important information and inspect the target directory first.

### 3.6 `--upgrade`

Updates an existing environment to use the current Python installation, assuming that Python was upgraded in place.

```powershell
python -m venv --upgrade .venv
```

**Use when:** You have upgraded the base Python installation and need to update the existing environment.

This flag is not a general-purpose command for upgrading every installed package.

### 3.7 `--without-pip`

Creates the environment without bootstrapping pip.

```powershell
python -m venv --without-pip .venv
```

Pip is normally installed by default.

**Use when:** You have a specific reason to manage package-installation tooling separately.

For most learners, leave this flag out so pip is available for installing dependencies.

### 3.8 `--prompt PROMPT`

Sets the custom prefix displayed in the terminal when the environment is activated.

```powershell
python -m venv --prompt AI-ML-Journey .venv
```

The activated prompt may display a prefix such as:

```text
(AI-ML-Journey) PS C:\your-project>
```

**Use when:** You want a more descriptive environment label.

This changes the displayed prompt, not the actual directory name.

### 3.9 `--upgrade-deps`

Upgrades core dependencies, currently pip, to the latest version available from PyPI.

```powershell
python -m venv --upgrade-deps .venv
```

**Use when:** You want the environment's core package installer upgraded during creation.

**Caution:** The newest version is not always the best choice for every project. If reproducibility matters, specify and test your dependency versions separately.

### 3.10 `--without-scm-ignore-files`

Skips the creation of source-control ignore files in the environment directory.

```powershell
python -m venv --without-scm-ignore-files .venv
```

This option was introduced in Python 3.13.

In Python 3.13 and later, `venv` creates a `.gitignore` file inside the environment directory by default.

**Important:** This flag is not a replacement for the `.gitignore` in your repository root. You should still ignore the environment directory itself:

```gitignore
.venv/
```

## 4. The `ENV_DIR` Argument

`ENV_DIR` is the destination path. It is a required argument, not a flag.

### Create an environment in the current directory

```powershell
python -m venv .venv
```

### Choose a different directory name

```powershell
python -m venv my-environment
```

### Use an absolute path

```powershell
python -m venv C:\PythonEnvironments\my-project
```

### Create more than one environment

The standard `venv` command can accept multiple destination directories:

```powershell
python -m venv .venv test-env
```

This creates an environment in each specified directory using the same options.

**Best practice:** For an ordinary project, use one environment directory such as `.venv` rather than creating multiple environments unnecessarily.

## 5. Combining Flags

You can combine compatible options in one command.

### Example A: Custom prompt and upgraded dependencies

```powershell
python -m venv --prompt AI-ML --upgrade-deps .venv
```

Creates `.venv`, uses `AI-ML` as the prompt label, and upgrades pip.

### Example B: Environment with system packages

```powershell
python -m venv --system-site-packages .venv
```

Creates an environment that can access base-environment packages.

### Example C: Clear and recreate an existing environment

```powershell
python -m venv --clear .venv
```

Use this only when you intend to discard the existing environment contents.

### Example D: Create without pip

```powershell
python -m venv --without-pip .venv
```

Skips pip bootstrapping. This is rarely necessary for beginner projects.

## 6. Practical Recommendation for AI-ML-Journey

For your usual Windows development workflow, the basic command is sufficient:

```powershell
python -m venv .venv
.\.venv\Scripts\Activate.ps1
python -m pip install --upgrade pip
```

Add `.venv/` to your repository's root `.gitignore`.

Use other flags only when you have a clear requirement. In particular, avoid `--clear` unless you intend to remove existing environment contents.

## 7. Quick Revision

| Goal | Command |
|---|---|
| Show help | `python -m venv --help` |
| Create an environment | `python -m venv .venv` |
| Access base packages | `python -m venv --system-site-packages .venv` |
| Request file copies | `python -m venv --copies .venv` |
| Clear an existing environment | `python -m venv --clear .venv` |
| Upgrade an existing environment | `python -m venv --upgrade .venv` |
| Skip pip | `python -m venv --without-pip .venv` |
| Set a custom prompt | `python -m venv --prompt AI-ML .venv` |
| Upgrade pip during creation | `python -m venv --upgrade-deps .venv` |
| Skip SCM ignore-file creation | `python -m venv --without-scm-ignore-files .venv` |

## 🔗 Official References

- [Python 3.14 — `venv` documentation](https://docs.python.org/3.14/library/venv.html)
- [Python 3.12 — `venv` documentation](https://docs.python.org/3.12/library/venv.html)
- [Python Packaging User Guide](https://packaging.python.org/en/latest/guides/installing-using-pip-and-virtual-environments/)

---

**Key takeaway:** `python -m venv` creates the environment, the flags customize its creation, and activation makes it convenient to use from your terminal.