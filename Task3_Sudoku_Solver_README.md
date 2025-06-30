# Sudoku Solver

**Internship Program:** CodeAlpha C++ Programming Internship  
**Task:** Task 3 – Sudoku Solver using Backtracking

## Overview

This project solves a standard 9x9 Sudoku puzzle using a recursive backtracking algorithm. It takes a partially filled grid and returns a completed solution if possible.

## Features

- **2D Grid Representation:** Uses a matrix to represent the Sudoku puzzle.
- **Backtracking Algorithm:** Recursive method to test valid number placements.
- **Constraint Checking:** Ensures no repetition in rows, columns, or 3x3 blocks.
- **Output:** Prints solved puzzle or failure message.

## How to Compile and Run

### Prerequisites
- C++ compiler (e.g., g++)

### Steps
```bash
g++ sudoku_solver.cpp -o sudoku_solver
./sudoku_solver
```

## Example Usage
```
Original Grid:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
------+-------+------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
------+-------+------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Solved Grid:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
```

## Future Enhancements

- Allow user input for custom puzzles.
- Add GUI using SFML or Qt.
- Generate puzzles with difficulty levels.