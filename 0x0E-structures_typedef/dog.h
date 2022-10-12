#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for Object dog
 * @name: Name of new dog
 * @age: age of new dog
 * @owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *d);

#endif

