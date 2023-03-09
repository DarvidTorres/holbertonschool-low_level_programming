#include "main.h"
/**
*_strncat - function to concatenate strings
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: 0;
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, lenD = 0;
while (dest[i++])
lenD++;
for (i = 0; src[i] && i < n; i++)
dest[lenD++] = src[i];
return (dest);
}
