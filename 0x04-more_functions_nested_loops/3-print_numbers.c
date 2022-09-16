#include "main.h"
/**
 * print_numbers - Function prints numbers from 0 - 9
 * Returns: Printed numbers
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		if (i == '9')
		{
			_putchar('/n');
			return (void);
		}
	}
}
