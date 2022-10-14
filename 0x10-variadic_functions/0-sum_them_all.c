#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Number of parameters
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list item;

	va_start(item, n);
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		sum += var_arg(item, int);
		i++;
	}
	va_end(item);
	return (sum);
}

