# 🐍 Snake Game (C Language – Command Prompt)

## 📄 Project Overview
This project is a **console-based Snake Game** developed in **C language** and designed to run in **Windows Command Prompt** using the **GCC compiler**.

The purpose of this project is to demonstrate how a classic game like Snake can be implemented **purely using core C programming concepts**, without any external graphics libraries.

---

## 👨‍💻 Programmer
**Name:** Jayesh Verma  
**Language Used:** C  
**Platform:** Windows (Command Prompt)  
**Compiler:** GCC  

---

## 🎯 Objective
- To build a working Snake Game using only concepts taught in college
- To understand game logic, memory handling, and array-based movement tracking
- To avoid using external graphics or game engines

---

## 🎮 Game Features
- Snake movement using **W A S D** keys
- Apple (`@`) spawns at random positions
- Snake grows after eating an apple
- Score increases with snake length
- Game over when snake hits its own body
- Option to restart the game after Game Over
- Runs entirely inside **Command Prompt**

---

## 🎮 Controls
| Key | Action |
|----|-------|
| W | Move Up |
| A | Move Left |
| S | Move Down |
| D | Move Right |
| . | Exit Game |

⚠️ **Note:**  
The game reads input **after pressing ENTER**.  
This limitation exists due to standard input handling in C without non-standard libraries.

---

## 🔣 Symbols Used
| Symbol | Meaning |
|------|--------|
| X | Snake Head |
| O | Snake Body |
| @ | Apple (Food) |
| + | Game Boundary |

---

## 🧠 Core Concepts Used
- Arrays (2D & 1D)
- Functions
- Loops
- Conditional statements
- Random number generation (`rand()`, `srand()`)
- Coordinate tracking using arrays
- Manual screen refresh using `system("cls")`

---

## 🛠 Compilation & Execution
Compile the program using:
gcc SNAKE.C
a

---

##⚠️ Limitations
- No graphical interface (text-based only)
- ENTER key required for each move
- Designed specifically for Windows Command Prompt
- Uses basic screen clearing instead of real-time rendering

---

##📌 Project Status
✅ Completed
🔒 No further changes planned for this version

---

##🧩 Note
This project was intentionally built without external tutorials or game libraries, relying only on college-level C programming knowledge and minimal system-level experimentation.

---

##📜 License

This project is created for educational purposes.
