#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: Input string
 * Return: encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char alph[] = "aAeEoOtTlL";
	char numb[] = "4433007711";

	while (str[i])
	{
		for (j = 0; j <= 9; j++)
		{
			if (alph[j] == str[i])
			{
				str[i] = numb[j];
			}
		}
		i++;
	}
	return (str);
}

