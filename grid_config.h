#ifndef GRID_CONFIG_H
#define GRID_CONFIG_H

#define GRID_WIDTH 80
#define GRID_HEIGHT 45
#define RADIUS 10

#define NUM_CELLS 10000

bool ColorEquals(Color c1, Color c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

#endif // GRID_CONFIG_H


