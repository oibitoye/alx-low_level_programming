#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: Input string
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char xter = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				while (j <= 12)
				{
					if (xter[j] == s[i - 1])
					{
						s[i] -= 32;
					}
					j++;
				}
			}
		}
		i++;
	}
	return (str);
}

