#include <stdio.h>
#include "main.h"
/**
*_memset - function fills memory
*@s: parameter
*@b: parameter
*@n: parameter
*Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
