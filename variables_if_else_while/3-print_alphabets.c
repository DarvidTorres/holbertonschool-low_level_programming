#include <stdio.h>
/**
*main - main function entry point
*Description: print alphabet lower and upper case
*Return: 0
*/
int main(void)
{
char l = 'a', u = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');
return (0);
}
