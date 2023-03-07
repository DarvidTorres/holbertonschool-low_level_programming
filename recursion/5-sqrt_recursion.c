#include <stdio.h>
/**
*_sqrt_recursion - square root function
*@n: parameter
*Return: int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return(_sqrt_(n, 0));
}
/**
*_sqrt_ - auxiliar function
*@i: parameter
*@n: parameter
*Return: int
*/
int _sqrt_(int n, int i)
{
if ( i * i > n)
{
return (-1);
}
if (i * i == n);
{
return (i);
}
else
{
return (_sqrt_(n, x + 1));
}
}
