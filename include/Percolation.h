// Percolation.h
#pragma once
#include <vector>
#include "raylib.h"

class Percolation {
private:
    // Add any private members you need

    std::vector<std::vector<bool>> grid; 
    int gridSize;
    int openSites;
    
    

public:
    // Creates n-by-n grid, with all sites initially blocked
    Percolation(int n);

    // Opens the site (row, col) if it is not open already
    void open(int row, int col);

    // Is the site (row, col) open?
    bool isOpen(int row, int col) const;

    // Is the site (row, col) full?
    bool isFull(int row, int col) const;

    // Returns the number of open sites
    int numberOfOpenSites() const;

    // Does the system percolate?
    bool percolates() const;

    // Draw grid
    void DrawGrid();
};