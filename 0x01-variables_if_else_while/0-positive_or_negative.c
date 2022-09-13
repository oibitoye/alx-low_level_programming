#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * main - Main entry point
 * Description: Positive anything is better than negative nothing
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n)
	}
	else if (n == 0)
	{
		printf("%d is zero", n)
	}
	else
	{
		printf("%d is negative", n)
	}
	return (0);
}
