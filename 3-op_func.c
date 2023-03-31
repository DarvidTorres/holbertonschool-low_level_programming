#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
*get_op_func - function
*@s: char
*Return: int
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
while (ops[i].op && strlen(s) == 1)
{
if (*s == *ops[i].opp)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
