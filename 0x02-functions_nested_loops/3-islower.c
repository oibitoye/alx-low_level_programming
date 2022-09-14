#include "main.h"
/**
 * main - Main entry point
 * int _islower - check if lowercase
 * Description: check for lowercase character
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

