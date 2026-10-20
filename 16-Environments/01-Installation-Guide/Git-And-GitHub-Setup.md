# Git and GitHub Setup

Git tracks changes to files, while GitHub hosts Git repositories online. Both are useful for managing programming projects and documenting your learning progress.

## 1. Install Git

Download Git for Windows from:

https://git-scm.com/downloads/win

Install it using the recommended options unless your workflow requires customization.

Verify the installation:

```powershell
git --version
```

## 2. Configure Your Git Identity

Set the name and email that Git will associate with your commits:

```powershell
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
```

Replace the example values with your preferred commit identity. If you want your contributions associated with GitHub, use an email address connected to your account or your GitHub-provided private email.

Verify the settings:

```powershell
git config --global --list
```

## 3. Create a GitHub Account

Visit:

https://github.com/

Create an account if you do not already have one. Enable two-factor authentication for better account security.

## 4. Create or Clone a Repository

To clone an existing repository:

```powershell
git clone https://github.com/USERNAME/REPOSITORY.git
cd REPOSITORY
```

Replace `USERNAME` and `REPOSITORY` with the actual repository details.

Alternatively, initialize a local folder:

```powershell
git init
```

If you are working in an existing repository, do not initialize it again unnecessarily.

## 5. Understand the Basic Workflow

The usual workflow is:

**Working files → Stage → Commit → Push**

Check the current state:

```powershell
git status
```

Stage a specific file:

```powershell
git add README.md
```

Stage a specific folder:

```powershell
git add 01-Python/01-Fundamentals/
```

Commit staged changes:

```powershell
git commit -m "docs(python): update fundamentals notes"
```

Push to the remote branch:

```powershell
git push origin main
```

The branch may have a different name in your repository. Check it with:

```powershell
git branch --show-current
```

## 6. Pull Changes

Before working with a repository changed elsewhere, synchronize when appropriate:

```powershell
git pull
```

If Git reports conflicts, review the conflicting files and resolve them before committing.

## 7. Use a `.gitignore` File

A `.gitignore` file prevents selected untracked files from being added accidentally.

For Python projects, consider excluding:

```gitignore
__pycache__/
*.py[cod]
.venv/
venv/
.env
.ipynb_checkpoints/
```

Do not ignore files that your repository intentionally needs to share. Review your existing `.gitignore` before adding duplicate rules.

## 8. Write Clear Commit Messages

Examples:

```text
feat(python): add loops practice notebook
docs(python): improve string notes
fix(python): correct list slicing example
chore(repo): update gitignore
```

Use `feat` for new functionality, `docs` for documentation, `fix` for corrections, and `chore` for maintenance.

## 9. Authentication and Security

- Follow GitHub's current authentication instructions.
- Use Git Credential Manager or an approved authentication method.
- Never put passwords, access tokens, or private keys in source code.
- If a secret is accidentally committed, revoke or rotate it; deleting it from the latest commit alone may not remove it from Git history.

## Official Resources

- Git downloads: https://git-scm.com/downloads
- Git documentation: https://git-scm.com/doc
- GitHub documentation: https://docs.github.com/
- GitHub repositories: https://docs.github.com/en/repositories