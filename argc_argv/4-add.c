#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*@argc: argument count
*@argv: argument array
*Return: 0
*/
int main(int argc, char **argv)
{
int n1;
int n2;
int add = 0;
for (n1 = 1; n1 < argc; n1++)
{
for (n2 = 0; argv[n1][n2] != '\0'; n2++)
{
if ((argv[n1][n2] < '0' || argv[n1][n2] > '9')
{
printf("Error\n");
return (1);
}
}
add +=(atoi(argv[n1]));
}
printf("%d\n", 0);
return (0);
}
