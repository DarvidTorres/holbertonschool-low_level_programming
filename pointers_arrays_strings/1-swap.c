#include "main.h"
/**
*swap_int - function that swaps two integers
*@a: integer
*@b: integer
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
