#include <stdio.h>
/**
*_pow_recursion - return powered integer
*@x: parameter
*@y: parameter
*Return: int
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
