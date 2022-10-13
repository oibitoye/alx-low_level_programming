#include <stdio>

/**
 * print_name - A function that calls a function
 * @name: first param
 * @f: function param
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}

