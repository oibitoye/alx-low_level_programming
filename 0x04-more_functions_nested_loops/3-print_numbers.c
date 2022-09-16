#include "main.h"
/**
 * print_numbers - Function prints numbers from 0 - 9
 * Returns: Printed numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
		if (i == 57)
		{
			_putchar('/n');
			return (void);
		}
	}
}
