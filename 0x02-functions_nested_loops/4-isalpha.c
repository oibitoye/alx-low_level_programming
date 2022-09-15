#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: is an integer parameter for the _isalpha function
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

