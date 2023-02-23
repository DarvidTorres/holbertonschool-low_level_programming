#include "main.h"
/**
*print_alphabet - use _putchar function
*Description: print lowrcase alphabet
*Return: 0
*/
void print_alphabet(void)
{
char i = 'a';
int n;
while (n < 10)
{
n = 0;
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
n++;
}
}
