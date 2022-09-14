#include "main.h"
/**
 * main - Main entry point
 * print_alphabet_x10 - print 10 alph
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
