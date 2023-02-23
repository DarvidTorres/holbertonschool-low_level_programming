#include "main.h"
/**
*print_alphabet_x10 - function to return value
*Desciption: print alphabet 10x
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
