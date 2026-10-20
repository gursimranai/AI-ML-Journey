# Development Environments

This section covers the tools, configurations, and workflows needed to build a reliable Python development environment for programming, data science, and AI/ML projects.

A well-configured development environment helps manage Python versions, install dependencies, run notebooks, debug programs, and maintain reproducible projects.

## 📂 Contents

| Folder | Description |
|---|---|
| [01-Installation-Guide](01-Installation-Guide/) | Set up Windows, Python, Git, and essential development tools |
| [02-Conda](02-Conda/) | Manage Conda environments, packages, and environment configurations |
| [03-Virtualenv](03-Virtualenv/) | Create and manage isolated Python virtual environments |
| [04-Jupyter](04-Jupyter/) | Install and configure Jupyter notebooks, kernels, and notebook workflows |
| [05-VS-Code](05-VS-Code/) | Configure VS Code, Python extensions, Git integration, and debugging |

## 🎯 Learning Objectives

By working through this section, you will learn how to:

- Install and configure the tools required for Python development.
- Understand the difference between Python interpreters and virtual environments.
- Create isolated environments for individual projects.
- Install, update, and manage Python packages.
- Export and reproduce environment configurations.
- Configure Jupyter notebooks and select the correct kernels.
- Use VS Code for coding, debugging, and version control.
- Troubleshoot common installation and configuration issues.

## 🛠️ Core Tools

| Tool | Primary Purpose |
|---|---|
| Python | Execute Python programs |
| pip | Install Python packages |
| `venv` | Create isolated environments using Python's standard library |
| Conda | Manage environments and packages |
| Jupyter | Run interactive notebooks |
| Visual Studio Code | Edit, run, and debug code |
| Git | Track changes and collaborate on projects |

## 🚀 Recommended Learning Order

1. **Installation Guide:** Set up your operating system, Python, Git, and essential tools.
2. **Conda:** Learn Conda environments and package management if you need them.
3. **Virtual Environments:** Understand Python's built-in `venv` workflow.
4. **Jupyter:** Configure notebooks and kernels for interactive learning.
5. **VS Code:** Set up your editor, extensions, interpreter, Git integration, and debugging.

You do not need to use both Conda and `venv` for every project. Choose an environment manager based on your project's requirements.

## 💡 Best Practices

- Use a separate environment for each project when practical.
- Keep project dependencies documented.
- Select the correct interpreter and notebook kernel before running code.
- Avoid installing project dependencies globally without a reason.
- Keep virtual environments and generated files out of Git.
- Never commit passwords, API keys, access tokens, or other secrets.
- Prefer official documentation when installing or troubleshooting tools.
- Record the versions and dependencies needed to reproduce important projects.

## 🔍 Troubleshooting

If a development tool does not work as expected:

1. Read the complete error message.
2. Verify the installed tool and version.
3. Check the active Python interpreter and environment.
4. Confirm that required packages are installed in the correct environment.
5. Review the relevant guide in this section.
6. Consult the official documentation before making system-level changes.

## 📚 Official Resources

- [Python Documentation](https://docs.python.org/3/)
- [Python Virtual Environments](https://docs.python.org/3/library/venv.html)
- [Conda Documentation](https://docs.conda.io/)
- [Jupyter Documentation](https://docs.jupyter.org/)
- [Visual Studio Code Documentation](https://code.visualstudio.com/docs)
- [Git Documentation](https://git-scm.com/doc)

---

*This section is part of the AI-ML-Journey repository and supports the development setup used throughout the learning roadmap.*