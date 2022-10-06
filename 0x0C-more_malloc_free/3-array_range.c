#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: Minimun value
 * @max: Maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (max < min)
		return (NULL);
	arr = malloc(((max - min) * sizeof(int)) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (max >= min)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

