# Windows Setup for Python and AI/ML Development

This guide covers the basic Windows configuration needed for Python programming and AI/ML learning.

## 1. Update Windows

1. Open **Settings**.
2. Navigate to **Windows Update**.
3. Check for available updates.
4. Install relevant updates and restart if required.

Keeping Windows updated helps maintain compatibility, security, and system stability.

## 2. Install a Code Editor

Install Visual Studio Code from its official website:

https://code.visualstudio.com/

During setup, consider enabling these options if available:

- Add VS Code to PATH.
- Add an option to open folders with Code.
- Register VS Code as an editor for supported file types.

## 3. Open a Development Folder

Create a dedicated folder for your programming projects.

Example:

```text
D:\Learning-Materials\
└── AI-ML-Journey\
```

Open the folder in VS Code using **File → Open Folder**.

## 4. Use PowerShell

PowerShell is suitable for running Python, Git, and virtual-environment commands.

In VS Code:

1. Open **Terminal**.
2. Select **New Terminal**.
3. Confirm that PowerShell is selected.

Check the current directory:

```powershell
Get-Location
```

List the files and folders:

```powershell
Get-ChildItem
```

## 5. Check PATH

PATH allows Windows to locate executable programs from the terminal.

After installing Python or Git, open a new terminal and test:

```powershell
python --version
git --version
```

If a command is not recognized, check the installation and PATH configuration.

## 6. Recommended Practices

- Keep projects in clearly named folders.
- Use a virtual environment for each Python project.
- Keep your operating system and development tools updated.
- Avoid running commands you do not understand, especially commands downloaded from untrusted sources.
- Back up important projects and notes.

## Next Step

Continue to [Python Installation](Python-Installation.md) to install and verify Python.