#include <stdio.h>
/**
*main - function main is entry point
*Description: print alphabet
*Return: 0
*/
int main(void)
{
char l = 'a';
while (l <= 122)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
