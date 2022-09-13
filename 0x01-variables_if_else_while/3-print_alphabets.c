#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print alphabets in lowercase and UPPERCASE
 * Return: 0
 */
int main(void)
{
	char alph;
	char alphUp;

	alph = 'a';
	do {
		putchar(alph);
		alph++;
	} while (alph <= 'z');
	alphUp = 'A';
	do {
		putchar(alphUp);
		alphUp++;
	} while (alphUp <= 'Z');
	putchar('\n');
	return (0);
}
