#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	va_list items;
	char *s = ", ";
	char *p;

	va_start(items, format);

	while ((format != NULL) && *(format + i) != '\0')
	{
		if (*(format + i) == 's')
		{
			p = va_arg(items, char *);
			p = (p == NULL) ? "(nil)" : p;
			printf("%s", p);
		}
		else if (*(format + i) == 'i')
		{
			printf("%i", va_arg(items, int));
		}
		else if (*(format + i) == 'c')
		{
			printf("%c", va_arg(items, int));
		}
		else if (*(format + i) == 'f')
		{
			printf("%f", va_arg(items, double));
		}
		else
		{
			continue;
		}
		if (*(format + i + 1) != 0)
		{
			printf("%s", s);
		}
		i++;
	}
	putchar('\n');
	va_end(items);
}
