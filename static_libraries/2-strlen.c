#include "main.h"
/**
*_strlen - function that returns the length of a string
*@s: parameter
*Return: length
*/
int _strlen(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
;
return (a);
}
