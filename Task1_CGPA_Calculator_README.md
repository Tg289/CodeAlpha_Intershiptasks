# CGPA Calculator

**Internship Program:** CodeAlpha C++ Programming Internship  
**Task:** Task 1 – CGPA Calculator

## Overview

This project is a command-line based CGPA (Cumulative Grade Point Average) calculator. It takes user input for course grades and credit hours, then computes and displays the final CGPA.

## Features

- **Course Input:** Accepts grade points and credit hours for each course.
- **CGPA Calculation:** Computes CGPA using weighted average formula.
- **Detailed Display:** Shows input data and final CGPA result.

## How to Compile and Run

### Prerequisites
- C++ compiler (e.g., g++)

### Steps
```bash
g++ cgpa_calculator.cpp -o cgpa_calculator
./cgpa_calculator
```

## Example Usage
```
Enter the number of courses: 3

--- Course 1 ---
Grade points: 3.5
Credit hours: 3

--- Course 2 ---
Grade points: 4.0
Credit hours: 4

--- Course 3 ---
Grade points: 2.5
Credit hours: 2

Overall CGPA: 3.50
Total Credits: 9.00
```

## Future Enhancements

- Support for letter grades conversion.
- Saving data to a file.
- GUI interface for better usability.