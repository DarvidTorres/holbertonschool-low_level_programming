#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - function print name
*@name: char variable
*@f: void variable
*Retchar variabl
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
