#include <stdio.h>
/**
*_function_prime - print whether input is prime
*@n: parameter
*@i: parameter
*Return: int
*/
int _function_prime(int n, int i)
{
if (i == n)
{
return (1);
}
else if (n  % i != 0)
{
return (_function_prime(n, i + 1));
}
else
{
return (0);
}
}
/**
*is_prime_number - function input
*@n: parameter
*Return: int
*/
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
else
{
return (_function_prime(n, 2));
}
}
