#include "hash_tables.h"

/**
 * key_index - function generates distributed index
 *
 * @key: key
 * @size: size of hash tables
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
