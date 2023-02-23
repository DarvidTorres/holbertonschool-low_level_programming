#include <stdio.h>
#include "main.h"
/**
*print_last_digit - function selfexplanatory
*@n: variable
*Return: 0
*/
int print_last_digit(int n)
{
int l = 0;
l = n % 10;
if (n < 10)
{
l = l * -1;
_putchar(l + '0');
return (l);
}
else
{
_putchar(l + '0');
return (l);
}
}
