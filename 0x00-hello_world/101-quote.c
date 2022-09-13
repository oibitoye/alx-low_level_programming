#include <stdio.h>

/**
 * main - Main entry point
 * Description: UNIX is simple
 * Return: 1
 */

int main(void)
{
	char *words = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*words)
	{
		putchar(*words++);
	}
	return (1);
}
