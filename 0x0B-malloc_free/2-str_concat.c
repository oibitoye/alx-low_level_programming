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
	int i, j, len1, len2;
	char *con_str;

	i = j = len1 = len2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
			len2++;
	}
	con_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (con_str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			con_str[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; j < len2; j++, i++)
			con_str[i] = s2[j];
	}
	con_str[len1 + len2] = '\0';
	return (con_str);
}

