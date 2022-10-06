#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: Size of each element (byte)
 * Return: Array or Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = (unsigned int *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

