#include <stdio.h>
#include "main.h"
/**
*_strchr - function locate a char
*@s: parameter
*@c: parameter
*Return: char
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
