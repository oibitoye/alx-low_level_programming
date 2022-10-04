#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of chars, and initializes
 * @size: Size of array
 * @c: Input characters
 * Return: array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

