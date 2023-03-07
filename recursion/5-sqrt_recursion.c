#include <stdio.h>
/**
*_function - function
*@i: parameter
*@n: parameter
*Return: int
**/
int _function(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
else
{
return (_function(n, i + 1));
}
}
/**
*_sqrt_recursion - sqrt function
*@n: parameter
*Return: int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_function(n, 0));
}
