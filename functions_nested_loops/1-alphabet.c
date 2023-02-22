#include "main.h"
/**
*_putchar - writes the character c to stdout
*Description: print lowrcase alphabet
*Return: 0
*/
void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
