#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: Void or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *nmem;

	if (old_size == new_size)
	{
		return (ptr);
	}
	nmem = realloc(ptr, new_size);
	if (nmem == NULL)
	{
		return (NULL);
	}
	return (nmem);
}

