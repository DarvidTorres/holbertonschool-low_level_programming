#include "main.h"
/**
*print_last_digit - function selfexplanatory
*@n: variable
*Return: 0
*/
int print_last_digit(int n)
{
int m;
if (n > 0)
{
m = n % 10;
_putchar(m + '0');
}
else if (n == 0)
{
m = 0;
_putchar(m + '0');
}
else
{
m = n % 10 * (-1);
_putchar(m + '0');
}
return (m);
}