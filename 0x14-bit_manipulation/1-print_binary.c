#include "main.h"

/**
 * print_binary - function prints binary representation of a number.
 * @n: input number.
 * Return: returns void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = i << 63;
	for (; !(n & i); )
	{
		i = i << 1;
	}
	for (; i;)
	{
		_putchar(n & i ? '1' : '0');
		i = i << 1;
	}
}
