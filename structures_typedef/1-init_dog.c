#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*init_dog - function
*@d: parameter
*@name: parameter
*@age: parameter
*@owner: parameter
*Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
