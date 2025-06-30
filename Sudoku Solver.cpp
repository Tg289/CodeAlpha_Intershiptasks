                                                        //CodeAlpha_Sudoku Solver//
#include <iostream>
#include <vector>

const int N = 9; 
void printGrid(const std::vector<std::vector<int>>& grid) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            std::cout << grid[row][col] << " ";
            if ((col + 1) % 3 == 0 && col != N - 1) {
                std::cout << "| ";
            }
        }
        std::cout << std::endl;
        if ((row + 1) % 3 == 0 && row != N - 1) {
            std::cout << "------+-------+------" << std::endl;
        }
    }
}
bool isSafe(std::vector<std::vector<int>>& grid, int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }
    for (int x = 0; x < N; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }
    return true;
}
bool findEmptyCell(std::vector<std::vector<int>>& grid, int& row, int& col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}
bool solveSudoku(std::vector<std::vector<int>>& grid) {
    int row, col;
    if (!findEmptyCell(grid, row, col)) {
        return true; 
    }
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num; 
            if (solveSudoku(grid)) {
                return true;
            }

            grid[row][col] = 0;
        }
    }
    return false; // No number worked, trigger backtracking
}

int main() {
    std::vector<std::vector<int>> sudokuGrid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    std::cout << "Original Sudoku Grid:\n";
    printGrid(sudokuGrid);
    std::cout << "\nAttempting to solve...\n\n";

    if (solveSudoku(sudokuGrid)) {
        std::cout << "Solved Sudoku Grid:\n";
        printGrid(sudokuGrid);
    } else {
        std::cout << "No solution exists for this Sudoku puzzle." << std::endl;
    }

    return 0;
}
