#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copy a string
 * @dest: Destination string
 * @src: Source String
 * @n: number of used bytes
 * Return: Return concat string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
		printf("THis is I: %d",i);
	}

	return (dest);

}

