#include "hash_tables.h"

/**
 * hash_djb2 - function generates random number through
 * given string
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int cter;

	hsh = 5381;
	while ((cter = *str++))
	{
		hsh = ((hsh << 5) + hsh) + cter; /* hash * 33 + c */
	}
	return (hsh);
}
