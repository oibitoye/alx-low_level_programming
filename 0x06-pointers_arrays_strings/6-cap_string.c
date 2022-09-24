#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: Input string
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;
	char xter[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] -= 32;
			}
			else
			{
				int j = 0;

				while (j <= 12)
				{
					if (xter[j] == str[i - 1])
					{
						str[i] -= 32;
					}
					j++;
				}
			}
		}
		i++;
	}
	return (str);
}

