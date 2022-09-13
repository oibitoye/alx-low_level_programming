#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print alphabets in lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'z';
	do {
		putchar(alph);
		alph--;
	} while (alph >= 'a');
putchar('\n');
return (0);
}
