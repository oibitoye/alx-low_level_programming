#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to new space
 * @str: String to be duplicated
 * Return: returns new pointer
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int len = 0;

	if (str != NULL)
	{
		while (*(str + i) != '\0')
		{
			len = len + i;
			i++;
		}
		new_str = malloc((len - 1) * sizeof(char));
		for (i = 0; i < len; i++)
		{
			new_str[i] = *(str + i);
		}
		return (new_str);
	}
	else
	{
		return (NULL);
	}
}

