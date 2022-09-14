#include "main.h"
/**
 * print_sign - print sign
 * @numb: An integer parameter for the function
 * Return: 0
 */
int print_sign(int numb)
{
	if (numb > 0)
	{
	_putchar('+');
	return (1);
}
	else if (numb < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}

