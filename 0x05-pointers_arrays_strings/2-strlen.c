#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: returns the lenght of string
 */

int _strlen(char *s)
{
	int length;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}

