#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: Input struct d
 * @name: Name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

