#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - function
*@separator: char const
*@n: int
*Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
if (separator && i < n - 1)
{
printf("%d%s", va_arg(ptr, int), separator);
}
else
{
printf("%d", va_arg(ptr, int));
}
}
va_end(ptr);
printf("\n");
}
