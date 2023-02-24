#include "main.h"
/**
*more_numbers - print numbers from 0 14 10x
*Description: function that prints 0 to 14 10x
*Return: 0
*/
void more_numbers(void)
int i;
{
for (i = 0; i <15; i++)
{
if (i > 9)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
else
{
_putchar('0'+i);
}
}
}
