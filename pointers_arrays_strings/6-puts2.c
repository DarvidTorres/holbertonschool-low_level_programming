#include "main.h"
/**
*puts2 - function prints every other character of a string
*@str: parameter string to be prited
*/
void puts2(char *str)
{
int i = 0, len = 0;
while (str[i++])
len++;
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
