#include<stdio.h>
/**
*main - function main entry point
*Description: reverse alph
*Return: 0
*/
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
