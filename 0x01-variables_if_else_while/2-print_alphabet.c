#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	do {
		putchar(alph);
		alph++;
	} while (alph <= 'z');
putchar('\n');
return (0);
}
