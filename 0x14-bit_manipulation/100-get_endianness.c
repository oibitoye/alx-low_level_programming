#include "main.h"

/**
 * get_endianness - function checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	if ((char *)&1)
		return (1);

	return (0);
}
