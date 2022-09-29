#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: Input string
 * return: returns length of input string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	return (_print_rev_recursion(s + 1) + 1);
}

