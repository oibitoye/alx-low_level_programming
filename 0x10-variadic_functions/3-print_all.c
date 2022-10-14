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
		switch (*(format + i))
		{
			case 's':
				p = va_arg(items, char *);
				p = (p == NULL) ? "(nil)" : p;
				printf("%s", p);
				break;

			case 'i':
				printf("%i", va_arg(items, int));
				break;

			case 'c':
				printf("%c", va_arg(items, int));
				break;

			case 'f':
				printf("%f", va_arg(items, double));
				break;

			default:
			i++;
			continue;
		}
		if (*(format + i + 1) != 0)
			printf("%s", s);
		i++;
	}
	putchar('\n');
	va_end(items);
}
