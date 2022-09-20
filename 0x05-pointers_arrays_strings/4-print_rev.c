#include <string.h>
#include "main.h"
/**
 * print_rev - function prints a string in reverse with by a new line
 * @s: Input string
 * Returns: int
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

