# C++ Programming Fundamentals

A collection of exercises, practice programs, notes, and projects completed while working through the **Microsoft C++ Programming Fundamentals** course on Coursera.

This repository documents my progression through fundamental C++ programming concepts, starting with basic program structure and functions and progressing to multi-file programs, compilation, linking, debugging, and a command-line utility capstone project.

---

## Repository Overview

The repository is organized into four learning modules followed by a final Command Line Utility project.

```text
Coursera-Microsoft-C++-Programming-Fundamentals/
│
├── module 1/
│   ├── main.cpp
│   ├── myUtils.cpp
│   └── myUtils.h
│
├── module 2/
│   ├── conversion.cpp
│   ├── data_types_app.cpp
│   ├── demo.cpp
│   └── functions.cpp
│
├── module 3/
│   ├── demo.cpp
│   ├── loops.cpp
│   └── patterns.cpp
│
├── module 4/
│   ├── Makefile
│   ├── commands.txt
│   ├── demo.cpp
│   ├── factorial.cpp
│   ├── link.cpp
│   ├── link.h
│   ├── pseudocode.txt
│   └── requirements.txt
│
├── CommandLineUtility/
│   ├── includes/
│   │   └── utility.h
│   ├── main.cpp
│   ├── menu.cpp
│   ├── temperatureConverter.cpp
│   ├── textProcessor.cpp
│   ├── baseConverter.cpp
│   ├── fileInfo.cpp
│   ├── commands.txt
│   ├── functions.txt
│   ├── requirements.txt
│   └── example.txt
│
└── .gitignore
```

## Module 1 — Program Structure, Functions, and Namespaces

The first module introduces the basic structure of a C++ program and demonstrates how functionality can be separated into different source and header files.

The module contains:

- `main.cpp`
- `myUtils.cpp`
- `myUtils.h`

The program demonstrates how a custom header file can be used to declare functions and how the corresponding implementation can be placed in a separate source file.

### Project Structure

```text
module 1/
│
├── main.cpp
├── myUtils.cpp
└── myUtils.h
```

## Module 2 — Data Types, Conversions, and Functions

Focuses on fundamental C++ data types, type conversion, constants, and function design.

### Topics Covered

- Fundamental data types
- Type conversion
- Constants
- Functions and parameters
- Return values
- Input validation
- Formatted output

---

## Module 3 — Loops and Pattern Generation

Focuses on repetition, counters, nested loops, and generating patterns using functions.

### Topics Covered

- `for` and `while` loops
- Nested loops
- Increment and decrement operators
- Counters
- Functions
- Pattern generation
- `switch` statements

---

## Module 4 — Compilation, Linking, and Debugging

Introduces multi-file C++ projects and the compilation process.

### Topics Covered

- Header files
- Separate compilation
- Object files
- Linking
- Makefiles
- Pseudocode
- Compiler warnings
- Optimization
- Debugging with GDB

The compilation workflow explored is:

```text
Source Code
    ↓
Preprocessing
    ↓
Compilation
    ↓
Assembly
    ↓
Object Files
    ↓
Linking
    ↓
Executable
```
## Command Line Utility — Capstone Project

A multi-function C++ command-line application developed as the capstone project for the Microsoft C++ Programming Fundamentals course.

## Features

- **Temperature Converter** — Celsius to Fahrenheit
- **Text Encrypt/Decrypt** — Caesar cipher-based text shifting
- **Base Converter** — Decimal to Binary and Hexadecimal
- **File Information** — Displays file name, size, and extension
- **Interactive Menu** — Simple text-based navigation and input validation

## Project Structure

```text
CommandLineUtility/
├── includes/
│   └── utility.h
├── main.cpp
├── menu.cpp
├── temperatureConverter.cpp
├── textProcessor.cpp
├── baseConverter.cpp
├── fileInfo.cpp
├── commands.txt
├── functions.txt
├── requirements.txt
└── example.txt
```

### Concepts Used

- Functions and modular design
- Header files and multiple source files
- Input validation and error handling
- Loops and conditional statements
- String manipulation
- Named constants
- C++17 <filesystem>

## Build

```powershell
g++ .\main.cpp .\menu.cpp .\temperatureConverter.cpp .\baseConverter.cpp .\fileInfo.cpp .\textProcessor.cpp -I./includes -std=c++17 -o utility.exe
```

## Run

```powershell
.\utility.exe
```

## Author
Sanjeeth Manikandan