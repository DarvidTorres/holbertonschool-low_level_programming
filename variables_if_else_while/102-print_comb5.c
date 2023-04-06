#include <stdio.h>
/**
* main - function
* combinations of two digit integers without duplicates
*
* Return: 0 on success
*/
int main(void)
{
int first;
int second;
int third;
int fourth;
for (first = '0'; first <= '9'; first++)
{
for (second = '0'; second <= '9'; second++)
{
fourth = second + 1;
third = first;
for (; third <= '9'; third++)
{
for (; fourth <= '9'; fourth++)
{
putchar(first);
putchar(second);
putchar(' ');
putchar(third);
putchar(fourth);
if (first != '9' || second != '8' || third != '9' || fourth != '9')
{
putchar(',');
putchar(' ');
}
}
fourth = '0';
}
}
}
putchar('\n');
return (0);
}
