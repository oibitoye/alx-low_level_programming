#include "main.h"
/**
 * print_most_numbers - Funtion to print 0 to 9 except 2 and 4
 * Return: returns void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
		if (i == 57)
		{
			_putchar('\n');
		}
	}
}

