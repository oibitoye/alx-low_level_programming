#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Main entry point
 * Description: The last digit
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char base = "Last digit of";
	int last = n % 10;

	if (last > 5)
	{
		printf("%d %d is %d and is greater than 5\n", base, n, last);
	}
	else if (last == 0)
	{
		printf("%d %d is %d and is 0\n", base, n, last);
	}
	else
	{
		printf("%d %d is %d and is less than 6 and not 0\n", base, n, last);
	}
	return (0);
}
