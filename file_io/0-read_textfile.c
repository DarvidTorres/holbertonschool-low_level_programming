#include "main.h"
/**
* read_textfile - function read a file
* @filename: variable char
* @letters: variable size_t
* Return: size_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int rt, fr, wr;
char *c;
if (filename == NULL)
return (0);
rt = open(filename, O_RDONLY);
if (rt == -1)
return (0);
c = malloc(sizeof(char) * (letters));
if (c == NULL)
return (0);
fr = read(rt, c, letters);
wr = write(STDOUT_FILENO, c, fr);
close(rt);
return (wr);
}
