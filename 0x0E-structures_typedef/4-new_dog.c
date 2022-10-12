#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - function that creates a new dog.
 * @name: Name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Pointer to new dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int size_of_name;
	int size_of_owner;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	size_of_name = sizeof(name) + 1;
	size_of_owner = sizeof(owner) + 1;
	new_dog->name = malloc(size_of_name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	new_dog->owner = malloc(size_of_owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}

