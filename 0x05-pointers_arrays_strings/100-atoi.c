#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: String to be converted
 * Return: zero or converted string
 */

int _atoi(char *s)
{
	int n = 0;
	int y = 1;

	do {
		if (*s >= '0' && *s <= '9')
		{
			int temp = (*s - '0');

			n = n * 10 + temp;
		}
		else if (*s == '-')
		{
			y *= -1;
		}
		else if (n > 0)
		{
			break;
		}
	} while (*s++);

	return (n * y);
}

