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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

	if (str != NULL)
	{
		while (*(str + i) != '\0')
		{
			len = len + i;
			i++;
		}
		/* new_str = malloc((len) * sizeof(char));*/
		new_str = (char *)malloc((sizeof(char) * len) + 1);
		for (j = 0; j < len; j++)
		{
			if (new_str == NULL)
			{
				return (NULL);
			}
			new_str[j] = str[j];
		}
		new_str[len] = '\0';
		return (new_str);
	}
	else
	{
		return (NULL);
	}
}

