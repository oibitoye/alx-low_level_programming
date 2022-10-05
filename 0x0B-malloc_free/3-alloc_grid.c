#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dim array of int
 * @width: Width of the array
 * @height: Height of the array
 * Return: Array or Null
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arr[i]);
				free(arr);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

