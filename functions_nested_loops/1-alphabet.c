#include "main.h"
/**
*print_alphabet - use _putchar function
*Description: print lowrcase alphabet
*Return: 0
*/
void print_alphabet(void)
{
char i = 'a';
int n = 0;
while (n < 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
n++;
}
}
