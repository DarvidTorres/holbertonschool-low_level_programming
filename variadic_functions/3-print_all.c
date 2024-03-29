#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - function
*@format: variable
*Return: 0
*/
void print_all(const char * const format, ...)
{
char c;
int i, count = 0;
float f;
char *s;
va_list(ptr);
va_start(ptr, format);
while (format && format[count] != '\0')
{
switch (format[count++])
{
case 'c':
c = (char) va_arg(ptr, int);
printf("%c", c);
break;
case 'i':
i = va_arg(ptr, int);
printf("%d", i);
break;
case 'f':
f = (float) va_arg(ptr, double);
printf("%f", f);
break;
case 's':
s = va_arg(ptr, char*);
if (s == NULL)
{
s = ("(nil)");
}
printf("%s", s);
break;
default:
continue;
}
if (format[count] != '\0')
printf(", ");
}
va_end(ptr);
printf("\n");
}
