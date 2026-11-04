# 🎨 Random Color Generator

A simple Python application that generates random RGB colours and displays colourful text directly in the terminal. This project demonstrates the practical use of Python's built-in `random` module and the third-party `sty` library.

---

## 📌 Project Overview

The Random Color Generator generates three random RGB values (Red, Green, Blue) and uses them to create a randomly coloured terminal message.

Every time the program runs, it generates a different colour, making the terminal output dynamic and entertaining.

**Example message:**

```text
I am randomly changing color muahhahahahahahahaha
```

The text colour changes every time the program executes.

## ✨ Features

- Generates random RGB colour values.
- Uses Python's built-in `random` module.
- Applies terminal foreground colours using the `sty` library.
- Uses reusable user-defined functions.
- Demonstrates tuple returning and unpacking.
- Displays randomly coloured terminal text.
- Lightweight and easy to execute.

## 🛠️ Technologies & Libraries

| Technology | Purpose |
|---|---|
| Python | Core programming language |
| `random` | Generates random RGB values |
| `sty` | Applies terminal text colours |

## 📂 Project Structure

```text
Random-Color-Generator/
│
├── README.md
├── app.py
├── app.ipynb
└── requirements.txt
```

| File | Description |
|---|---|
| `app.py` | Main executable Python application |
| `app.ipynb` | Jupyter Notebook containing explanations, examples and implementation |
| `requirements.txt` | External project dependencies |
| `README.md` | Project documentation |

## ⚙️ Installation & Setup

### 1. Clone the Repository

```bash
git clone <your-repository-url>
```

### 2. Navigate to the Project Directory

```bash
cd Random-Color-Generator
```

### 3. Create a Virtual Environment (Optional)

```bash
python -m venv .venv
```

Activate it on Windows:

```bash
.venv\Scripts\activate
```

### 4. Install Dependencies

```bash
pip install -r requirements.txt
```

### 5. Run the Application

```bash
python app.py
```

## 🧠 Python Concepts Demonstrated

This project applies several fundamental Python programming concepts:

- **Module Importing:** Importing and using built-in and third-party modules.
- **Random Number Generation:** Generating random integers using `random.randint()`.
- **User-Defined Functions:** Creating reusable functions to perform specific operations.
- **Function Parameters:** Passing RGB values between functions.
- **Return Statements:** Returning multiple values from a function.
- **Tuples:** Storing multiple RGB values together.
- **Tuple Unpacking:** Assigning returned tuple values to individual variables.
- **Third-Party Libraries:** Installing and using external Python packages.
- **Terminal Formatting:** Applying foreground colours to terminal text.

## 🔍 How It Works

The application follows a simple execution workflow:

1. Import the required modules.
2. Generate three random RGB values between 0 and 255.
3. Return the RGB values as a tuple.
4. Unpack the tuple into separate variables.
5. Pass the RGB values to the colour-generation function.
6. Use `sty.fg()` to generate the terminal foreground colour.
7. Print the message using the generated colour.
8. Reset terminal formatting.

## 🚀 Future Improvements

Potential enhancements for this project include:

- Generate multiple random colours in one execution.
- Add random background colour generation.
- Display RGB and HEX colour codes.
- Create a continuous colour-changing mode.
- Allow users to generate colours on demand.
- Build a graphical colour picker interface.

## 📚 Learning Resources

- [Python Official Documentation](https://docs.python.org/3/)
- [Python Random Module](https://docs.python.org/3/library/random.html)
- [sty Library – PyPI](https://pypi.org/project/sty/)

## 👨‍💻 Author

**Gursimran Singh**

B.Tech Computer Science Engineering (Artificial Intelligence & Machine Learning)

GitHub: [@gursimranai](https://github.com/gursimranai)

---

*Part of my Python programming and project-based learning journey.*

⭐ If you find this project useful, consider giving the repository a star!