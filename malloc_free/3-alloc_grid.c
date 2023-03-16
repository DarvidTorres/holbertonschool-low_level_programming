#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - returns a pointer to a 2n-int-array
*@width: parameter
*@height: parameter
*Return: int
*/
int **alloc_grid(int width, int height)
{
int **matriz;
int i, j;
if (width <= 0)
{
return (NULL);
}
if (height <= 0)
{
return (NULL);
}
matriz = (int **) malloc(height * sizeof(int *));
if (matriz == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
matriz[i] = (int *) malloc(width * sizeof(int));
if (matriz[i] == NULL)
{
i = 0;
while (i < width)
{
free(matriz[i]);
i++;
}
free(matriz);
return (NULL);
}
for (j = 0; j < width; j++)
{
matriz[i][j] = 0;
}
}
return (matriz);
}
