#include <stdio.h>
#include "main.h"
/**
*_islower - check if c is lowercase
*Description: check for lowercase
*Return: 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
