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
 * puts_half - prints the last half of a string
 * @s: Input string
 * Return: int
 */

void puts_half(char *s)
{
	int len = _strlen(s);
	int i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(s[i]);
		}
	else
	{
		for (i = len / 2 + 1; i < len; i++)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}

