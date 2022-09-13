#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print single digit numbers
 * Return: 0
 */
int main(void)
{
	int numb;

	numb = 0;
	do {
		printf(numb);
		numb++;
	} while (numb < 10);
putchar('\n');
return (0);
}
