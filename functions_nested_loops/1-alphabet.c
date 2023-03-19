#include "main.h"
/**
*print_alphabet - use _putchar function
*Description: print lowrcase alphabet
*Return: 0
*/
void print_alphabet(void)
{
char l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
}
