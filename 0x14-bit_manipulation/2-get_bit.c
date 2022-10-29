#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: input.
 * @index: index of bit
 * Return: returns value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index < 64 && n == 0)
		return (0);

	while (i <= 63)
	{
		if (index == i)
		{
			return (n & 1);
		}
		n >>= 1;
		i++;
	}

	return (-1);
}
