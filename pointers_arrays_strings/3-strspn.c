#include <stdio.h>
#include "main.h"
/**
*_strspn - function get length of substring
*@s: parameter
*@accept: parameter
*Return: usngined int
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (i);
}
