#include "main.h"

/**
 * get_endianness - function checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *temp = (char *)&x;

	if (*temp)
		return (1);

	return (0);
}
