#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers & a new line
 * @separator: Seperator parameter
 * @n: number of integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list item;

	if (separator == NULL)
	{
		separator  = "";
	}

	va_start(item, n);
	while (i < n)
	{
		if (i > 0)
			printf("%s", separator);
		printf("%d", va_arg(item, int));
		i++;
	}
	va_end(a);
	putchar('\n');
}

