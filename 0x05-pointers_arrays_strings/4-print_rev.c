#include "main.h"
/**
 * print_rev - function prints a string in reverse with by a new line
 * @s: Input string
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

