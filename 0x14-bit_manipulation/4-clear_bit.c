#include "main.h"

/**
 * clear_bit - function sets value of a bit to 0 at a given index
 * @n: given pointer
 * @index: index of given bit
 * Return: returns 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	if (*n & (1 << index))
		*n ^= (1 << index);

	return (1);
}
