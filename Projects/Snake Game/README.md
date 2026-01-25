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

## ⚠️ Limitations
- This is a **console-based** application and does not include any graphical user interface.
- Player input is **ENTER-based**, as the program uses standard C input functions.
- The game uses manual screen clearing (`system("cls")`), which may cause minor flickering.
- Designed specifically for **Windows Command Prompt**; behavior may differ on other platforms.
- No sound effects or advanced animations are included.

---

## 📌 Project Status
- **Status:** Completed ✅
- This version of the project is considered **final**.
- No further features or enhancements are planned for this source code.
  
---

## 📜 License
This project is released for **educational and learning purposes** only.

- Free to view, study, and reference.
- Not intended for commercial use.
