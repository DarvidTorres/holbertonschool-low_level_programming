#include "main.h"
/**
*print_alphabet - use _putchar function
*Description: print lowrcase alphabet
*Return: 0
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
 _putchar(c);
}
_putchar('\n');
i++;
}
}
