# Activating and Deactivating Virtual Environments

Creating a virtual environment does not automatically mean every terminal or application is using it. Activation helps configure your current shell to use the environment's Python and package tools.

## 🪟 Windows PowerShell

Activate:

```powershell
.\.venv\Scripts\Activate.ps1
```

Deactivate:

```powershell
deactivate
```

## Windows Command Prompt

Activate:

```bat
.venv\Scripts\activate.bat
```

Deactivate:

```bat
deactivate
```

## 🍎 macOS and Linux

Activate:

```bash
source .venv/bin/activate
```

Deactivate:

```bash
deactivate
```

## ✅ Verify Activation

Run:

```powershell
python -c "import sys; print(sys.executable)"
python -m pip --version
```

The output should reference the intended virtual environment.

Your terminal prompt may also display `(.venv)` when the environment is active.

## ⚠️ PowerShell Execution Policy Error

If PowerShell reports that script execution is disabled, you can use a different supported shell, such as Command Prompt, or review Microsoft's guidance on execution policies.

Official documentation: [PowerShell Execution Policies](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.core/about/about_execution_policies)

Do not change system-wide security settings unnecessarily just to activate an environment.

## 🧠 Important Concepts

- An environment must exist before you can activate it.
- Activation normally affects the current terminal session.
- A new terminal may need the environment activated again.
- VS Code and Jupyter can select an interpreter independently of terminal activation.
- `deactivate` leaves the environment; it does not delete it.

---

**Tip:** If Python is running from the wrong location, check `sys.executable` before installing packages or executing project code.