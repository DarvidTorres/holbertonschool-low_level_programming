#include "main.h"
/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a 0,1 string
* Return: the converted number.
**/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0, mult = 1;
int len;
if (!b)
return (0);
for (len = 0; b[len];)
len++;
for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
return (0);
num += (b[len] - '0') * mult;
mult *= 2;
}
return (num);
}
