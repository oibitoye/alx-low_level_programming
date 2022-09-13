#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print single digit numbers without char
 * Return: 0
 */
int main(void)
{
	int numb;

	numb = '0';
	do {
		putchar(numb);
		numb++;
	} while (numb <= '9');
putchar('\n');
return (0);
}
