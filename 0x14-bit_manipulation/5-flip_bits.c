#include "main.h"

/**
 * flip_bits - returns num of bits flips needed
 * @n: first number
 * @m: 2nd number
 * Return: returns number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned int num_bit = n ^ m;

	while (num_bit)
	{
		if ((n & 1) != (m & 1))
			x++;
		num_bit >>= 1;
	}

	return (x);
}
