#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - function
*@b: parameter
*Return: 0
*/
void *malloc_checked(unsigned int b)
{
int *arr = NULL;
arr = malloc(b);
if (arr == NULL)
{
exit(98);
}
return (arr);
}
