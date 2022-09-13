#include <stdio.h>
/**
 * main - Main entry point
 * Description: Print single digit numbers seperated by comma
 * Return: 0
 */
int main(void)
{
	int numb;

	numb = 48;
	do {
		putchar(numb);
		if (numb != 57)
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	} while (numb < 58);

putchar('\n');
return (0);
}
