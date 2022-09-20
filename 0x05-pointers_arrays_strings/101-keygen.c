#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main entry
 * Return: randomly gen password
 */

int main(void)
{
	int p = 0;
	char x;

	while (p < 2646)
	{
		x = rand() % 128;
		p += x;
		putchar(x);
	}
	putchar(2772 - p);
	return (0);
}

