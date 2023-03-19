#include<stdio.h>
/**
*main - main function
*description: print two digits
*return: 0
*/
int main (void)
{
int n = '0', m = '9';
while (n != '9')
{
putchar(n);
if (n != m)
{
putchar(m);
putchar(',');
putchar(' ');
}
n++;
m--;
}
putchar('\n');
return (0);
}
