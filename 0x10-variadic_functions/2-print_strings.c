#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: Strings separator
 * @n: the number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list items;
	char *item;

	if (separator == NULL)
		separator = "";

	va_start(items, n);
	while (i < n)
	{
		if (i > 0)
			printf("%s", separator);
		item = va_arg(items, char *);

		if (item == NULL)
			printf("(nil)");
		else
			printf("%s", item);
		i++;
	}
	va_end(items);
	putchar('\n');
}

