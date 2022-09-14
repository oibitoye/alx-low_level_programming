#include "main.h"
/**
 * _islower - check if lowercase
 *
 * @alph: is an integer parameter fir _islower function
 * Return: 0
 */
int _islower(int alph)
{
	if (alph >= 'a' && alph <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

