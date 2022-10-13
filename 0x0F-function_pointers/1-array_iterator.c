#include <stdio.h>
#include "function_pointers.h"

/**
 * array_itertor - executes a function given as a parameter 
 * @array: array param
 * @size: size param
 * @action: action param
 * Return: returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULLi
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

