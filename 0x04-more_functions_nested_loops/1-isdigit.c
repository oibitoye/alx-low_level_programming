#include "main.h"

/**
 * _isdigit - This function check for the presence of 0-9 numbers
 * @c: Parameter that contains what to be tested
 * Return: 1 if positive
 */

int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
