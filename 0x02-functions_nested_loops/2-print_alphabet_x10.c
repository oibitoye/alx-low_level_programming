#include "main.h"
/**
 * print_alphabet_x10 - This function prints lowercase alphabets in 10 times
 * Description: The last digit
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alph;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
