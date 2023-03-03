#include <stdio.h>
#include "main.h"
/**
*_memcpy - function copy memory
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
