#include "main.h"
/**
 * print_to_98 - This function prints all natural numbers from n to 98
 *		in formatted form.
 * @n: The number to begin the counting from.
 */
void print_to_98(int n)
{
	if (n > 99)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
		_putchar(n);
		_putchar("\n");
	}

	else
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar(n);
		_putchar("\n");
	}
}

