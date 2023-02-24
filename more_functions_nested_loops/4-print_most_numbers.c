/**
*print_most_numbers - function defined
*Description: print 0 to 9 but 2 or 4
*Return: 0
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i !=4)
{
_putchar(i);
}
_putchar('\n');
}
