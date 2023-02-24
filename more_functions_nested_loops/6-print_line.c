#include "main.h"
/**
*print_line - print lines depending on input
*@n: parameter
*/
void ptint_line(int n)
{
int l;
if (n > 0)
{
for (l = 0; l < n; l++)
_putchar('_');
}
_putchar('\n');
}
