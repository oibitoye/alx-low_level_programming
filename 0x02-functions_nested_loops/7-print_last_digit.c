#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number.
 * @numb: Parameter that serves as the number to be tested
 * Return: the value of the last digit of the tested number
 */
int print_last_digit(int numb)
{
	int lastDigit = numb % 10;


	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
