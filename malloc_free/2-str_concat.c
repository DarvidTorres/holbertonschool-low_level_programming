#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*str_concat - concatenate strings
*@s1: string
*@s2: string
*Return: 0
*/
char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int size;
int size1 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size = strlen(s1) + strlen(s2);
p = malloc(sizeof(char) * size + 1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
p[i] = s1[i];
size1++;
}
for (i = 0; s2[i]; i++)
{
p[size1++] = s2[i];
}
return (p);
}
