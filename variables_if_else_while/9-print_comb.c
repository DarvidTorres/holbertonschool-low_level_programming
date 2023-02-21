#include<stdio.h>
/**
*main - main function entry point
*Description: print pairs of digits
*Return: 0
*/
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
