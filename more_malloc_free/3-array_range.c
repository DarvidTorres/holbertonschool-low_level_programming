#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*array_range - function create an array
*@min: parameter
*@max: parameter
*Return: int
*/
int *array_range(int min, int max)
{
int *arr = NULL;
int i;
if (min > max)
{
return (NULL);
}
arr = malloc(((max - min) + 1) * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++, min++)
{
arr[i] = min;
}
return (arr);
}
