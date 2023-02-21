#include<stdio.h>
/**
*main: functio main entry point
*Description: alphabet nor q e
*Return: 0
*/
int main(void)
{
char l = 'a';
while (l <= 'z')
{
if (l != 'e' && l != 'q')
{
putchar(l);
}
l++;
}
putchar('\n');
return (0);
}
