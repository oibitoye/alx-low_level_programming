#include "main.h"
/**
 * _strlen - get length og string
 * @s: Input string
 * Return: int
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

/**
 * rev_string - function prints a string in reverse with
 * @s: Input string
 * Return: int
 */

void rev_string(char *s)
{
	int i;

	for (i = _strlen(s); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

