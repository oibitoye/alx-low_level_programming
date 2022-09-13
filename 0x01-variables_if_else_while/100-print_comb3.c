#include <stdio.h>
/**
* main - program that prints all possible different combinations of 2 digits
* Return: 0
*/
int main(void)
{
	int cx = 0;
	int fdl;
	int lld;

	while (cx <= 99)
	{
		fdl = (cx / 10 + '0');
		lld = (cx % 10 + '0');

		if (fdl < lld)
		{
			putchar(fdl);
			putchar(lld);

			if (cx != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		cx++;
	}
putchar('\n');
return (0);
}
