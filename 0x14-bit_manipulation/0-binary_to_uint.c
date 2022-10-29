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

	if (b == NULL)
		return (0);


	for (len = 0; b[len] != '\0'; len++)
		;

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			i += 1 << bin_num;

		bin_num++;
	}

	return (i);
}
