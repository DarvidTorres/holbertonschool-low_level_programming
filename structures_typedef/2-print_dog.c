#include <stdio.h>
#include "dog.h"
/**
*print_dog - print dog struct
*@d: parameter
*Return: 0
*/
void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
{
print("Name: (nil)\n");
}
else
{
print("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}
