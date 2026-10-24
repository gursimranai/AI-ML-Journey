# Git and GitHub Cheat Sheets

This directory contains quick-reference materials for Git commands, version control concepts, and GitHub workflows used to manage projects, collaborate with developers, and maintain a professional development portfolio.

## Topics Covered

### 1. Git Fundamentals
- Version control concepts
- Repositories, working trees, and staging areas
- Git configuration
- Initializing and cloning repositories
- Checking repository status
- Viewing commit history

### 2. Essential Git Commands
- `git init` — initialize a repository
- `git clone` — clone a remote repository
- `git status` — inspect working-tree changes
- `git add` — stage changes
- `git commit` — save a snapshot
- `git log` — view commit history
- `git diff` — compare changes
- `git restore` — discard or restore working-tree changes
- `git rm` — remove tracked files

### 3. Branching and Merging
- Creating, listing, and switching branches
- Renaming and deleting branches
- Merging branches
- Resolving merge conflicts
- Understanding fast-forward and three-way merges
- Rebasing and its appropriate use cases

### 4. Remote Repositories
- Connecting local and remote repositories
- `git remote`
- `git fetch`
- `git pull`
- `git push`
- Tracking branches
- Handling rejected pushes and synchronization issues

### 5. GitHub Workflows
- Creating and managing repositories
- Writing useful README files
- Issues and pull requests
- Forks and contributions
- Code reviews
- Releases and tags
- Repository settings and collaboration

### 6. Practical Workflows
- Making a clean, focused commit
- Updating a local repository
- Working with feature branches
- Reviewing staged changes before committing
- Recovering from common mistakes
- Maintaining a consistent commit history

## Cheat Sheet Guidelines

A useful reference should include:

- **Command:** The exact Git command.
- **Purpose:** What the command does.
- **Example:** A practical command with realistic arguments.
- **Expected result:** What to look for after execution.
- **Caution:** Any destructive or potentially disruptive behavior.

## Recommended File Organization

```text
Git-And-GitHub/
├── README.md
├── Git-Basic-Commands.md
├── Git-Branching-And-Merging.md
├── GitHub-Workflow.md
└── Git-Troubleshooting.md
```

*The filenames above are suggestions. Preserve your existing files and filenames.*

## Safe Git Practices

- Review `git status` before making changes.
- Inspect staged changes with `git diff --cached` before committing.
- Use meaningful, focused commit messages.
- Never commit passwords, API keys, access tokens, or private credentials.
- Understand a command before using destructive options such as `git reset --hard` or force-pushing.
- Keep important work backed up before attempting recovery operations.

## Usage

Use these cheat sheets when managing `AI-ML-Journey`, working on projects, collaborating with others, or contributing to open-source repositories.

For unfamiliar or advanced commands, consult the official [Git documentation](https://git-scm.com/doc) and [GitHub documentation](https://docs.github.com/).

This directory provides a quick reference for maintaining reliable, organized, and professional Git workflows.