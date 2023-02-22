#include "main.h"
/**
*print_alphabet_x10 - function to return value
*Desciption: print alphabet 10x
*Return: 0
*/
void print_alphabet_x10(void);
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
}
}
