# 🔑 Keylogger in C++

> ⚠️ **Disclaimer**: This project is for **educational and ethical research purposes only**. Unauthorized use of this software to monitor or record others without their knowledge and consent may violate local, state, and federal laws. The developer is not responsible for any misuse of this tool.

## 📌 Description

This is a simple keylogger written in C++ for learning purposes. It captures keystrokes on a Windows system and logs them to a file. The project demonstrates low-level keyboard event hooking using the Windows API.

## 🧰 Features

- Hooks keyboard events system-wide
- Logs keystrokes to a log.txt file
- Lightweight and minimal footprint
- Written in C++ with direct WinAPI calls

## 📂 Files

- `keylogger.cpp` - Main source file with keylogger logic
- `log.txt` - Output file where keystrokes are logged (created at runtime)

## ⚙️ Requirements

- Windows OS
- C++ Compiler (MSVC or MinGW recommended)
- Admin privileges (for broader hook access)

## 🛠️ Build Instructions

1. Clone the repository:
```bash
   git clone https://github.com/shaun2006/keylogger-in-c-plus-plus.git
   cd keylogger-in-c-plus-plus
   g++ keylogger.cpp
   a.exe
```
enjoy
