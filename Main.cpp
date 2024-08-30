#include <stdio.h>
#include <stdlib.h>
#include "include/raylib.h"
#include "include/Percolation.h"
#include "include/PercolationStats.h"

int main(void)
{
    // Initialization

    const int screenWidth = 800;
    const int screenHeight = 450;


    InitWindow(screenWidth, screenHeight, "Conway's Game of Life");

    SetTargetFPS(60); 

    // Percolation main function

    const int gridSize = 20;
    const int trials = 1;

    // Percolation Initialization
    Percolation percolationi(20);
    

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
   
        // TODO: Update your variables here

        
        // Draw

       
      
        BeginDrawing();

        ClearBackground(BLACK);

        percolationi.DrawGrid();
        percolationi.open(0, 0);
       
            DrawFPS(10, 10);

        
          
        EndDrawing();
}

    CloseWindow(); 
    return 0;
}