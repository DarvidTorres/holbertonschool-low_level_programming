#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid - free a 2d-grid
*@grid: matriz
*@height: int
*/
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
{
free(grid[index]);
}
free(grid);
}
