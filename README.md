# Programming Fundamentals II Labs

This repository contains a collection of C++ programming labs completed for **Programming Fundamentals II** at the University of North Texas.  
Each lab demonstrates key object-oriented programming and problem-solving concepts implemented and tested on the **CSE Linux servers**.

---

## Overview

These labs progressively cover topics such as:

- Exception handling (try/catch and runtime errors)
- Class design and inheritance
- File input/output and data processing
- Recursion and mathematical computation
- STL containers (`map`)
- Modular program design and function decomposition
- Basic geometry calculations
- Object-oriented modeling with constructors, mutators, and accessors

---

## Lab Summaries

### Divide by Zero Exception
Program reads two integers (`userNum` and `divNum`), divides them, and handles exceptions:
- **Runtime error** when dividing by zero  
- **ios_base::failure** when invalid input is entered
  
---

### Time Class
Implements a `Time` class with attributes for hours, minutes, and seconds.  
Displays elapsed time between two `Time` objects, adjusting for negatives.

---

### Employee and ProductionWorker Classes
Demonstrates inheritance and encapsulation by designing:
- `Employee` class (name, number, hire date)
- `ProductionWorker` subclass (shift, hourly pay)
Shows the use of constructors, accessors, and mutators.

---

### Recursive Summation
Implements a recursive function that calculates the sum of integers from `1` to `n`.

---

### Student Grades Map
Uses a `map<string, double>` to manage student names and grades.  
Allows the user to read, modify, and update grades dynamically.

---

### File Statistics Program
Reads numeric data from a text file and computes:
- Lowest number
- Highest number
- Total and average

Demonstrates file I/O, arrays, and aggregation.

---

### Geometry Calculator
Menu-driven program that computes areas for:
- Circle
- Rectangle
- Triangle

Includes input validation for negative values and out-of-range menu options.

---

### Car Class Simulation
Implements a `Car` class that models:
- Year, make, and current speed  
- `accelerate()` and `brake()` functions to modify speed

Demonstrates object behavior through multiple method calls.

---

## Tools and Environment
- **Language:** C++  
- **Environment:** CSE Linux Servers (UNT Engineering)  
- **Version Control:** GitLab → Mirrored to GitHub  
- **IDE:** Visual Studio Code  

---


