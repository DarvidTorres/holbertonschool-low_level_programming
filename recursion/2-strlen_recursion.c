#include <stdio.h>
/**
*_strlen_recursion - return length of string
*@s: parameter
*Return: 0
**/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
