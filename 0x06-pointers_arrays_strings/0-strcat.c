#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len_dest = 0;

	while (dest[i])
	{
		len_dest++;
		i++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len_dest++] = src[i];
	}
	return (dest);
}

