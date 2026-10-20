# Installing Visual Studio Code

This guide explains how to install VS Code and prepare it for development.

## 1. Download VS Code

Visit the official website:

[Download Visual Studio Code](https://code.visualstudio.com/download)

Choose the installer for your operating system.

## 2. Install on Windows

1. Download the Windows installer.
2. Run the installer.
3. Accept the license agreement.
4. Choose the installation location.
5. Review the additional options.
6. Complete the installation.
7. Launch VS Code.

Depending on the installer, options may include adding VS Code to PATH and adding actions to the Windows Explorer context menu.

## 3. Understand the Interface

The main interface includes:

- **Activity Bar:** Switch between Explorer, Search, Source Control, Run and Debug, and extensions.
- **Explorer:** Browse project files and folders.
- **Editor:** Write and edit code.
- **Integrated Terminal:** Run commands without leaving VS Code.
- **Status Bar:** View information such as the selected interpreter, language mode, and Git branch.
- **Command Palette:** Search for and execute editor commands.

## 4. Open a Project Folder

Select **File → Open Folder** and choose your project root.

For example:

```text
AI-ML-Journey/
├── README.md
├── .gitignore
├── 01-Python/
└── 16-Environments/
```

Opening the root folder makes it easier to navigate files and work with Git.

## 5. Open the Integrated Terminal

Use:

`Ctrl + `` `

You can run commands such as:

```powershell
python --version
git --version
```

These commands work when Python and Git are installed and accessible in the terminal.

## 6. Verify the Installation

Check the VS Code version from the terminal:

```powershell
code --version
```

If the `code` command is unavailable, you can still launch VS Code from the Start menu. Configure the command-line path if you need terminal access.

## 7. Install Essential Extensions

Open Extensions using `Ctrl + Shift + X`.

For Python development, start with the Microsoft Python extension. Add Jupyter support if you work with notebooks.

See [Extensions](Extensions.md) for recommendations.

## 🔗 Official Resources

- [VS Code Setup](https://code.visualstudio.com/docs/setup/setup-overview)
- [VS Code on Windows](https://code.visualstudio.com/docs/setup/windows)
- [VS Code Interface](https://code.visualstudio.com/docs/getstarted/userinterface)

---

**Tip:** Install VS Code and Python separately. Installing the editor does not automatically install a Python interpreter.