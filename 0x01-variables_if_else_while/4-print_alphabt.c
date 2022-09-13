#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print alphabets in lowercase except Q and E
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	do {
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	} while (alph <= 'z');
putchar('\n');
return (0);
}
