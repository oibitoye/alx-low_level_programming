#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @src: Source string
 * @dest: Destination String
 * @n: number of bytes to copy
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int len = 0;
	int i = 0;

	while (dest[count] != '\0')
	{
		count++;
		len++;
	}

	while (i < n && (src[i] != '\0'))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}

