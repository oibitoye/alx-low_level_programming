#include "main.h"

/**
 * times_table - This function prints the 9 times table (starting from 0)
 * The function takes no parameter
 */
void times_table(void)
{
	int num1 = 0;
	int num2 = 1;
	int product;

	for (num1; num1 < 10; num1++)
	{
		_putchar('0');
		for (num2; num2 < 10; num2++)
		{
			_putchar(',');
			_putchar(' ');
			product = num1 * num2;

			if (product < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

