# 🐍 Snake-Water-Gun Game (C)

A simple command-line implementation of the classic **Snake-Water-Gun** game written in C. This game is similar to Rock-Paper-Scissors, where each choice wins against one and loses against another.

---

## 📌 Game Rules

| Choice   | Beats    | Loses To |
| -------- | -------- | -------- |
| Snake 🐍 | Water 💧 | Gun 🔫   |
| Water 💧 | Gun 🔫   | Snake 🐍 |
| Gun 🔫   | Snake 🐍 | Water 💧 |

---

## 🎮 How It Works

* The player inputs a number:

  * `0` → Snake 🐍
  * `1` → Water 💧
  * `2` → Gun 🔫
* The computer randomly selects a number between 0–2.
* The program compares both choices and prints the result.

---

## ⚙️ Features

* Randomized computer choice using `rand()`
* Input validation with retry prompt
* Clear win/lose/draw messages
* Simple and beginner-friendly C code

---

## 🧑‍💻 How to Run

### 1. Compile the program

```bash
gcc game.c -o game
```

### 2. Run the executable

```bash
./game
```

---

## 📷 Example Output

```
Choose 0 for snake, 1 for water and 2 for gun :- 2
The player chose 2
The computer choose the number 0
Player wins (The Snake was shot dead)
```

---

## 🛠️ Requirements

* C Compiler (GCC recommended)
* Standard libraries:

  * stdio.h
  * stdlib.h
  * time.h

---

## 🚀 Possible Improvements

* Add multiple rounds with score tracking
* Convert numeric input to string labels (Snake/Water/Gun)
* Add ASCII art or UI enhancements
* Implement multiplayer mode
* Handle invalid input more robustly (non-integer cases)

---

## 📄 License

This project is open-source and free to use for learning purposes.

---

## ✨ Author

Created by *[aalindmukati]*

---
