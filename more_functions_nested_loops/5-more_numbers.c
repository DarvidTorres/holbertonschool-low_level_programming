#include "main.h"
/**
*more_numbers - print numbers from 0 14 10x
*Description: function that prints 0 to 14 10x
*Return: 0
*/
void more_numbers(void)
{
int i, k = 0;
while (k < 10)
{
for (i = '0'; i < 15; i++)
{
_putchar(i);
}
k++;
_putchar('\n');
}
}
