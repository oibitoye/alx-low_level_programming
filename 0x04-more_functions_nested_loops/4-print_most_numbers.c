#include "main.h"
/**
 * print_most_numbers - Funtion to print 0 - 9 except 2 & 4
 * Return: returns void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9', i++)
	{
		if (i != '2' || i != '4')
		{
			_putchar(i);
		}
		if (i == '9')
		{
			_putchar('\n');
		}
	}
}
