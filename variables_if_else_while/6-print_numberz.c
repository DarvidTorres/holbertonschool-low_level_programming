#include<stdio.h>
/**
*main - function main entry point
*Description: print digits using putchar
*Return: 0
*/
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
