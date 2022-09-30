#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Natural number
 * Return: returns square root of n
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 1)
		return (1);
	else if (i == n || n < 0)
		return (-1);
	else if ((n * 10000) - (i * i) <= 0)
		return (i / 100);
	i++;
	_sqrt_recursion(n);
}

