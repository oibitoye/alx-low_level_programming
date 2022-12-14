#include "main.h"

/**
 * binary_to_uint - function converts a binary to unsigned int
 * @b: binary input
 * Return: returns unsigned integer value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int bin_num = 0, len = 0;

	if (!b)
		return (0);


	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bin_num = 1; len >= 0; len--, bin_num *= 2)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			i += bin_num;

	}

	return (i);
}
