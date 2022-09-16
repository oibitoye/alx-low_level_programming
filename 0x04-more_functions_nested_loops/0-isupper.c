#include "main.h"

/**
 * _isupper - This function checks for uppercase character
 * @c: This is the parameter to be tested
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
	if ('A' <= c && 'Z' >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
