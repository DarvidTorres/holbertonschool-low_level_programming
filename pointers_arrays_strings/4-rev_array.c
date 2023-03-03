#include "main.h"
/**
*reverse_array - reverse an integer array
*@a: parameter
*@n: parameter
*Return: 0;
*/
void reverse_array(int *a, int n)
{
int z, i;
for (i = n - 1; i >= n / 2; i--)
{
z = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = z;
}
}
