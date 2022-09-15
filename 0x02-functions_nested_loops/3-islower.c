#include "main.h"
/**
 * _islower - check if lowercase character is present
 *
 * @c: is an integer parameter for _islower function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

