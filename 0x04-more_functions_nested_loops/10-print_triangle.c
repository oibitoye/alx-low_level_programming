#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of triangle
 * Return: return 0
 */

void print_triangle(int size)
{
	int i;
	int j = 0;
	int gap;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			gap = (size - i) - 1;
			while (j < size)
			{
				if (gap > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			j = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
