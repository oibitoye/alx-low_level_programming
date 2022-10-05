#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: First string
 * @s2: 2nd string
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2 = 0;
	char *con_str;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	con_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (con_str == NULL || s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		con_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		con_str[i] = s2[j];
	}
	con_str[len1 + len2] = '\0';
	return (con_str);
}

