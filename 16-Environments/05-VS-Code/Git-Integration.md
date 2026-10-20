# Git Integration in VS Code

VS Code includes built-in Git integration for reviewing changes, staging files, creating commits, and working with branches.

Git must be installed separately.

## 1. Verify Git Installation

Open the integrated terminal:

```powershell
git --version
```

If Git is not installed, follow the official instructions:

[Git Downloads](https://git-scm.com/downloads)

## 2. Open a Git Repository

Open your existing repository folder in VS Code.

If the folder is already a Git repository, VS Code will generally detect it automatically.

To initialize a new repository, use:

```powershell
git init
```

Do not initialize a nested repository inside an existing repository unless that is intentional.

## 3. View Changes

Open Source Control using `Ctrl + Shift + G`.

You can review modified, added, deleted, and untracked files.

Click a changed file to compare its current content with the previous tracked version.

## 4. Stage Changes

You can stage files through the Source Control interface.

Or use the terminal:

```powershell
git add README.md
```

To stage a specific folder:

```powershell
git add 16-Environments/05-VS-Code/
```

Review the staged files before committing:

```powershell
git status
git diff --cached
```

## 5. Commit Changes

Use a meaningful commit message:

```powershell
git commit -m "docs(environments): add VS Code guides"
```

If Git requests your identity, configure your name and email using the official Git instructions. Use the email address you intend to associate with your commits.

## 6. Push to GitHub

If the repository's remote and branch are configured:

```powershell
git push origin main
```

For a new branch, follow the repository's branch and upstream configuration.

## 7. Useful Git Commands

| Command | Purpose |
|---|---|
| `git status` | Show repository and staging status |
| `git diff` | Show unstaged changes |
| `git diff --cached` | Show staged changes |
| `git add FILE` | Stage a specific file |
| `git commit -m "MESSAGE"` | Commit staged changes |
| `git log --oneline` | View concise commit history |
| `git pull` | Fetch and integrate remote changes according to configuration |
| `git push` | Send local commits to the remote |

## 8. Important Safety Practices

- Review staged files before every commit.
- Do not commit `.venv/`, credentials, API keys, or private data.
- Avoid force-pushing shared branches unless you understand the consequences.
- Commit related changes together.
- Use meaningful messages that explain the change.

## 🔗 Official Resources

- [Git in VS Code](https://code.visualstudio.com/docs/sourcecontrol/overview)
- [Git Documentation](https://git-scm.com/doc)
- [GitHub Documentation](https://docs.github.com/)

---

**Tip:** VS Code makes Git easier to use, but understanding `git status`, staging, commits, and remotes remains essential.