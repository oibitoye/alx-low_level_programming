#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int numb;

	numb = 612852475143;
	for (i = 3; i < 782849; i = i + 2)
	{
		while ((numb % i == 0) && (numb != i))
		{
			numb /= i;
		}
	}
	printf("%lu\n", numb);
	return (0);
}
