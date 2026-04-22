# 🧮 Simple C++ Calculator

A beginner-friendly command-line calculator written in C++ that performs basic arithmetic on two numbers.

---

## Features

- Addition, subtraction, multiplication, and division
- Handles division by zero with a clear error message
- Handles invalid operations gracefully
- Works with decimal numbers (doubles)

---

## Requirements

- A C++ compiler (g++ recommended)
- Windows, macOS, or Linux

### Installing g++ on Windows
Download and install [MinGW-w64](https://www.mingw-w64.org/) or use [MSYS2](https://www.msys2.org/).  
Make sure `g++` is added to your system PATH.

### Installing g++ on macOS
```bash
xcode-select --install
```

### Installing g++ on Linux (Debian/Ubuntu)
```bash
sudo apt install g++
```

---

## Getting Started

### 1. Clone or download the project

Download `Calculator.cpp` and place it in a folder of your choice.

### 2. Open a terminal and navigate to the folder

```powershell
# Windows example
cd "C:\Users\YourName\Documents\C++ PROJECTS"
```

```bash
# macOS/Linux example
cd ~/Documents/calculator
```

> ⚠️ If your folder name contains spaces, wrap the path in quotes.

### 3. Compile the program

```bash
g++ Calculator.cpp -o Calculator
```

### 4. Run the program

```bash
# Windows
./Calculator

# macOS/Linux
./Calculator
```

---

## Usage

When you run the program, it will prompt you step by step:

```
Welcome to the simple calculator!
Please enter the first number: 10
Please enter the second number: 4
Please enter the operation (+, -, *, /): /
The result is: 2.5
```

### Supported operations

| Symbol | Operation      |
|--------|----------------|
| `+`    | Addition       |
| `-`    | Subtraction    |
| `*`    | Multiplication |
| `/`    | Division       |

---

## Error Handling

The calculator handles two types of errors:

- **Division by zero** — entering `0` as the second number with `/` will print:  
  `Error: Denominator cannot be zero`

- **Invalid operator** — entering anything other than `+`, `-`, `*`, `/` will print:  
  `Error: Invalid operation`

---

## Project Structure

```
C++ PROJECTS/
└── Calculator.cpp    # Main source file
└── Calculator.exe    # Compiled executable (generated after compiling)
```

---

## Author

Made by **KalewxTheProgrammer**
