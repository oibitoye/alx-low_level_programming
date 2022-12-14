#include "main.h"

/**
 * print_binary - function prints binary representation of a number.
 * @n: input number.
 * Return: returns void.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(48);
	}
	else
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + 48);
	}
}

