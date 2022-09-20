#include "main.h"
/**
 * print_rev - function prints a string in reverse with by a new line
 * _strlen - get length og string
 * @s: Input string
 * Returns: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

