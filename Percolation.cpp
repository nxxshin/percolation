#include "include/Percolation.h"
#include <iostream>

Percolation::Percolation(int n) : gridSize(n) {
    grid.resize(n, std::vector<bool>(n, false));
};

void Percolation::open(int row, int col) {
    row = rand() % gridSize; 
    col = rand() % gridSize;
    while (grid[row][col] == true) {
        row = rand() % gridSize; 
        col = rand() % gridSize;
    }
    if (grid[row][col] == false) {grid[row][col] = true;}
    if (row = 0 && col == 0) {return;};
}

void Percolation::DrawGrid() {
    int size = 20;
    
   
    for (int y = 0; y < gridSize; y++) {
        for (int x = 0; x < gridSize; x++) {
            Color color = BLACK;
            if (grid[y][x] == true) {color = BLUE;};
            DrawRectangle(x * size, y * size, size, size, color);   
            DrawRectangleLines(x * size, y * size, size, size, WHITE);
        }
    }
}