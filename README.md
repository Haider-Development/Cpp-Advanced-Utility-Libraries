# 🚀 C++ Core Utility Libraries & Testing Framework

![C++](https://img.shields.io/badge/C++-17-blue.svg?style=for-the-badge&logo=c%2B%2B)
![Visual Studio](https://img.shields.io/badge/Visual_Studio-2022-purple.svg?style=for-the-badge&logo=visualstudio)
![MIT License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)

A comprehensive, self-contained C++ collection of highly reusable object-oriented programming (OOP) libraries designed to simplify common programming tasks including advanced string manipulation, comprehensive date/time operations, robust input validation, and secure utility functions.

---

## 📂 Project Structure

The repository is organized into a single, clean, and self-contained project structure to ensure zero configuration and seamless compilation out of the box:

`text
My-Cpp-Libraries/           (Root)
│
├── main-test-app/           (Main Project Folder)
│   ├── clsString.h          # Advanced String Manipulation Library
│   ├── clsDate.h            # Comprehensive Date & Time Management Library
│   ├── clsUtil.h            # General Utility & Randomization Functions
│   ├── clsInputValidate.h   # Template-based Robust Input Validation
│   └── Source.cpp           # Main Unified Testing Framework
│
└── README.md                # Documentation

🛠️ Included Libraries & Features

1. 🧵 String Manipulation (clsString.h)
Provides advanced formatting and text processing capabilities:
Tokenizing and splitting strings using custom delimiters.
Case conversion (Upper/Lower/Invert) and trimming spaces.
Word counting, letter counting, and vowel analysis.
Custom string joining and word reversing algorithms.

2. 📅 Date & Time Management (clsDate.h)
A robust engine for handling complex calendar operations:
Validating dates, leap years, and calculating days in months/years.
Date comparison (IsBefore, IsEqual, IsAfter).
Calculating difference between two dates in days (including business/leap days).
Adding/Subtracting days, weeks, months, or decades to existing dates.
Custom date formatting and printing monthly/yearly calendars.

3. 🛡️ Input Validation Template (clsInputValidate.h)
A template-based library (template <class T>) ensuring safe user inputs:
Range validation for numbers and characters (IsNumberBetween).
Type-safe inputs with built-in error handling (ReadNumber).
Date range verification (IsDateBetween).

4. 🧰 General Utility & Randomization (clsUtil.h)
Miscellaneous helper functions for common logic:
Secure pseudo-random number and character generation.
Random encryption/decryption routines (Cipher/Key generation).
Array shuffling and random data filling tools.

🚀 How to Run

git clone [https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git](https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git)

Navigate to main-test-app/ and open the project inside Visual Studio.
Press Ctrl + F5 or click Run/Start to compile and run the unified testing dashboard in Source.cpp.

📄 License
This project is licensed under the MIT License - see the local files for details.
