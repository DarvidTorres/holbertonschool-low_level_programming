#include<stdio.h>
/**
*main - function main entry point
*Description: print 16-base numbers
*Return: 0
*/
int main(void)
{
char n = '0', ch = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
